#include "Warrior.h"
#include "Player.h"
#include <iostream>
void Warrior::attack()
{
	std::cout << "[Attack] " << name << "Swings a Massive Sword!" << std::endl;
	std::cout << "             Damage: " << (STR * 1.5) + (DEX * 1.2) + (AD * 4) + (DEF * 1.3) << " " << std::endl << std::endl;
}
void Warrior::CP()
{
	std::cout << "[Warlord's CP]" << std::endl;
	std::cout << "[" << (HP * 1.3) + (STR * 10) + (DEX * 6) + (Level * 30) + (AD * 40) + (DEF * 6) << "]" << std::endl;
}
Warrior::Warrior(std::string n) : Player(n, 3000, 50, 30, 10, 10, 1, 30, 10, 50) 
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
		std::cout << "[0]I shall lay down my Heavy Sword as a [Warlord] and seek a new path." << std::endl;
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
			std::cout << "[Warlord's Status]" << std::endl << std::endl;
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


