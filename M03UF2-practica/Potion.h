#pragma once
#include "Player.h"

struct Potion
{
	Player* player;


	void Heal(Player* player);
};