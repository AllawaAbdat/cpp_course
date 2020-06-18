#include "TimeManager.hh"


TimeManager::TimeManager() {

};

TimeManager::~TimeManager() {

};

void TimeManager::Start() {
    start = p_update = update = std::chrono::steady_clock::now();
};

void TimeManager::Update() {
    p_update = update;
    update = std::chrono::steady_clock::now();
};

unsigned int TimeManager::GetElapsedTime() const {
    std::chrono::duration<double, std::milli> difference = update - p_update;
    return (unsigned int)difference.count();
};

unsigned int TimeManager::GetStartedTime() const {
    std::chrono::duration<double, std::milli> difference = update - start;
    return (unsigned int)difference.count();
};

TimeManager& TimeManager::GetInstance() {
    static TimeManager instance;
    return instance;
}