#ifndef _FILEH_
#define _FILEH_
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
/*typedef struct enigme
{
SDL_Surface *qst[3];
SDL_Rect posqst;
SDL_Rect *repqst1[4];
SDL_Rect *repqst2[4];
SDL_Rect *repqst3[4];
SDL_Rect posrep1;
SDL_Rect posrep2;
SDL_Rect posrep3;
SDL_Rect posrep4;
int r ;
}enigme;*/
/*typedef struct enigme
{
    char * QuestionPart1, * QuestionPart2, * QuestionPart3, * Answer1, * Answer2 , * Answer3;
	SDL_Surface *Question1,*Question2,*Question3,*Reponse1,*Reponse2,*Reponse3;
    SDL_Rect QuestionPart1Pos, QuestionPart2Pos, QuestionPart3Pos, Answer1Pos, Answer2Pos, Answer3Pos ;
    TTF_Font *Font;
	
    int InputUser, solution;
} Enigme;*/
typedef struct maps
{
	SDL_Surface *calque;
	int speed_camera;
	SDL_Rect camera;
	int buttoncameraup;
	SDL_Surface *affichage_map;
int buttoncameradown;
int buttoncameraleft;
int buttoncameraright;

int mouvement_personnage;

}maps; 

/*typedef struct temps
{
	int heur1;
	int heur2;
	int minute1;
	int minute2;
	int seconde1;
	int seconde2;
	SDL_Surface *temp;
	SDL_Rect position_temp;
	TTF_Font *police;
	int tempactuel;
	int tempprecedent;
	char chaine[20];

	
}temps;*/


typedef struct Enemy
{
  SDL_Surface *image[3];
  SDL_Surface *Hit;
  SDL_Surface *imageActuel;
  SDL_Rect position;
  int fram;
  int direction;

}Enemy;
typedef struct 
{
SDL_Surface *image ; 
SDL_Rect position ; 

} Objet ; 

typedef struct perso
{
	SDL_Rect position;
	SDL_Surface *image;
SDL_Surface *imagel[6];
	SDL_Surface *imager[6];

	int dep;

int left;
int right ;
int d ;
SDL_Rect posprec;
SDL_Rect pos ;
}perso;
void playthegame();
/*typedef struct score
{
	int nb;
	SDL_Surface *textScore;
	SDL_Rect posScore;
	
}score;*/

/*typedef struct rect_collision 
{

 int hauteur ; 
int largeur ; 
SDL_Rect position; 
} rect_collision;*/

/*typedef struct enigme{
SDL_Surface *qst[5];
SDL_Rect posqst;
SDL_Surface *rep[5];
SDL_Rect posrep1,posrep2,posrep3;
}enigme;*/
//void initialiserennemi(ennemis *ennemi);
//void afficherennemi(ennemis *ennemi,SDL_Surface *ecran,SDL_Surface *background);
//ennemis MoveEnemy(ennemis e/*,SDL_Rect personnage */);









#endif

