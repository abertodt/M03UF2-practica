#include "MainManager.h"
#include <time.h>

void Dungeon(MainManager* mm);
void Combat(MainManager* mm);
void Chest(MainManager* mm);
void GameOver(MainManager* mm);


int main() {
	srand(time(NULL));

	MainManager* _mainManager = new MainManager;
	_mainManager->Initialize();

	do {
		switch (_mainManager->currentScene)
		{
		case DUNGEON:
			Dungeon(_mainManager);
			break;
		case COMBAT:
			Combat(_mainManager);
			break;
		case CHEST:
			Chest(_mainManager);
			break;
		case GAMEOVER:
			GameOver(_mainManager);
			break;
		default:
			break;
		}
	} while (!_mainManager->gameFinished);
}

void Dungeon(MainManager* mm) {

}
void Combat(MainManager* mm) {

}
void Chest(MainManager* mm) {

}
void GameOver(MainManager* mm) {

}