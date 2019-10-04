#include "Skateboard.h"
Skateboard::Skateboard(string brand, string model) : Vehicle(brand, model){
	dist = std::uniform_real_distribution<double>(0, 1);
	mileage = dist(g)*0.4 + 0.1;
}

double Skateboard::mileageEstimate(double time){
	if(time > 25 && time < 250){
		return mileage*(time + dist(g)*(time/3 - 1) + 1);
	}
	else return mileage*time;
}
