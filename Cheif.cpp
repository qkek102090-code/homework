#include "Cheif.h"
#include "Player.h"
#include <string>
void Cheif::attack()
{
	std::cout << "[Attack] " << name << "Strikes a Vital Point from the Shadows" << std::endl;
	std::cout << "             Damage: " << (STR * 1.8) + (DEX * 1.8) + (AD * 4.5) + (LUK * 2) << " " << std::endl << std::endl;
}
void Cheif::CP()
{
	std::cout << "[Assassin's CP]" << std::endl;
	std::cout << "[" << (HP * 1.2) + (STR * 18) + (DEX * 18) + (Level * 30) + (AD * 45) + (LUK * 20) << "]" << std::endl;
}
Cheif::Cheif(std::string n) : Player(n, 2000, 30, 30, 10, 30, 1, 40, 10, 10)
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
		std::cout << "[0]I Shall Sheathe my Blood-Stained Daggers as an [Assassin] and step out from the Shadows to seek a new path." << std::endl;
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
			std::cout << "[Assassin's Status]" << std::endl << std::endl;
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
