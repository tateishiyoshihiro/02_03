#include "Player.h"
player::player() {
	name_ = "主人公";
	printf("%sはすぐに止まれる \n", name_);
}
player::~player() {
	printf("%sは筋肉を使って走る \n", name_);
}
