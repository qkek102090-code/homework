#include "Player.h"
#include <string>
#include <iostream>

//name(n), HP(h), STR(s), DEX(d), INT(i), LUK(l),Level(v), AD(ad), AP(ap), DEF(df)
void Player::Status()
{
	const int size = 9;
	std::string nstatus[size] = { "HP", "STR", "DEX", "INT", "LUK", "Level", "AD", "AP", "DEF" };
	int status[size] = { HP, STR, DEX, INT, LUK, Level, AD, AP, DEF };
	std::cout << "[Status]" << std::endl;
	for (int i = 0; i < 9; ++i)
	{
		std::cout << "[" << nstatus[i] << "] : " << status[i] << std::endl;
	}
	std::cout << std::endl;
}
