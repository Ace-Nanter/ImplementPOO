#include "MetaCercle.h"

// Constructeur
void ConstructeurCercle(Cercle * this) {
    this = (Cercle *) malloc(sizeof(Cercle));
    this->myClass = &ClasseCercle;
    this->myClass->superClasse->ConstructeurObjetGraphique(&this->superClasse);
    this->m_rayon = 0;
}


// Getters/setters
int getRayon(Cercle * this) {
    return this->m_rayon;
}

void setRayon(int rayon, Cercle * this) {
    this->m_rayon = rayon;
}

// Initialisation de MetaCercle
void initMetaCercle() {
    ClasseCercle.superClasse = &ClasseObjetGraphique;

    ClasseCercle.getRayon = getRayon;
    ClasseCercle.setRayon = setRayon;
    ClasseCercle.ConstructeurCercle = ConstructeurCercle;
}