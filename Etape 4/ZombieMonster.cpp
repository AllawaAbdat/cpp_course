#include "ZombieMonster.hh"

ZombieMonster::ZombieMonster() : Character(100) {

}

ZombieMonster::~ZombieMonster() {
    
}

void ZombieMonster::Update() {

    Character::Update();
    const double pos = (double)TimeManager::GetInstance().GetElapsedTime() / 1000;
    this->SetX(pos);
    this->SetY(pos);
}