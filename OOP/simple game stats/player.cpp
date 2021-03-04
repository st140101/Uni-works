#include "player.hpp"
#include <iostream>
#include <string>

player::player(Race chosenRace) {
	playerRace = chosenRace;
	HP = player::startHP;
	level = 1;
	experience = 0;
	name = "";
}

player::player(Race chosenRace, std::string chosenName) {
	playerRace = chosenRace;
	HP = player::startHP;
	level = 1;
	experience = 0;
	name = chosenName;
}

Race player::getRace() const {
	return playerRace;
}

int player::getExp() const {
	return experience;
}

int player::getLevel() const {
	level += experience / 1000;
	return level;
}

int player::getHP() const {
	return HP;
}

std::string player::getName() const {
	return name;
}

void player::takeDamage(unsigned int dmg) {
	HP -= dmg;
	if (HP <= 0) {
		HP = 0;
		std::cout << "This player has died!\n";
	}
}

void player::heal() {
	HP += player::healHP;
}

void player::gainXP(unsigned int gainedXP) {
	experience += gainedXP;
}

void player::changeName(std::string newName) {
	std::cout << "\nAre you sure you want to change your name? Enter YES/NO: \n";
	std::string choice;
	std::cin >> choice;
	if (choice == "YES") {
		name = newName;
		std::cout << "\nYou have successfully changed your name to " << newName << std::endl;
	}
	else {
		std::cout << "\nYou remain with your old name.\n";
	}
}

