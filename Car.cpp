#include "Car.h"
Car::Car() {
	name_ = "������";
	printf("%s�������� \n", name_);
}
Car::~Car() {
	printf("%s�͓��ē��������� \n", name_);
}
void Car::Born() {
	printf("%s�͋߂Â��Ă��� \n", name_);
}