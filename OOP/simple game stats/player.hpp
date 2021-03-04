#pragma once
#include <iostream>

enum Race {
	Dragonborn,
	Dwarf,
	Elf,
	Gnome,
	Half_Elf,
	Halfling,
	Half_Orc,
	Human,
	Tiefling,
};

class player {
private:
	Race playerRace;
	int HP;
	int experience;
	int level;
	std::string name;

	const int startHP = 42;
	const int healHP = 10;

public:
	player(Race); // constructor for creating a new player
	player(Race, std::string); //create player with name
	//getters:
	Race getRace(); 
	int getExp();
	int getLevel();
	int getHP();
	std::string getName();
	
	//actions:
	void takeDamage(unsigned int dmg);
	void heal();
	void gainXP(unsigned int gainedXP);
	void changeName(std::string newName);
};