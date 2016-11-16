#include "MetaObjetGraphique.h"
#include "MetaCercle.h"
#include "MetaRectangle.h"

void init();

int main(int argc, char ** argv) {

    // Déclaration variables
    ObjetGraphique o;
    Rectangle r;

    // Pointeurs
    ObjetGraphique * pO = &o;
    Rectangle * pR = &r;

    printf("Entree dans le programme de test\n");

    // Initialisation des metaclasses
    init();

    // Création d'une instance objetGraphique
    ClasseObjetGraphique.ConstructeurObjetGraphique(pO);

    // Utilisation setters
    ClasseObjetGraphique.setX(2, pO);
    ClasseObjetGraphique.setY(5, pO);

    // Utilisation getters
    printf("Objet cree\n");
    printf("x vaut : %d - y vaut : %d\n", ClasseObjetGraphique.getX(pO), ClasseObjetGraphique.getY(pO));

    // Création d'un Rectangle
    printf("Creation d'un rectangle\n");
    ClasseRectangle.ConstructeurRectangle(pR);

    ClasseRectangle.setLargeur(10, pR);
    ClasseRectangle.setHauteur(5, pR);
    printf("Largeur vaut : %d - Hauteur vaut : %d\n", ClasseRectangle.getLargeur(pR), ClasseRectangle.getHauteur(pR));

    return 0;
}

void init() {
    initMetaObjetGraphique();
    initMetaCercle();
    initMetaRectangle();
}