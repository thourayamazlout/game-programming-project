#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "file.h"


void initialiserperso(perso *p){

p->left=0;
p->right=0;
p->d=0;
p->imager[0] = IMG_Load("p1.png");
p->imager[1] = IMG_Load("p2.png");
p->imager[2] = IMG_Load("p3.png");
p->imager[3] = IMG_Load("p4.png");
p->imager[4] = IMG_Load("p5.png");
p->imager[5] = IMG_Load("p6.png");
p->imagel[0] = IMG_Load("p7.png");
p->imagel[1] = IMG_Load("p8.png");
p->imagel[2] = IMG_Load("p9.png");
p->imagel[3] = IMG_Load("p10.png");
p->imagel[4] = IMG_Load("p11.png");
p->imagel[5] = IMG_Load("p12.png");
p->position.x=50;
p->position.y=450;
p->posprec.x=300;
p->posprec.y=400;
}

perso bouger( perso p){
switch (p.d)
{

	case 6:
	{
p.right++;
p.position.x+=10;

	}
break;
	case 4:
	{
p.left++;
	p.position.x-=10;
	}
break;
	

	

}
if(p.right==5){p.right=0;}
if (p.left==5){p.left=0;}

return p;

}
void afficherperso(perso *p,SDL_Surface *ecran,SDL_Surface *background,maps map){
SDL_Rect pos;
pos.x=0;
pos.y=0;
if(p->d==6){
SDL_BlitSurface(map.affichage_map,&map.camera, ecran,NULL);
SDL_Flip(ecran);
SDL_BlitSurface(p->imager[p->right],NULL, ecran,&p->position);
SDL_Flip(ecran);



p->left=0;
}
if (p->d==4){SDL_BlitSurface(map.affichage_map,&map.camera, ecran,NULL);
SDL_Flip(ecran);
SDL_BlitSurface(p->imagel[p->left],NULL, ecran,&p->position);
SDL_Flip(ecran); 

p->right=0;

}

}




