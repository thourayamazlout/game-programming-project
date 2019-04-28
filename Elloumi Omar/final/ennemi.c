#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "file.h"
//#include "menu2.h"
void initialiserennemi(ennemis *e){

e->imager[0] = IMG_Load("d.png");
e->imager[1] = IMG_Load("e.png");
e->imager[2] = IMG_Load("f.png");
e->imagel[0] = IMG_Load("a.png");
e->imagel[1] = IMG_Load("b.png");
e->imagel[2] = IMG_Load("c.png");
e->position.x=300;
e->position.y=300;
e->max=800;
e->min=300;
e->right=0;
e->left=0;
}


 ennemis MoveEnemy(ennemis e)
{
do
{
e.r= rand() ;

}while ((e.r>300)&&(e.r<800));


if (e.r>e.position.x){e.d=6;}
if (e.r<e.position.x){e.d=4;} 




return e;
}

void afficherennemi(ennemis *e,SDL_Surface *ecran,SDL_Surface *background){
int i;
SDL_Rect posbackground ;
posbackground.x=0;
posbackground.y=0;

if (e->d==6)


	{
	
i=e->right;
e->position.x++;
SDL_BlitSurface(background,NULL, ecran,&posbackground);
SDL_Flip(ecran);
SDL_BlitSurface(e->imager[e->right], NULL, ecran, &e->position);
SDL_Flip(ecran);

	}
if (e->d==4)

	
	{
i=e->left;
e->position.x--;
SDL_BlitSurface(background,NULL, ecran,&posbackground);
SDL_Flip(ecran);
SDL_BlitSurface(e->imagel[e->left], NULL, ecran, &e->position);
SDL_Flip(ecran);
	}

}





