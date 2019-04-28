SDL_Surface *ecran=NULL, *background=NULL  , *play=NULL, *seting=NULL, *exite=NULL ,*im1=NULL, *im2=NULL, *im3=NULL ,*back=NULL,*on=NULL,*of=NULL,*son=NULL;

SDL_Surface *play2=NULL, *seting2=NULL, *exit2=NULL , *Menu_anime[266],*on2=NULL,*of2=NULL;
SDL_Rect posbackground , posplay , posseting , posexit,posim ;
SDL_Rect posplay2 , posseting2 , posexit2,posim2,posim3 ;
 SDL_Event event;
int run=1;
Mix_Music *musique;
Mix_Chunk *ding;
int curseur=1,continuer=1,m=0,i,fix=0,x=2;
     char menu[40];

