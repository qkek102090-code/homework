#pragma once
#include "Player.h"
class Magician : public Player
{
public:
	void CP();
	void attack();
	Magician(std::string n);
};

