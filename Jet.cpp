#include "Jet.h"
#include <random>

Jet::Jet(string brand, string model, int numEng) {
	numberOfEngines = numEng;
	std::random_device r;
	std::default_random_engine g(r());
	std::uniform_real_distribution<double> dist(40.0, 100.0);
	mileage = dist(g);
	printf("%f\n", mileage);
	setBrand(brand);
	setModel(model);
}

string Jet::toString(){
	return PoweredVehicle::toString();
}

double Jet::mileageEstimate(double time){
	double t = time/60;
	if(numberOfEngines > 2 && fuelType.compare("Rocket") == 0){
		return mileage * 1.055 * numberOfEngines * t;
	}
	else{
		return mileage*t;
	}
}
