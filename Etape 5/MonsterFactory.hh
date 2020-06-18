#ifndef MONSTERFACTORY_H
#define MONSTERFACTORY_H

#include <string>
#include "Character.hh"
#include "ZombieMonster.hh"
#include "SprinterMonster.hh"

class MonsterFactory {

    public:

        std::string str;
        MonsterFactory();
        virtual ~MonsterFactory();
    
        static Character *Create(const std::string& str);
};

#endif