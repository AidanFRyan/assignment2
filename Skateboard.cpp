#include "Skateboard.h"
Skateboard::Skateboard(string brand, string model){
	std::random_device r;
	g = std::default_random_engine(r());
	dist = std::uniform_real_distribution<double>(0, 1);
	mileage = dist(g)*0.4 + 0.1;
	printf("%f\n", mileage);
	setBrand(brand);
	setModel(model);
}

double Skateboard::mileageEstimate(double time){
	double t = time/60;
	if(time > 25 && time < 250){
		return mileage*(t + dist(g)*(t/3 - 1) + 1);
	}
	else return mileage*t;
}
