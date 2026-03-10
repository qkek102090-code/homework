#include "Magician.h"
#include "Player.h"
#include <string>

void Magician::attack()
{
	std::cout << "[Attack] " << name << "Unleashes a Surge of Pure Arcane Energy" << std::endl;
	std::cout << "             Damage: " << (INT * 3) + (AP * 5) + (LUK * 1.5) << " " << std::endl << std::endl;
}
void Magician::CP()
{
	std::cout << "[Archmage's CP]" << std::endl;
	std::cout << "[" << (HP * 1.1) + (INT * 30) + (Level * 30) + (AP * 50) + (LUK * 15) << "]" << std::endl;
}
Magician::Magician(std::string n) : Player(n, 1300, 10, 10, 50, 20, 1, 10, 50, 10)
//name(n), HP(h), STR(s), DEX(d), INT(i), LUK(l),Level(v), AD(ad), AP(ap), DEF(df)
{
	std::cout << "You Select " << "[" << name << "]" << std::endl;
	while (1)
	{
		int num = 0;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		std::cout << "[0]I Shall Extinguish the Eternal Flame of my Staff as an [Archmage] and let the Ancient Magic fade to seek a new path." << std::endl;
		std::cout << "[1]My Status" << std::endl;
		std::cout << "[2]Attack" << std::endl;
		std::cout << "[3]My CP" << std::endl;
		std::cin >> num;
		std::cout << std::endl;
		if (num == 0)
		{
			std::cout << "You have departed in search of a new path....." << std::endl;
			break;
		}
		if (num == 1)
		{
			std::cout << "[Archmage's Status]" << std::endl << std::endl;
			Status();
		}
		if (num == 2)
			attack();
		if (num == 3)
		{
			CP();
		}
	}
}