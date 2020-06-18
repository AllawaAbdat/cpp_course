#include "SprinterMonster.hh"

SprinterMonster::SprinterMonster() : Character(25) {

}

SprinterMonster::~SprinterMonster() {

}

void SprinterMonster::Update() {

    Character::Update();
    const double pos = (double)TimeManager::GetInstance().GetElapsedTime() / 200;
    this->SetX(pos);
    this->SetY(pos);
}