#include "MetaRectangle.h"

// Constructeur
void ConstructeurRectangle(Rectangle * this) {
    this = (Rectangle *) malloc(sizeof(Rectangle));
    this->myClass = &ClasseRectangle;
    this->myClass->superClasse->ConstructeurObjetGraphique(&this->superClasse);
    this->m_largeur = 0;
    this->m_hauteur = 0;
}

// Getters/setters
int getLargeur(Rectangle * this) {
    return this->m_largeur;
}


int getHauteur(Rectangle * this) {
    return this->m_hauteur;
}

void setLargeur(int largeur, Rectangle * this) {
    this->m_largeur = largeur;
}


void setHauteur(int hauteur, Rectangle * this) {
    this->m_hauteur = hauteur;
}

// Initialisation de MetaRectangle
void initMetaRectangle() {
    ClasseRectangle.superClasse = &ClasseObjetGraphique;
    
    ClasseRectangle.getLargeur = getLargeur;
    ClasseRectangle.getHauteur = getHauteur;
    ClasseRectangle.setLargeur = setLargeur;
    ClasseRectangle.setHauteur = setHauteur;
    ClasseRectangle.ConstructeurRectangle = ConstructeurRectangle;
}