#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "ennemi.h"
//#include "menu2.h"
void initialiserennemi(ennemis *e){

e->fond1=IMG_Load("a.png");
e->fonda=IMG_Load("b.png");
e->position.x=100;
e->position.y=500;
e->max=700;
e->min=100;
}


ennemis MoveEnemy(ennemis e)
{
int x=1;
while (x==1){
e.r=rand();
if ((e.r>100)&&(e.r<700)){x=0;}
}
if (e.r>e.position.x){e.d=6;}
if (e.r<e.position.x){e.d=4;} 




return e;
}

void afficherennemi(ennemis *ennemi,SDL_Surface *ecran,SDL_Surface *background){
int x=1;
SDL_Rect posbackground ;
posbackground.x=0;
posbackground.y=0;

while (x){
if (ennemi->d==6){
ennemi->position.x++;

SDL_BlitSurface(background,NULL, ecran,&posbackground);
SDL_BlitSurface(ennemi->fonda, NULL, ecran, &ennemi->position);
SDL_Flip(ecran);
}if(ennemi->d==4){
ennemi->position.x--;
SDL_BlitSurface(background,NULL, ecran,&posbackground);
SDL_BlitSurface(ennemi->fond1, NULL, ecran, &ennemi->position);
SDL_Flip(ecran);}
if (ennemi->position.x==ennemi->r)x=0;
}

}

int main(){
SDL_Surface *ecran=NULL;
SDL_Surface *background=NULL;
int continuer=1;
 SDL_Event event;
ennemis e;
initialiserennemi(&e);
ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);
background=IMG_Load("menu.jpg");
while (continuer==1){
e=MoveEnemy( e/*,SDL_Rect personnage */);
afficherennemi(&e,ecran,background);
while (SDL_PollEvent(&event)){
switch(event.type)
    {
        case SDL_QUIT:
            continuer = 0;
  			break;
}


}
}
//SDL_FreeSurface(background); /* On libère la surface */

//SDL_FreeSurface(ecran);
//SDL_FreeSurface(ennemi);
//SDL_FreeSurface(help);
//SDL_FreeSurface(exite);

 //SDL_Quit();
  //SDL_Quit();
//TTF_CloseFont(police);

    return 0;
}

