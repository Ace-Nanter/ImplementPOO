#include "MetaObjetGraphique.h"

// Constructeur
void ConstructeurObjetGraphique(ObjetGraphique * this) {
    this->m_x = 0;
    this->m_y = 0;
    this->myClass = &ClasseObjetGraphique;
    this->type = OG;
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

void afficher(ObjetGraphique * this) {
    ClasseObjetGraphique.TVMafficher[this->type](this);
}

void effacer(ObjetGraphique * this) {
    ClasseObjetGraphique.TVMeffacer[this->type](this);
}

void deplacer(ObjetGraphique * this) {
    ClasseObjetGraphique.TVMdeplacer[this->type](this);
}

// Méthodes héritées
int getCentreX(ObjetGraphique * this) {
    return ClasseObjetGraphique.TVMgetCentreX[this->type](this);
}

int getCentreY(ObjetGraphique * this) {
    return ClasseObjetGraphique.TVMgetCentreY[this->type](this);
}

// Initialisation de MetaObjetGraphique
void initMetaObjetGraphique() {
    ClasseObjetGraphique.getX = getX;
    ClasseObjetGraphique.getY = getY;
    ClasseObjetGraphique.setX = setX;
    ClasseObjetGraphique.setY = setY;
    ClasseObjetGraphique.GetNbObjetGraphique = GetNbObjetGraphique;
    ClasseObjetGraphique.ConstructeurObjetGraphique = ConstructeurObjetGraphique;

    ClasseObjetGraphique.afficher = &afficher;
    ClasseObjetGraphique.effacer = &effacer;
    ClasseObjetGraphique.deplacer = &deplacer;

    ClasseObjetGraphique.getCentreX = &getCentreX;
    ClasseObjetGraphique.getCentreY = &getCentreY;
}