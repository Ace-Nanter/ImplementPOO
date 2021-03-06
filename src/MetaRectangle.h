#ifndef __METARECTANGLE_H__
#define __METARECTANGLE_H__

#include "Rectangle.h"

typedef struct MetaRectangle {
    MetaObjetGraphique * superClasse;

    // Methodes d'instance 
    int (*getLargeur)(Rectangle *);
    int (*getHauteur)(Rectangle *);

    void (*setLargeur)(int, Rectangle *);
    void (*setHauteur)(int, Rectangle *); 
 
    // Constructeur de la classe
    void (*ConstructeurRectangle)(Rectangle *); 

} MetaRectangle;

// Methodes héritées
void afficherRectangle(ObjetGraphique *);
void effacerRectangle(ObjetGraphique *);
void deplacerRectangle(ObjetGraphique *);

int getCentreRectangleX(ObjetGraphique *);
int getCentreRectangleY(ObjetGraphique *);

// instance de meta rectangle
MetaRectangle ClasseRectangle;

// Fonction pour initialiser la metaclasse
void initMetaRectangle();

#endif