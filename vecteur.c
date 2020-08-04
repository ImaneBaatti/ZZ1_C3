#include "vecteur.h"
#include<stdlib.h>

// definition des fonctions declarees dans vecteur.h

void    vecteurToFile(FILE * fichier, float * vecteur, int ordre) 
{
	fprintf(fichier, "[ ");
	for(int i=0; i<ordre ;i++){
		fprintf(fichier,"%.3f " ,vecteur[i]);
	}
	fprintf(fichier,"]");
}




float * vecteurFromFileByName(const char * fichier,int *ordre) 
{
	float * retour = NULL;
	FILE * fp = fopen(fichier,"r");
	if (fp){
		fscanf(fp,"%d", ordre);
		retour=malloc(*ordre*sizeof(float));
		for (int i=0; i<*ordre ;i++){
			fscanf(fp,"%f",&retour[i]);
		}
		fclose(fp);
	}

	return retour;
}


float   produitScalaire(float * vecteur1, float * vecteur2, int ordre)

{
	float retour=0;
	for (int i=0; i<ordre; i++)
	{
		
		retour=retour +vecteur1[i]*vecteur2[i];
		

	}
    return retour;
} 
libererVecteur(float ** vecteur,)
{
	free()
}
