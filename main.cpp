#include <stdio.h>
#include "Player.h"
#include "Car.h"
int main() {
	printf("\n");
	Base* Cars[2];
	Cars[1] = new player;
	Cars[0] = new Car;
	printf("\n\n");
	Cars[1]->Born();
	Cars[0]->Born();
	printf("\n\n");
	for (int i = 0; i < 2; i++) {
		delete Cars[i];
	}
	return 0;
}