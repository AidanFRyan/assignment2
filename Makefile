main: main.cpp Jet.o F1.o Skateboard.o Vehicle.o PoweredVehicle.o
	g++ -o main main.cpp Jet.o F1.o Skateboard.o Vehicle.o PoweredVehicle.o
Jet.o: Jet.cpp Jet.h
	g++ -c Jet.cpp
F1.o : F1.cpp F1.h
	g++ -c F1.cpp
Skateboard.o: Skateboard.cpp Skateboard.h
	g++ -c Skateboard.cpp
PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	g++ -c PoweredVehicle.cpp
Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -c Vehicle.cpp