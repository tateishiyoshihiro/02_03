#include "Player.h"
player::player() {
	name_ = "主人公";
	printf("%sが現れた \n", name_);
}
player::~player() {
	printf("%sは倒れこんだ \n", name_);
}
void player::Born() {
	printf("%sはびっくりした \n", name_);
}