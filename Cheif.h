#pragma once
#include "Player.h"
#include <iostream>
#include <string>
class Cheif : public Player
{
public:
	Cheif(std::string n);
	void CP();
	void attack();
};

