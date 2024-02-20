#include <stdio.h>
#include "Player.h"
#include "Car.h"
int main() {
	printf("\n");
	Run* Cars[2];
	Cars[0] = new player;
	Cars[1] = new Car;
	printf("\n\n");
	for (int i = 0; i < 2; i++) {
		delete Cars[i];
	}
	return 0;
}