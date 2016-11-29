#include "MetaCercle.h"

// Constructeur
void ConstructeurCercle(Cercle * this) {
    this->myClass = &ClasseCercle;
    this->myClass->superClasse->ConstructeurObjetGraphique(&this->superClasse);
    this->superClasse.type = CERCLE;

    // Initialisation attributs
    this->m_rayon = 0;
}

// Getters/setters
int getRayon(Cercle * this) {
    return this->m_rayon;
}

void setRayon(int rayon, Cercle * this) {
    this->m_rayon = rayon;
}

// Méthodes héritées
void afficherCercle(ObjetGraphique * this) {
    Cercle * thisCercle = (Cercle *) this;
    printf("Cercle de rayon %d\n", thisCercle->m_rayon);
}

// TODO : A modifier ?
void effacerCercle(ObjetGraphique * this) {
    Cercle * thisCercle = (Cercle *) this;
    printf("Effacer cercle de rayon %d\n", thisCercle->m_rayon);
}

// TODO : A modifier ?
void deplacerCercle(ObjetGraphique * this) {
    Cercle * thisCercle = (Cercle *) this;
    printf("Deplacer cercle de rayon %d\n", thisCercle->m_rayon);
}

int getCentreCercleX(ObjetGraphique * this) {
    return this->m_x;
}

int getCentreCercleY(ObjetGraphique * this) {
    return this->m_y;
}

// Initialisation de MetaCercle
void initMetaCercle() {
    ClasseCercle.superClasse = &ClasseObjetGraphique;

    ClasseCercle.getRayon = getRayon;
    ClasseCercle.setRayon = setRayon;
    ClasseCercle.ConstructeurCercle = ConstructeurCercle;

    ClasseObjetGraphique.TVMafficher[CERCLE] = &afficherCercle;
    ClasseObjetGraphique.TVMeffacer[CERCLE] = &effacerCercle;
    ClasseObjetGraphique.TVMdeplacer[CERCLE] = &deplacerCercle;

    ClasseObjetGraphique.TVMgetCentreX[CERCLE] = &getCentreCercleX;
    ClasseObjetGraphique.TVMgetCentreY[CERCLE] = &getCentreCercleY;
}