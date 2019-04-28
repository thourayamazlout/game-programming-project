#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h> 
#include <SDL/SDL_mixer.h>
#include "MENU.h"

int main( int argc, char *argv[] )
 {



posbackground.x=0;
posbackground.y=0;
posplay.x=218;
posplay.y=238;
posseting.x=218;
posseting.y=345.7;
posexit.x=218;
posexit.y=452;
posplay2.x=218;
posplay2.y=238;
posseting2.x=218;
posseting2.y=345.7;
posexit2.x=218;
posexit2.y=452;
posim.x=299;
posim.y=530;
posim2.x=320;
posim2.y=530;
posim3.x=340;
posim3.y=530;


SDL_Init( SDL_INIT_VIDEO ); 
ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE );
     SDL_WM_SetCaption("School Tale", NULL);


 if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1) 
     {
    	printf("%s", Mix_GetError());
     }
 
     musique = Mix_LoadMUS("musique.mp3");
     

//background=IMG_Load("background.jpg");
//SDL_BlitSurface(background,NULL,ecran,&posbackground);
play= IMG_Load("play.png");
seting= IMG_Load("setting.png");
exite = IMG_Load ("exit.png" ) ; 
x=2;
background =  IMG_Load("menu.jpg");

    play = IMG_Load("play.png");
    seting =  IMG_Load("setting.png");
    exite = IMG_Load("exit.png");
    play2 =  IMG_Load("play2.png");
    seting2=IMG_Load("setting2.png");
    exit2=IMG_Load("exit3.png");
    son=IMG_Load("son.png");
    on=IMG_Load("on.png");
    on2=IMG_Load("on2.png");
    of=IMG_Load("of.png");
    of2=IMG_Load("of2.png");

    back = IMG_Load("back.png");




/*-------aff initial----*/
Mix_PlayMusic(musique, -1);
 for (i=0; i<=21; i++)
     {
     	sprintf(menu,"%d.png",i);
        Menu_anime[i]=IMG_Load(menu);
        SDL_BlitSurface(Menu_anime[i],NULL,ecran,&posbackground);
SDL_Flip(ecran);
        
        SDL_Delay(40);
     }

SDL_BlitSurface(play, NULL, ecran, &posplay);
SDL_BlitSurface(seting, NULL, ecran, &posseting);
SDL_BlitSurface(exite, NULL, ecran, &posexit);
    	        SDL_Flip(ecran);
/*----------------------------------------------------------------------------------------------------------*/

    while (continuer!=0)
    {if (curseur>3)
		curseur=1;
	if (curseur<1)
		curseur=3;
	
ding=Mix_LoadWAV("ding.ogg");
Mix_VolumeMusic(MIX_MAX_VOLUME);

while (SDL_PollEvent(&event))
	{
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_KEYUP:
                fix=0;
			break;
case SDL_KEYDOWN:
				if(!fix)
				{
             switch(event.key.keysym.sym)
                {
                    case SDLK_UP: 
			curseur--;
			Mix_PlayChannel(-1, ding, 0);
                    break;
                    case SDLK_DOWN: 
			curseur++;
			Mix_PlayChannel(-1, ding, 0);
                    break;
		    case SDLK_KP_ENTER:
			if (curseur==3)
			{
			Mix_PlayChannel(-1, ding, 0);
			continuer = 0;
			}
                    break;
			fix=1;
			}
                }
            break;
case SDL_MOUSEMOTION:
            	if ((event.motion.x>218 )&&(event.motion.x<579)&&(event.motion.y>238)&&(event.motion.y<310))
            	{
            		curseur=1;Mix_PlayChannel(-1, ding, 0);
play2= IMG_Load("play2.png");
im1= IMG_Load("im1.png");
            	}
            	if ((event.motion.x>218)&&(event.motion.x<579)&&(event.motion.y>345.7)&&(event.motion.y<410))
            	{
            		curseur=2;Mix_PlayChannel(-1, ding, 0);
seting2= IMG_Load("setting2.png");
im2= IMG_Load("im2.png");
            	}
            	if ((event.motion.x>218)&&(event.motion.x<579)&&(event.motion.y>452)&&(event.motion.y<524))
            	{
            		curseur=3;Mix_PlayChannel(-1, ding, 0);
exit2= IMG_Load ("exit3.png" ) ;
im3= IMG_Load("im3.png");
            	}
case SDL_MOUSEBUTTONUP:
{
        if ((event.button.button == SDL_BUTTON_LEFT)&&(curseur==3)){

           run=0;
}}
           	
SDL_Flip(ecran);
            	/*if ((event.motion.x>250)&&(event.motion.x<475)&&(event.motion.y>540)&&(event.motion.y<590))
            	{
            		curseur=4;
            	}*/
          

        }
	}

/*------------------------affichage menu------------------*/
if (i>21) i=1;
	sprintf(menu,"%d.png",i);
    SDL_BlitSurface(Menu_anime[i],NULL,ecran,&posbackground);
    SDL_Delay(100);
    i++;

SDL_BlitSurface(play, NULL, ecran, &posplay);
SDL_BlitSurface(seting, NULL, ecran, &posseting);
		SDL_BlitSurface(exite, NULL, ecran, &posexit);


	

if (curseur==1)
	{
		
		
		
    	        SDL_BlitSurface(play2, NULL, ecran, &posplay2);
SDL_BlitSurface(im1, NULL, ecran, &posim);
	}
if (curseur==2)
	{
		
		SDL_BlitSurface(seting2, NULL, ecran, &posseting2);
SDL_BlitSurface(im2, NULL, ecran, &posim2);

    }
if (curseur==3)
	{
		
		
		SDL_BlitSurface(exit2, NULL, ecran, &posexit2);
SDL_BlitSurface(im3, NULL, ecran, &posim3);

    	
	}

SDL_Flip(ecran);
    }
    Mix_FreeMusic(musique);
    Mix_FreeChunk(ding);
    Mix_CloseAudio();
    SDL_FreeSurface(background);
    SDL_Quit();
 
    return EXIT_SUCCESS;


}
