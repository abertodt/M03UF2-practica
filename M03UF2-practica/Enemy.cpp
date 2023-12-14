#include "Enemy.h"
#include <stdlib.h>


void Enemy::Initialize() {
	mapPositon.x = rand() % 4 + 0;
	mapPositon.y = rand() % 4 + 0;
	isDead = false;
	maxHealth = rand() % 90 + 60;
	health = maxHealth;
	maxStamina = rand() % 90 + 60;
	stamina = maxStamina;
}