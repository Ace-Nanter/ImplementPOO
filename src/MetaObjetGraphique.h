#ifndef __METAOBJETGRAPHIQUE_H__
#define __METAOBJETGRAPHIQUE_H__


#include "ObjetGraphique.h"



typedef struct MetaObjetGraphique {

    // Méthodes d'instance
    void (*setX)(int, ObjetGraphique * );
    void (*setY)(int, ObjetGraphique * );
    
    int (*getX)(ObjetGraphique *);
    int (*getY)(ObjetGraphique *); 
 
    // Attributs de classe
    int NbObjetGraphique; 
 
    // Méthodes de classe
    int (*GetNbObjetGraphique)(void);

    // Constructeur de classe 
    void(*ConstructeurObjetGraphique) (ObjetGraphique *);
} MetaObjetGraphique;

// Instance de metaclasse
MetaObjetGraphique ClasseObjetGraphique;

// Fonction pour initialiser la metaclasse
void initMetaObjetGraphique();

#endif