#pragma once
#include <string>
#include <iostream>
class Player
{
protected :
	std::string name;
	int HP;
	int STR;
	int DEX;
	int INT;
	int LUK;
	int Level;
	int AD;
	int AP;
	int DEF;
public :
	Player(std::string n, int h, int s, int d, int i, int l, int v,
				int ad, int ap, int df) : name(n), HP(h), STR(s), DEX(d), INT(i), LUK(l),
				Level(v), AD(ad), AP(ap), DEF(df) {}
	virtual void Status();
	virtual void CP() = 0;
	virtual void attack() = 0;



};

