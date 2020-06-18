#ifndef ZOMBIEMONSTER_HH
#define ZOMBIEMONSTER_HH

#include "Character.hh"
#include "TimeManager.hh"

class ZombieMonster : public Character, public TimeManager {
    public:

        ZombieMonster();
        virtual ~ZombieMonster();
        virtual void Update() override;

    private:

    protected:
};

#endif