
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "scrolling.h"
maps Initialiser_map (maps map)
{
map.speed_camera=10;
map.camera.x=0;
map.camera.y=0;
map.camera.h=600;
map.camera.w=800;
map.buttoncameraright=0;
map.buttoncameraup=0;
map.buttoncameradown=0;
map.buttoncameraleft=0;
//map.changer=0;//
map.affichage_map=NULL;
map.affichage_map=IMG_Load("map.png");
map.calque=NULL;
map.calque =IMG_Load("calque.png");

	return map;
}

void scrolling (maps *map , SDL_Surface *ecran , perso *p)
{

if ((p->d==6)&&(map->camera.x<=700))
{


	map->camera.x+=map->speed_camera;
        p->position.x-=10;
	

	
}

if ((p->d==4)&&(map->camera.x>=60))
{


map->camera.x-=map->speed_camera;
p->position.x+=10;
	
}



}

