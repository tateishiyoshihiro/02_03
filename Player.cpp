#include "Player.h"
player::player() {
	name_ = "��l��";
	printf("%s�����ꂽ \n", name_);
}
player::~player() {
	printf("%s�͓|�ꂱ�� \n", name_);
}
void player::Born() {
	printf("%s�͂т����肵�� \n", name_);
}