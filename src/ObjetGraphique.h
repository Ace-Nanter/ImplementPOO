#ifndef __OBJETGRAPHIQUE_H__
#define __OBJETGRAPHIQUE_H__

#include <stdio.h>
#include <stdlib.h>

#define NBCLASSES 2
typedef enum OG_t {CERCLE=0, RECTANGLE=1, OG=2} OG_t;

struct MetaObjetGraphique;

typedef struct ObjetGraphique {

    // Référence vers la métaclasse 
    struct MetaObjetGraphique * myClass;

    // Attributs
    int m_x;
    int m_y;
    OG_t type;
} ObjetGraphique;


#endif