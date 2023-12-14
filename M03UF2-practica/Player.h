#pragma once
#include "MapPosition.h"

struct Player {
	MapPosition mapPositon;
	int gold;

	int health;
	int maxHealth;

	int stamina;
	int maxStamina;

	int agility;
	int maxAgility;
	
	int potions;
	int maxPotions;

	void Initialize();
};