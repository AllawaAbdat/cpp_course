#ifndef SPRINTERMONSTER_HH
#define SPRINTERMONSTER_HH

#include "Character.hh"
#include "TimeManager.hh"

class SprinterMonster : public Character, public TimeManager {
    public:
        SprinterMonster();
        virtual ~SprinterMonster();
        virtual void Update() override;

    private:

    protected:

};

#endif