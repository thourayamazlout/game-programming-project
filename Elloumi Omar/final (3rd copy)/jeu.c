/**  * @file jeu.c  * @brief l'affichage du jeu   * @author  Dires    * @date May 7, 2019  *  * initialisation et affichage du jeu  *  */
#include <stdio.h>
#include <SDL/SDL.h>
#include <time.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include "file.h"
#include "scrolling.h"
#include "per.h"
#include "coll.h"
#include "ennemi.h"
#include "object.h"
void playthegame(){

perso p;
maps map;
Enemy e;
SDL_Event event;
SDL_Rect pos;
pos.x=0;
pos.y=0;
int d=0;
Objet Obj;

SDL_Surface *ecran=NULL,*background=NULL,*calque=NULL;
int continuer=1,c;

ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);

map=Initialiser_map ( map);
initialiserperso(&p);
e=InitEnemy(e,700,400);
SDL_BlitSurface(map.affichage_map,&map.camera, ecran,NULL);

SDL_BlitSurface(background,NULL, ecran,&p.position);
//SDL_BlitSurface(background,NULL, ecran,&e.position);

SDL_EnableKeyRepeat(40, 40);
 initialiserObj( &Obj ,"C.png" ,  600 ,  500 ) ; 
    
while(continuer){
if (e.position.x>p.position.x) d=0; else d=1;
AfficherEnemy(e,map.affichage_map);
movenemy(map.camera,&e,d);

affichageObj (Obj ,map.affichage_map) ;



while (SDL_PollEvent(&event)){
switch(event.type)
    {
        case SDL_QUIT:
            continuer = 0;
  			break;
case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
 				case SDLK_ESCAPE:
		    		continuer=0 ;
					break ;
				case SDLK_RIGHT :
					p.d=6;
//if (collision(&p,map)==0)
//{
if (p.position.x<730){
p=bouger(p);

afficherperso(&p,ecran,background,map);

scrolling (&map , ecran , &p);}
//}

					break;
				case SDLK_LEFT :
					p.d=4;


//if (collision(&p,map)==0)
//{
p=bouger(p);

afficherperso(&p,ecran,background,map);

scrolling (&map , ecran , &p);
//}



					break ;      
		
		





					

	    }
	    
		

}
}
}

SDL_Flip(ecran);

SDL_Quit();

}



