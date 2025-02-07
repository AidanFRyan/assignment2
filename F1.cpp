#include "F1.h"

F1::F1(string d, string c, string e, short n, string t){
	driver = d;
	constructor = c;
	number = n;
	engineManufacturer = e;
	trim = t;
	fuelType = "Race";
}

double F1::mileageEstimate(double time){
	double t = time/60;
	if(trim.compare("Quali") == 0){
		return 163.7 * (t/60);
	}
	else if (constructor.compare("McLaren") == 0 || constructor.compare("Williams") == 0){
		return 0;
	}
	else {
		return 153.8 * (t/60);
	}
}
