#include "F1.cpp"

F1::F1(string d, string c, string e, n){
	driver = d;
	constructor = c;
	number = n;
	engineManufacturer = e;
	trim = t;
}

double mileageEstimate(double time){
	if(strcmp(trim, "Quali") == 0){
		return 163.7 * (time/60);
	} else {
		return 153.8 * (time/60);
	}
}
