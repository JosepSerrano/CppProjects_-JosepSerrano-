#include <iostream>
#include <string>
#include <ctime>

enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };

class Zombie;

class Player {
		
	Weapon weapon;
	float precision;
	int life;
	


	void attack(Zombie &z);

	bool isAlive() {
		return life > 0;
	}

	Player() {
		weapon = static_cast<Weapon>( rand() % static_cast<int> (Weapon::MAX));
		precision = (rand()%10)/10.0f;
		life = rand() % 101;
	}

};

class Zombie {
	int distanceToPlayer;
	float speed;
	float damage;
	int life;

	void attack(Player &) {

	}

	bool isAlive() {
		return life > 0;
	}

	Zombie() {
		distanceToPlayer = (rand() % 181) + 20;
		speed = (rand() % 210) / 10.0f;
		damage = (rand() % 210) / 10.0f;
		life = rand() % 101;
	}
};

void Player::attack(Zombie &z) {

	z::life -= weapon * precision;

}