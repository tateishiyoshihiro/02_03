#include "Player.h"
player::player() {
	name_ = "ålŒö";
	printf("%s‚ªŒ»‚ê‚½ \n", name_);
}
player::~player() {
	printf("%s‚Í“|‚ê‚±‚ñ‚¾ \n", name_);
}
void player::Born() {
	printf("%s‚Í‚Ñ‚Á‚­‚è‚µ‚½ \n", name_);
}