#include "Player.h"
#include <stdlib.h>

void Player::Initialize() {
	mapPositon.x = 2;
	mapPositon.y = 3;
	maxHealth = rand() % 110 + 90;
	health = maxHealth;
	maxStamina = rand() % 110 + 90;
	stamina = maxStamina;
	gold = 0;
	maxAgility = 3;
	agility = maxAgility;
	maxPotions = 3;
	potions = maxPotions;
}