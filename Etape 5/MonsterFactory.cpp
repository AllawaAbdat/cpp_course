#include "MonsterFactory.hh"
#include <string>

MonsterFactory::MonsterFactory() {

}

MonsterFactory::~MonsterFactory() {

}

Character *MonsterFactory::Create(const std::string& str) {

    if (str == "ZombieMonster") {
        return new ZombieMonster;
    } else if (str == "SprinterMonster") {
        return new SprinterMonster;
    } else {
        return nullptr;
    }
}