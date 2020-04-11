#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "background.h"

typedef struct  personnage
{
	int vie;
	int sens_mouvement;
	int position_actuel; 
	//int positiongauche;
    SDL_Rect position;
	SDL_Surface *tab[25];
	float time;
	int score;
	SDL_Rect pos_score;

	int objective; 
}personnage;


void init_persoP(personnage *p);
void afficher_personnageP(personnage *p,SDL_Surface *ecran);







