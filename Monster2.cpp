#include "Monster2.h"
Monster2::Monster2() {
	name_ = "スライム";
	printf("%sが現れた \n", name_);
}
Monster2::~Monster2() {
	printf("%sは逃げた \n", name_);
}
void Monster2::Born() {
	printf("%sは粘着物を飛ばしてきた \n", name_);
}