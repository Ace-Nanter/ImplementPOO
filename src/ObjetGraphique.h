#ifndef __OBJETGRAPHIQUE_H__
#define __OBJETGRAPHIQUE_H__

#include <stdio.h>
#include <stdlib.h>

struct MetaObjetGraphique;

typedef struct ObjetGraphique {

    // Référence vers la métaclasse 
    struct MetaObjetGraphique * myClass;

    // Attributs
    int x;
    int y;
} ObjetGraphique;


#endif