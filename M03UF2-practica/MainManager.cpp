#include "MainManager.h"

void MainManager::Initialize() {
	currentScene = DUNGEON;
	gameFinished = false;

	//Init player
	player = new Player;
	player->Initialize();

	//Init enemies
	MoveEnemies(); //TODO

	//Init chests
}