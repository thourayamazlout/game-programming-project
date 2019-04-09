#ifndef FONCTIONS_H_
#define FONCTIONS_H_


#define SCREEN_WIDTH 12000
#define SCREEN_HEIGHT 1000
#define SHEET_WIDTH 100
#define SHEET_HEIGHT 5
#define FPS 60
#define speed 10
#define SHEET_WIDTH_HERO 1507
#define SHEET_HEIGHT_HERO 400


#define TIME_BETWEEN_2_FRAMES 6
#define PLAYER_WIDTH 93
#define PLAYER_HEIGHT 200
#define PLAYER_SPEED 5


enum{WALK_RIGHT, WALK_LEFT, IMMOBILE, JUMP};
//Valeurs attribuées aux états/directions


#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

#define RIGHT 1
#define LEFT 2


#define Backg_W 12000
#define Backg_H 1000

#define MAXF 5


/*_________   structure numero 1  ____________ */



typedef struct Acteurs Acteurs;
struct Acteurs
{
	  SDL_Surface *screen;
    SDL_Event event ;

	//fond
	SDL_Surface *fond ;
	SDL_Rect posFond;

  //fond noir
  SDL_Surface* backg;
};


/*_________   structure numero 2  ____________ */

typedef struct Boutons Boutons ;
struct Boutons 
{
	  SDL_Surface *b1 ;
    SDL_Surface *b2 ;
    SDL_Surface *b3 ;
    SDL_Surface *b4 ;
    SDL_Surface *b5 ;

    SDL_Rect posB1;
    SDL_Rect posB2;
    SDL_Rect posB3;
    SDL_Rect posB4;
    SDL_Rect posB5;
};

/*_________   structure de l hero  ____________ */

typedef struct Hero Hero ;
struct Hero 
{

SDL_Surface *sprite;

/* Coordonnées du héros */
int x , y ;

/* Variables utiles pour l'animation */
int frame_timer, frame_number;
int etat  , direction ; 

};

/* prototypes */
void initialisation(Acteurs* acteurs, SDL_Rect* camera);

void initializeHero(Hero* hero) ;

void drawHero(Hero hero , Acteurs acteurs, SDL_Rect camera) ;

void updatePlayer(Hero* hero , Acteurs* acteurs, SDL_Rect camera) ;

void animation(Hero* hero, Acteurs acteurs);


#endif /* FONCTIONS_H_ */
