#include "Jet.h"
#include <random>

Jet::Jet(string brand, string model, int numEng) {
	numberOfEngines = numEng;
	std::default_random_engine g;
	std::uniform_real_distribution<double> dist(40.0, 100.0);
	mileage = dist(g);
	setBrand(brand);
	setModel(model);
}

string Jet::toString(){
	return PoweredVehicle::toString();
}

double Jet::mileageEstimate(double time){
	if(numberOfEngines > 2 && fuelType.compare("Rocket") == 0){
		return mileage * 1.055 * numberOfEngines * time;
	}
	else{
		return mileage*time;
	}
}
