#include "Potion.h"
#include <iostream>

void Potion::Heal(Player* player) {
	if (player->potions <= 0) {
		std::cout << "You don't have potions" << std::endl;
		return;
	}
	else {
		int amount = static_cast<int>(player->maxHealth * 0, 4);
		player->health += amount;
		if (player->health > player->maxHealth){
			player->health = player->maxHealth;
		}
		player-> potions--;
	}
}