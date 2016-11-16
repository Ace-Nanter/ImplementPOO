#include "MetaObjetGraphique.h"

// Constructeur
void ConstructeurObjetGraphique(ObjetGraphique ** this) {
    (*this) = (ObjetGraphique *) malloc(sizeof(ObjetGraphique));
    (*this)->x = 0;
    (*this)->y = 0;
    (*this)->myClass = &ClasseObjetGraphique;
}

// Methode statique
int GetNbObjetGraphique() {
    return ClasseObjetGraphique.NbObjetGraphique;
}

// Getters/setters
int getX(ObjetGraphique * this) {
    return this->x;
}

void setX(int pX, ObjetGraphique * this) {
    this->x = pX;
}

int getY(ObjetGraphique * this) {
    return this->y;
}

void setY(int pY, ObjetGraphique * this) {
    this->y = pY;
}

// Initialisation de MetaObjetGraphique
void initMetaObjetGraphique() {
    ClasseObjetGraphique.getX = getX;
    ClasseObjetGraphique.getY = getY;
    ClasseObjetGraphique.setX = setX;
    ClasseObjetGraphique.setY = setY;
    ClasseObjetGraphique.GetNbObjetGraphique = GetNbObjetGraphique;
    ClasseObjetGraphique.ConstructeurObjetGraphique = ConstructeurObjetGraphique;
}