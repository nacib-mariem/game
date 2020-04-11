clude <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "personnage.h"
//#include "background.h"

void init_persoP(personnage *p)
{
p->position.x=0;
p->position.y=470;
char nomFich[25];
int i;


for(i=0;i<24;i++)
{
    sprintf(nomFich,"%d.png",i);
    p->tab[i]=IMG_Load(nomFich);
}

//p->sens_mouvement=1;
p->position_actuel=11;
p->time=0;
p->score=0;
p->vie=5;
}

void afficher_personnageP(personnage *p,SDL_Surface *ecran)
{
    SDL_BlitSurface(p->tab[p->position_actuel],NULL,ecran,&(p->position));
}

