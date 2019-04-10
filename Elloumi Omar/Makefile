f = -lSDL -lSDL_image -lSDL_mixer 

prog: main.o animation.o draw.o init.o input.o map.o object.o player.o
	gcc animation.o main.o draw.o init.o input.o map.o object.o player.o -o prog $(f)
main.o: main.c main.h defs.h structs.h
	gcc -c main.c main.h defs.h structs.h $(f)
animation.o:animation.c animation.h defs.h structs.h
	gcc -c animation.c animation.h defs.h structs.h $(f)
draw.o: draw.c draw.h defs.h structs.h
	gcc -c draw.c draw.h defs.h structs.h $(f)
init.o: init.c init.h defs.h structs.h
	gcc -c init.c init.h defs.h structs.h $(f)
input.o: input.c input.h defs.h structs.h
	gcc -c input.c input.h defs.h structs.h $(f)
map.o: map.c map.h defs.h structs.h
	gcc -c map.c map.h defs.h structs.h $(f)
object.o: object.c object.h defs.h structs.h
	gcc -c object.c object.h defs.h structs.h $(f)
player.o: player.c player.h defs.h structs.h
	gcc -c player.c player.h defs.h structs.h $(f)
clean:
	rm *.o *.h.gch prog

