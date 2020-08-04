// on appelle cette constante symbolique un gardien, cela permet de s'assurer que ce fichier
// ne sera pas inclus de maniere recursive
#ifndef C3__VECTEUR_H
#define C3__VECTEUR_H

#include <stdio.h>

// prototypes incomplets des fonctions a coder
 void    vecteurToFile(FILE * fichier, float * vecteur, int taille);
 float * vecteurFromFileByName(const char * fichier,int *ordre);
float   produitScalaire(float * vecteur1, float * vecteur2, int ordre);

#endif