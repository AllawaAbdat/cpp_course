#include "Scene.hh"
#include "TimeManager.hh"

std::list<AbstractEntity*> Scene::GetEntities() const {
    return entity;
}

void Scene::AddEntity(AbstractEntity* ent) {
    entity.push_front(ent);
}

void Scene::RemoveEntity(AbstractEntity* ent) {
    entity.remove(ent);
}

void Scene::Update() {
    TimeManager& update = TimeManager::GetInstance();
    update.Update();
    for (std::list<AbstractEntity*>::iterator i = entity.begin(); i != entity.end(); ++i)
    {
        (*i)->Update();
    }
    for (std::list<AbstractEntity*>::iterator i = entity.begin(); i != entity.end(); ++i)
    {
        (*i)->Draw();
    }
}

Scene::Scene() {

}