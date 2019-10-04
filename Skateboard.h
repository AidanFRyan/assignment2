#ifndef SKATEBOARD_H
#define SKATEBOARD_H
#include "Vehicle.h"
#include <random>

class Skateboard : public Vehicle {
	private:
	double mileage;
	std::default_random_engine g;
	std::uniform_real_distribution<double> dist;
	public:
	Skateboard(string brand = "Thrash", string model = "RadialFracture");
	double mileageEstimate(double time);
};

#endif
