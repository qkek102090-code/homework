#pragma once
#include "Player.h"
#include <string>
#include <iostream>
class Archer : public Player
{
public:
	void attack() override;
	Archer(std::string n);
	void CP() override;
};

