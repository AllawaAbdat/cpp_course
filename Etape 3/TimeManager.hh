#ifndef TIMEMANAGER_HH
#define TIMEMANAGER_HH

#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

class TimeManager {
    
    private:

    TimeManager();
    ~TimeManager();
    TimeManager& operator=(const TimeManager&) = delete;
    TimeManager(const TimeManager&) = delete;

    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point update;
    std::chrono::steady_clock::time_point p_update;

    public:

    static TimeManager& GetInstance();
    void Start();
    void Update();
    unsigned int GetElapsedTime() const;
    unsigned int GetStartedTime() const;
};

#endif

