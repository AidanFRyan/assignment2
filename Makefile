main: main.cpp Jet.o F1.o Skateboard.o
	g++ -o main main.cpp Jet.o F1.o Skateboard.o
Jet.o: Jet.cpp Jet.h
	g++ -c Jet.cpp
F1.o : F1.cpp F1.h
	g++ -c F1.cpp
Skateboard.o: Skateboard.cpp Skateboard.h
	g++ -c Skateboard.cpp