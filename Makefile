################################################################
#                                                              #
#  Pierre CHEVALIER - ISIMA - Projet DOTR                      #
#                                                              #
#  Fichier Makefile                                            #
#  Permet de creer les sources, les objets et l'executable     #
#  dans l'arborescence suivante :                              #
#                                                              #
#  					    $projectroot                           #
#                             |                                #
#             +---------------+----------------+               #
#             |        |           |           |               #
#           src/      obj/        res        build             #
#                                                              #
#                                                              #
################################################################

## CREATION DES VARIABLES ##

## Noms de l'arborescence ##
SRCDIR = src
OBJDIR = obj
EXEDIR = build

### Compilateur ###
CC = gcc

### FLAGS ###
CFLAGS = -c -Wall
LDFLAGS =
LIBS = 

### Liste des dependances de compilations (.hpp) ###
DEPS = 

### Creation des noms des objets a creer ###
_OBJ = main.o MetaObjetGraphique.o MetaCercle.o MetaRectangle.o
OBJ = $(patsubst %,$(OBJDIR)/%,$(_OBJ))

### Nom de l'executable ###
_EXEC = ImplementPOO
EXEC = $(EXEDIR)/$(_EXEC)

## LISTE DES REGLES ##

all:$(EXEC)
    
$(EXEC):$(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) $(LIBS) -o $@

$(OBJDIR)/%.o:$(SRCDIR)/%.c $(DEPS)
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm $(EXEC); rm $(OBJ)
	
run:
	./$(EXEC)