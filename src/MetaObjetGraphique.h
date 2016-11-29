#ifndef __METAOBJETGRAPHIQUE_H__
#define __METAOBJETGRAPHIQUE_H__


#include "ObjetGraphique.h"

typedef struct MetaObjetGraphique {

    // Méthodes d'instance
    void (*setX)(int, ObjetGraphique * );
    void (*setY)(int, ObjetGraphique * );
    
    int (*getX)(ObjetGraphique *);
    int (*getY)(ObjetGraphique *); 

    // Tableau Virtual Methods : TVM
    void (*TVMafficher[NBCLASSES])(ObjetGraphique *);
    void (*TVMeffacer[NBCLASSES])(ObjetGraphique *);
    void (*TVMdeplacer[NBCLASSES])(ObjetGraphique *);
    int (*TVMgetCentreX[NBCLASSES + 1])(ObjetGraphique *);
    int (*TVMgetCentreY[NBCLASSES + 1])(ObjetGraphique *);

    // Pointeur pour appeler les méthodes
    void (*effacer)(ObjetGraphique *);
    void (*afficher)(ObjetGraphique *);
    void (*deplacer)(ObjetGraphique *);
    int (*getCentreX)(ObjetGraphique *);
    int (*getCentreY)(ObjetGraphique *);
 
    // Attributs de classe
    int NbObjetGraphique; 
 
    // Méthodes de classe
    int (*GetNbObjetGraphique)(void);

    // Constructeur de classe 
    void(*ConstructeurObjetGraphique) (ObjetGraphique *);
} MetaObjetGraphique;

// Méthodes héritées
int getCentreX(ObjetGraphique *);
int getCentreY(ObjetGraphique *); 

// Instance de metaclasse
MetaObjetGraphique ClasseObjetGraphique;

// Fonction pour initialiser la metaclasse
void initMetaObjetGraphique();

#endif