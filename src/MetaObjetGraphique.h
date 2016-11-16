#ifndef __METAOBJETGRAPHIQUE_H__
#define __METAOBJETGRAPHIQUE_H__


#include "ObjetGraphique.h"



struct MetaObjetGraphique {

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
};


#endif