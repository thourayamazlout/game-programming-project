#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "ennemi.h"
Enemy InitEnemy(Enemy Ennemie,int x,int y)
{
  Ennemie.image[0]=IMG_Load("a.png");
  Ennemie.image[1]=IMG_Load("b.png");
  Ennemie.image[2]=IMG_Load("c.png");
  Ennemie.Hit=IMG_Load("a.png");
  Ennemie.imageActuel=Ennemie.image[0];
  Ennemie.position.x=x;
  Ennemie.position.y=y;
  Ennemie.fram=0;
  Ennemie.direction=0;
  return Ennemie;
}
void movenemy(SDL_Rect camera,Enemy *enemy,int direction)
{if(direction==0)
enemy->position.x-=camera.x;
if(direction==1)
enemy->position.x+=camera.x;

}
void  AfficherEnemy(Enemy Ennemie,SDL_Surface *screen)
{
  SDL_BlitSurface(Ennemie.imageActuel,NULL,screen,&Ennemie.position);
SDL_Flip(screen);
}
