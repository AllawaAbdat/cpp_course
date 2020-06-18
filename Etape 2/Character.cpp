#include "Character.hh"

void Character::SetX(const double &X) {
    this->X = X;
}

void Character::SetY(const double &Y) {
    this->Y = Y;
}

void Character::SetLife(const int &Life) {
    this->Life = Life;
}

const double &Character::GetX() const {
    return this->X;
}

const double &Character::GetY() const {
    return this->Y;
}

const int &Character::GetLife() const {
    return this->Life;
}

void Character::Update() {

    AbstractEntity::Update();
}

void Character::Draw() {

    AbstractEntity::Draw();
}


Character::Character() {

}

Character::~Character() {

}