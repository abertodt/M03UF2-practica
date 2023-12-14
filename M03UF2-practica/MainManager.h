#pragma once
#include "Player.h"
#include "Enemy.h"
#include <vector>

enum Scene { DUNGEON, COMBAT, CHEST, GAMEOVER };

struct MainManager {
	//scene tracking
	Scene currentScene;
	bool gameFinished;
	
	//player
	Player* player;

	//enemies
	std::vector<Enemy*> enemies;

	//chests

	void Initialize();
	//moves enemies without overlapping with the player, chests and other enemies
	void MoveEnemies();
};
