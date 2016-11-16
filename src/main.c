#include "MetaObjetGraphique.h"

void init();

int main(int argc, char ** argv) {

    // Déclaration variables
    ObjetGraphique * o = NULL;

    printf("Entree dans le programme de test\n");

    // Initialisation des metaclasses
    init();

    // Création d'une instance objetGraphique
    ClasseObjetGraphique.ConstructeurObjetGraphique(&o);

    if(o != NULL) {
        // Utilisation setters
        ClasseObjetGraphique.setX(2, o);
        ClasseObjetGraphique.setY(5, o);

        // Utilisation getters
        printf("Objet cree\n");
        printf("x vaut : %d - y vaut : %d\n", ClasseObjetGraphique.getX(o), ClasseObjetGraphique.getY(o));

    }

    return 0;
}

void init() {
    initMetaObjetGraphique();
}