/**  * @file coll.c  * @brief collision parfaite   * @author  Dires    * @date Apr 28, 2019  *  * collision parfaite   *  */

//

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

#include "coll.h"

SDL_Color GetPixel (SDL_Surface* pSurface, int x, int y)
{
    SDL_Color color;
    Uint32 col = 0 ;

    //determine position
    char* pPosition = ( char* ) pSurface->pixels ;

    //offset by y
    pPosition += ( pSurface->pitch * y ) ;

    //offset by x
    pPosition += ( pSurface->format->BytesPerPixel * x ) ;

    //copy pixel data
    memcpy ( &col, pPosition, pSurface->format->BytesPerPixel ) ;

    //convert color
    SDL_GetRGB ( col, pSurface->format, &color.r, &color.g, &color.b ) ;
    return ( color ) ;
}

int collision(perso *perso,maps map)
{
int i;
int decalage=1;
  SDL_Color col;
  if(perso->d==6)//ymin
  {
    col=GetPixel(map.calque,perso->position.x+perso->imager[0]->w+decalage+map.camera.x,perso->position.y+(perso->imager[0]->h)+map.camera.y);
  }
else  if(perso->d==4)//issar
  {
    col=GetPixel(map.calque,perso->position.x +decalage+map.camera.x,perso->position.y+(perso->imager[0]->h)+map.camera.y);
  }

  printf("%d    %d   %d\n",col.r,col.b,col.g );
if ((col.r==255)&&(col.b==255)&&(col.g==255))
{
  i=1;
}
else i=0;


return i;
}

/*int bounding_box(SDL_Rect box1,SDL_Rect box2,maps *map)

{

   if((box2.x+m->camera.x >= box1.x+m->camera.x + box1.w/2)      // trop à droite

    || (box2.x+m->camera.x + box2.w/2 <= box1.x+m->camera.x) // trop à gauche

    || (box2.y+m->camera.y >= box1.y+m->camera.y + box1.h/2) // trop en bas

    || (box2.y+m->camera.y + box2.h/2 <= box1.y+m->camera.y))  // trop en haut


          return 0; 
   else

          return 1; 


}
*/



