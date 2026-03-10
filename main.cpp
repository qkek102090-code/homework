#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"
#include "Archer.h"
#include "Cheif.h"
#include "Magician.h"



int main(void)
{
	std::string answer;
	int num = 0;
	const int size(4);
	int suspect[size] = { 0,};
	std::string suspectname[size] = { "Warrior", "Archer", "Cheif", "Magician"};

	std::cout << "Welcome to the Fantasy World !" << std::endl;
	while (1) 
	{
		std::cout << "Select Your Class" << std::endl << std::endl;
		std::cout << "[0]Exit ";
		for (int i = 0; i < 4; ++i)
		{
			std::cout << "[" << i + 1 << "]" << suspectname[i] << " ";
		}
		std::cout << std::endl;
		std::cin >> num;
		std::cout << std::endl << std::endl;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		if (num == 1)
		{
			std::cout << "You Select Warrior[Warlord]?" << std::endl << std::endl;
			std::cout << "      [Yes] / [No]" << std::endl;	
			std::cin >> answer;
			std::cout << std::endl;
			if (answer == "Yes" || answer == "yes" || answer == "YES")
			{
				Player* myPlayer = new Warrior("Warlord");

				delete myPlayer;
				myPlayer = nullptr;
				std::cin >> num;
			}
			if (answer == "No" || answer == "no" || answer == "NO")
			{
				continue;
			}
			else 
			{
				continue;
			}


		}
		if (num == 2)
		{
			std::cout << "You Select Archer[Ethereal]?" << std::endl << std::endl;
			std::cout << "      [Yes] / [No]" << std::endl;
			std::cin >> answer;
			std::cout << std::endl;
			if (answer == "Yes" || answer == "yes" || answer == "YES")
			{
				Player* myPlayer = new Archer("Ethereal");

				delete myPlayer;
				myPlayer = nullptr;
				std::cin >> num;
			}
			if (answer == "No" || answer == "no" || answer == "NO")
			{
				continue;
			}
			else
			{
				continue;
			}
		}
		if (num == 3)
		{
			std::cout << "You Select Cheif[Assassin]?" << std::endl << std::endl;
			std::cout << "      [Yes] / [No]" << std::endl;
			std::cin >> answer;
			std::cout << std::endl;
			if (answer == "Yes" || answer == "yes" || answer == "YES")
			{
				Player* myPlayer = new Cheif("Assassin");

				delete myPlayer;
				myPlayer = nullptr;
				std::cin >> num;
			}
			if (answer == "No" || answer == "no" || answer == "NO")
			{
				continue;
			}
			else
			{
				continue;
			}
			


		}
		if (num == 4)
		{
			std::cout << "You Select Magician[Archmage]?" << std::endl << std::endl;
			std::cout << "      [Yes] / [No]" << std::endl;
			std::cin >> answer;
			std::cout << std::endl;
			if (answer == "Yes" || answer == "yes" || answer == "YES")
			{
				Player* myPlayer = new Magician("Archmage");

				delete myPlayer;
				myPlayer = nullptr;
				std::cin >> num;
			}
			if (answer == "No" || answer == "no" || answer == "NO")
			{
				continue;
			}
			else
			{
				continue;
			}



		}

	}
	return 0;
}