#ifndef __METACERCLE_H__
#define __METACERCLE_H__

#include "Cercle.h"


typedef struct MetaCercle {
    struct MetaObjetGraphique * superClasse; 
 
   // Méthodes d'instances
   int  (*getRayon)(Cercle *);
   void (*setRayon)(int rayon, Cercle *); 
 
   // Constructeur 
   void (*ConstructeurCercle)(Cercle *);
} MetaCercle;  

// Instance de meta cercle
MetaCercle ClasseCercle;

// Fonction pour initialiser la metaclasse
void initMetaCercle();

#endif