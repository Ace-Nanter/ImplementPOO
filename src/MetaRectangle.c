#include "MetaRectangle.h"

// Constructeur
void ConstructeurRectangle(Rectangle * this) {
    this->myClass = &ClasseRectangle;
    this->myClass->superClasse->ConstructeurObjetGraphique(&this->superClasse);
    this->superClasse.type = RECTANGLE;

    // Initialisation attributs
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

// Méthodes héritées
void afficherRectangle(ObjetGraphique * this) {
    Rectangle * thisRectangle = (Rectangle *) this;
    printf("Rectangle de largeur %d et de hauteur %d\n",
        thisRectangle->m_largeur, thisRectangle->m_hauteur);
}

// TODO : A modifier ?
void effacerRectangle(ObjetGraphique * this) {
    Rectangle * thisRectangle = (Rectangle *) this;
    printf("Effacer rectangle de largeur %d et de hauteur %d\n",
        thisRectangle->m_largeur, thisRectangle->m_hauteur);
}

// TODO : A modifier ?
void deplacerRectangle(ObjetGraphique * this) {
    Rectangle * thisRectangle = (Rectangle *) this;
    printf("Deplacer rectangle de largeur %d et de hauteur %d\n",
        thisRectangle->m_largeur, thisRectangle->m_hauteur);
}

int getCentreRectangleX(ObjetGraphique * this) {
    Rectangle * thisRectangle = (Rectangle *) this;
    return (int) (thisRectangle->m_largeur / 2);
}

int getCentreRectangleY(ObjetGraphique * this) {
    Rectangle * thisRectangle = (Rectangle *) this;
    return (int) (thisRectangle->m_hauteur / 2);
}

// Initialisation de MetaRectangle
void initMetaRectangle() {
    ClasseRectangle.superClasse = &ClasseObjetGraphique;
    
    ClasseRectangle.getLargeur = getLargeur;
    ClasseRectangle.getHauteur = getHauteur;
    ClasseRectangle.setLargeur = setLargeur;
    ClasseRectangle.setHauteur = setHauteur;
    ClasseRectangle.ConstructeurRectangle = ConstructeurRectangle;

    ClasseObjetGraphique.TVMafficher[RECTANGLE] = &afficherRectangle;
    ClasseObjetGraphique.TVMeffacer[RECTANGLE] = &effacerRectangle;
    ClasseObjetGraphique.TVMdeplacer[RECTANGLE] = &deplacerRectangle;

    ClasseObjetGraphique.TVMgetCentreX[RECTANGLE] = &getCentreRectangleX;
    ClasseObjetGraphique.TVMgetCentreY[RECTANGLE] = &getCentreRectangleY;
}