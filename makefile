circle.o: circle.cpp shape.h circle.h
    g++ -c circle.cpp -o circle.o

rect.o: rect.cpp shape.h rect.h
    g++ -c rect.cpp -o rect.o


rourect.o: rourect.cpp shape.h circle.h rect.h
    g++ -c rourect.cpp -o rourect.o

cyliner.o: cyliner.cpp shape.h circle.h cyliner.h
    g++ -c cyliner.cpp -o cyliner.o

papi.o: papi.cpp shape.h papi.h rect.h
    g++ -c papi.cpp -o papi.o

shape.o: shape.cpp shape.h
    g++ -c shape.cpp -o shape.o

main.o: main.cpp shape.h circle.h rect.h rourect.h cyliner.h papi.h
    g++ -c main.cpp -o main.o

myprogram: main.o circle.o rect.o rourect.o cyliner.o papi.o shape.o 
    g++ main.o circle.o rect.o rourect.o cyliner.o papi.o shape.o -o myprogram

