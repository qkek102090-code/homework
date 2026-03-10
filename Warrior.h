#pragma once
#include "Player.h"
#include <string>
#include <iostream>
class Warrior : public Player
{
public:
	void attack() override;
	void CP() override;
	Warrior(std::string n);
};

