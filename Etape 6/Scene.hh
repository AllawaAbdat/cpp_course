#ifndef SCENE_HH
#define SCENE_HH

#include "AbstractEntity.hh"
#include <list>

class Scene {
    public:
        std::list<AbstractEntity*> GetEntities() const;
        void AddEntity(AbstractEntity*);
        void RemoveEntity(AbstractEntity*);
        void Update();
        Scene();
    private:
        std::list<AbstractEntity*> entity;
};

#endif