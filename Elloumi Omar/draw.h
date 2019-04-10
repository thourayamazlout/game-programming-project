
#include "structs.h"

/* Prototypes des fonctions utilisées */
extern void drawMap(void);
extern void drawanimatedplayer(void);
void initialiserObj( Objet *obj , char name[] , int x , int y ) ;
void affichageObj ( Objet obj , SDL_Surface *screen) ;

/* Structures globales */
extern Gestion jeu;
extern Map map;
Objet Obj;
