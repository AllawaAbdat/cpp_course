#ifndef ABSTRACTENTITY_HH
#define ABSTRACTENTITY_HH

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

class AbstractEntity {
    public:

    AbstractEntity(); // Constructeur
    virtual ~AbstractEntity(); // Deconstructeur

    virtual void Draw() = 0; // Méthode virtuelle initialisé à 0
    virtual void Update() = 0; // Méthode virtuelle initialisé à 0
};

#endif