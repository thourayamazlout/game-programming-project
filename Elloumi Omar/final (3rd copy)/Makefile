f = -lSDL -lSDL_image -lSDL_mixer 

prog1: main.o jeu.o per.o scrolling.o coll.o ennemi.o object.o
	gcc main.o jeu.o per.o ennemi.o scrolling.o object.o coll.o -o prog1 $(f)
main.o: main.c file.h main.h
	gcc -c main.c file.h main.h $(f)
jeu.o: jeu.c per.h file.h scrolling.h coll.h ennemi.h object.h
	gcc -c jeu.c object.h ennemi.h scrolling.h per.h coll.h file.h $(f)
object.o: object.c object.h file.h
	gcc -c object.c object.h file.h $(f)
ennemi.o: ennemi.c ennemi.h file.h
	gcc -c ennemi.c ennemi.h file.h $(f)
coll.o: coll.c coll.h file.h
	gcc -c coll.c coll.h file.h $(f)
per.o: per.c per.h file.h
	gcc -c per.c per.h file.h $(f)
scrolling.o: scrolling.c scrolling.h file.h
	gcc -c scrolling.c scrolling.h file.h $(f)

clean:
	rm *.o *.h.gch 
