#include "Car.h"
Car::Car() {
	name_ = "黒い車";
	printf("%sが見えた \n", name_);
}
Car::~Car() {
	printf("%sは当て逃げをした \n", name_);
}
void Car::Born() {
	printf("%sは近づいてきた \n", name_);
}