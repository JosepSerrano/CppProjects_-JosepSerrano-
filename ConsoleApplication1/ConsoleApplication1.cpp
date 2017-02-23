#include<iostream>
#include<string>
#include<ctime>

enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH, MAX };

struct Enemy {

	EnemyType type;
	std::string name;
	int health;

	std::string getEnemyTypeString() {
		switch (type) {
		case EnemyType::ZOMBIE: return "zombie";
		case EnemyType::VAMPIRE: return "vampire";
		case EnemyType::GHOST: return "ghost";
		case EnemyType::WITCH: return "witch";
		default: return "";
		}
	}

};

bool operator == (Enemy enemigo1, Enemy enemigo2) {

	return enemigo1.name == enemigo2.name && enemigo1.type == enemigo2.type;


}



Enemy CreateRandomEnemy() {

	std::string names[4]{ "pepe", "lola", "juan", "marc" };

	int h = rand() % 100;
	int t = rand() % 4;
	std::string n = names[rand() % 4];

}

int main() {

	srand(time(nullptr));

	return 0;

}