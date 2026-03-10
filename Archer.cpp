#include "Archer.h"
#include "Player.h"
#include <iostream>
void Archer::attack()
{
	std::cout << "[Attack] " << name << "Shoots a Mystic Arrow" << std::endl;
	std::cout << "             Damage: " << (DEX * 2) + (LUK * 1.2) + (AD * 5) + (STR * 1.2)<< std::endl << std::endl;
}
void Archer::CP()
{
	std::cout << "[Ethereal's CP]" << std::endl;
	std::cout << "[" << (HP * 1.2) + (STR * 12) + (DEX * 20) + (Level * 30) + (AD * 50) + (LUK * 12) << "]" << std::endl;
}
Archer::Archer(std::string n) : Player(n, 1500, 30, 50, 10, 30, 1, 40, 10, 10)
//name(n), HP(h), STR(s), DEX(d), INT(i), LUK(l), Level(v), AD(ad), AP(ap), DEF(df)
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
		std::cout << "[0]I Shall Unstring my Mystic Bow as an [Ethereal] and let the Wind guide me to seek a new path." << std::endl;
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
			std::cout << "[Ethereal's Status]" << std::endl << std::endl;
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