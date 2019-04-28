#ifndef _FILEH_
#define _FILEH_
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
typedef struct ennemis
{
	SDL_Rect spawn;
int i;
int k;
	SDL_Rect position;
	SDL_Surface *imagel[3];
	SDL_Surface *imager[3];
	int d;
int min;
int max;
int r;
int left;
int right ;
}ennemis;

void initialiserennemi(ennemis *e);
ennemis MoveEnemy(ennemis e);
void afficherennemi(ennemis *ennemi,SDL_Surface *ecran,SDL_Surface *background);
#endif

