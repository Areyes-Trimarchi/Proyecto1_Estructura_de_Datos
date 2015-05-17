proyecto: main.o fsarraylist.o fscursorlist.o linkedlist.o integer.o dllnode.o object.o tdalist.o 
	g++ main.o fsarraylist.o fscursorlist.o linkedlist.o integer.o dllnode.o object.o tdalist.o -o proyecto
main.o: main.cpp
	g++ main.cpp -c
fsarrayList.o: fsarraylist.cpp fsarraylist.h tdalist.h object.h
	g++ fsarraylist.cpp -c
fscursolist.o: fscursorlist.cpp fscursorlist.h tdalist.h object.h
	g++ fscursolist.cpp -c
linkedlist.o: linkedlist.cpp linkedlist.h tdalist.h object.h
	g++ linkedlist.cpp -c
tdalist.o: tdalist.cpp tdalist.h object.h
	g++ tdalist.cpp -c
dllnode.o: dllnode.cpp dllnode.h object.h
	g++ dllnode.cpp -c
integer.o: integer.cpp integer.h object.h
	g++ integer.cpp -c
object.o: object.cpp object.h
	g++ object.cpp -c

