f = -lSDL -lSDL_image -lSDL_mixer 

prog: main.o per.o scrolling.o coll.o
	gcc main.o per.o scrolling.o coll.o -o prog $(f)
main.o: main.c per.h file.h scrolling.h coll.h
	gcc -c main.c scrolling.h per.h coll.h file.h $(f)
coll.o: coll.c coll.h file.h
	gcc -c coll.c coll.h file.h $(f)
per.o: per.c per.h file.h
	gcc -c per.c per.h file.h $(f)
scrolling.o: scrolling.c scrolling.h file.h
	gcc -c scrolling.c scrolling.h file.h $(f)

clean:
	rm *.o *.h.gch prog
