#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "file.h"
Enemy InitEnemy(Enemy Ennemie,int x,int y);
void  AfficherEnemy(Enemy Ennemie,SDL_Surface *screen);
void movenemy(SDL_Rect camera,Enemy *enemy,int direction);
