#include "Car.h"
Car::Car() {
	name_ = "黒い車";
	printf("%sはすぐには止まれない \n", name_);
}
Car::~Car() {
	printf("%sはガソリンで走る \n", name_);
}