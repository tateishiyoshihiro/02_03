#include "Car.h"
Car::Car() {
	name_ = "������";
	printf("%s�͂����ɂ͎~�܂�Ȃ� \n", name_);
}
Car::~Car() {
	printf("%s�̓K�\�����ő��� \n", name_);
}