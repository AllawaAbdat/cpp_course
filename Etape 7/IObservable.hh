#ifndef IOBSERVABLE_HH
#define IOBSERVABLE_HH
#pragma once

#include <list>

class IObserver;

class IObservable {

    protected:
        std::list<IObserver*> Observer;
        virtual ~IObservable() {}

    public:
        virtual void AddObserver(IObserver*) {}
        virtual void RemoveObserver(IObserver*) {}
};

#endif