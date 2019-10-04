#ifndef JET_H
#define JET_H
#include "PoweredVehicle.h"

class Jet : public PoweredVehicle{
private:
	int numberOfEngines;
	double mileage;
public:
	Jet(string brand, string model, int numEng = 1);
	string toString();
	double mileageEstimate(double time);
};

#endif
