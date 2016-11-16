#ifndef __CERCLE_H__
#define __CERCLE_H__


#include "MetaObjetGraphique.h"

struct MetaCercle;

typedef struct Cercle {
    struct ObjetGraphique superClasse;
    struct MetaCercle * myClass;
    
    int m_rayon;
} Cercle; 


#endif