/**  * @file objet.c  * @brief l'initialisation d'objet et l'afficher   * @author  Dires    * @date May 8, 2019  *  * l'initialisation d'objet et l'afficher  *  */

#include "object.h"

void initialiserObj( Objet *obj , char name[] , int x , int y )
{

	       obj->image =  IMG_Load(name);
	      if  ( obj->image  ==  NULL )  {
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ());
         exit ( 1 );
     }
     else
     {

     obj->position.x  =  x ;
     obj->position.y  =  y ;
     obj->position.h  =  obj->image->h ;
     obj->position.w  =  obj->image->w ;
}

}

void affichageObj ( Objet obj , SDL_Surface *screen)
{

SDL_BlitSurface(obj.image, NULL, screen, &(obj.position));
SDL_Flip(screen);

}
