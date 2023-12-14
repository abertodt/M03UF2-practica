#pragma once
#include "MapPosition.h"

struct Enemy {
	MapPosition mapPositon;
	
	bool isDead;

	int health;
	int maxHealth;

	int stamina;
	int maxStamina;

	void Initialize();
};