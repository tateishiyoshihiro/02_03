#include "Monster.h"
Monster::Monster() {
	name_ = "ゴブリン";
	printf("%sが現れた \n", name_);
}
Monster::~Monster() {
	printf("%sは逃げた \n", name_);
}
void Monster::Born() {
	printf("%sはこん棒で投げってきた \n", name_);
}