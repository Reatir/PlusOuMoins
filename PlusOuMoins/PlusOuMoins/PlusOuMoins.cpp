// PlusOuMoins.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	const int MIN = 1, MAX = 100 , NbTourMax = 10;
	int NbPropose,NbTour,nombre, Gagne;
	char choix;
	srand(time(NULL)); // Initialise le générateur aléatoire, ne doit être fait qu'une seul fois
	do {
		NbTour = 0;
		Gagne = 0;
		// Génération du nombre aléatoire
		nombre = (rand() % (MAX - MIN + 1)) + MIN;
		printf("Trouvez le nombre entre %d et %d\n\n",MIN,MAX);
		
		do
		{
			printf("Choisissez un nombre : ");
			scanf("%d", &NbPropose);
			printf("\n");
			NbTour++;
			if (NbPropose > nombre)
			{
				printf("Le nombre propose est plus grand de le nombre recherche\n\n");
				printf("Il vous reste %d tours\n\n", NbTourMax - NbTour);
			}
			else if (NbPropose < nombre)
			{
				printf("Le nombre propose est plus petit de le nombre recherche\n\n");
				printf("Il vous reste %d tours\n\n", NbTourMax - NbTour);
			}
			else if (NbPropose = nombre)
			{
				Gagne = 1;
			}
			
			
		} while ((NbTour != NbTourMax) && (Gagne == 0));

		if (Gagne)
		{
			printf("Bravo! vous avez gagne\n");
			printf("vous avez trouve %d en %d tour\n", nombre, NbTour);
		}
		else
		{
			printf("Vous avez perdu\n");
			printf("Le nombre a trouve etait %d\n", nombre);
		}

		printf("\n\nVoulez-vous rejouer(y/n)");
		int c;
		while ((c = getchar()) != '\n' && c != EOF) {}
		scanf("%c", &choix);
		printf("\n\n");
		system("cls");
	} while (choix == 'y');

	return 0;
}