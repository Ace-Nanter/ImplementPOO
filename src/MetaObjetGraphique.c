#include "MetaObjetGraphique.h"

// Constructeur
void ConstructeurObjetGraphique(ObjetGraphique * this) {
    this = (ObjetGraphique *) malloc(sizeof(ObjetGraphique));
    this->m_x = 0;
    this->m_y = 0;
    this->myClass = &ClasseObjetGraphique;
}

// Methode statique
int GetNbObjetGraphique() {
    return ClasseObjetGraphique.NbObjetGraphique;
}

// Getters/setters
int getX(ObjetGraphique * this) {
    return this->m_x;
}

int getY(ObjetGraphique * this) {
    return this->m_y;
}

void setX(int x, ObjetGraphique * this) {
    this->m_x = x;
}

void setY(int y, ObjetGraphique * this) {
    this->m_y = y;
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