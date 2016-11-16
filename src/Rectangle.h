#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "MetaObjetGraphique.h"

typedef struct Rectangle {
    struct ObjetGraphique superClasse;
    struct MetaRectangle * myClass;
    
    int m_largeur;
    int m_hauteur;
} Rectangle;

#endif