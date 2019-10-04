#ifndef F1_H
#define F1_H
#include "PoweredVehicle.h"

class F1 : public PoweredVehicle{
	private:
	string driver;
	string constructor;
	short number;
	string engineManufacturer;
	public:
	F1(string d = "Seb", string c = "Ferrari", string e = "FingV12", int n = 5);
	double mileageEstimate(double time);
};

#endif
