#include <iostream>
#include <string>
using namespace std;
const int Number = 4;
int Potions[Number]{ 5, 5, 0, 0 };
void AddPotion()
{
	for (int i = 0; i < 4; ++i)
	{
		++Potions[i];
	}
	return;
}

void setPotion(int* MStatus, int* MLevel)
{
	const string Potionsnames[4]{ "HPPotion", "MPPotion", "ATPotion", "DFPotion"};
	

	while (123)
	{

		int PAnswer;
		string PAnswers;

		cout << "\n" << "[My Potions]" << endl << "\n";
		cout << "[0]Exit My Potions" << endl;
		cout << "[1]HPPotion : " << Potions[0] << endl;
		cout << "[2]MPPotion : " << Potions[1] << endl;
		cout << "[3]ATPotion : " << Potions[2] << endl;
		cout << "[4]DFPotion : " << Potions[3] << endl;
		cout << "[5]My Status" << endl;
		cout << "[6]Level UP" << endl << "\n";

		cin >> PAnswer;
		if (PAnswer == 0)
		{
			return;
		}
		if (PAnswer == 1)
		{
			cout << "\n" << "Do you want to use HP Potion?" << endl << "\n";
			cout << "[YES] / [NO] " << endl << "\n";
			cin >> PAnswers;
			if (PAnswers == "YES" || PAnswers == "Yes" || PAnswers == "yes")
			{
				if (Potions[0] > 0)
				{
					cout << "\n" << "You used HP Potion" << endl << "\n";
					--Potions[0];
					MStatus[0] += 20;
					cout << "You have " << Potions[0] << " HP Pots left." << endl << "\n";
					continue;
				}
				if (Potions[0] == 0)
				{
					cout << "You don't have a HP Potion" << endl << "\n";
					continue;
				}
				continue;
			}
			if (PAnswers == "NO" || PAnswers == "No" || PAnswers == "no")
			{
				continue;
			}
		}
		if (PAnswer == 2)
		{
			cout << "\n" << "Do you want to use MP Potion?" << endl << "\n";
			cout << "[YES] / [NO] " << endl << "\n";
			cin >> PAnswers;
			if (PAnswers == "YES" || PAnswers == "Yes" || PAnswers == "yes")
			{
				if (Potions[1] > 0)
				{
					cout << "\n" << "You used MP Potion" << endl << "\n";
					--Potions[1];
					MStatus[1] += 20;
					cout << "You have " << Potions[1] << " MP Pots left." << endl << "\n";
					continue;
				}
				if (Potions[1] == 0)
				{
					cout << "You don't have a MP Potion" << endl << "\n";
					continue;
				}
			}
			continue;
		}
		if (PAnswer == 3)
		{
			cout << "\n" << "Do you want to use Attack Potion?" << endl << "\n";
			cout << "[YES] / [NO] " << endl << "\n";
			cin >> PAnswers;
			if (PAnswers == "YES" || PAnswers == "Yes" || PAnswers == "yes")
			{
				if (Potions[2] > 0)
				{
					cout << "\n" << "You used Attack Potion" << endl << "\n";
					--Potions[2];
					MStatus[2] *= 2;
					cout << "You have " << Potions[2] << " AT Pots left." << endl << "\n";
					continue;
				}
				if (Potions[2] == 0)
				{
					cout << "You don't have a Attack Potion" << endl << "\n";
					continue;
				}
			}
			continue;
		}
		if (PAnswer == 4)
		{
			cout << "\n" << "Do you want to use Defence Potion?" << endl << "\n";
			cout << "[YES] / [NO] " << endl << "\n";
			cin >> PAnswers;
			if (PAnswers == "YES" || PAnswers == "Yes" || PAnswers == "yes")
			{
				if (Potions[3] > 0)
				{
					cout << "\n" << "You used Defence Potion" << endl << "\n";
					--Potions[3];
					MStatus[3] *= 2;
					cout << "You have " << Potions[3] << " DF Pots left." << endl << "\n";
					continue;
				}
				if (Potions[3] == 0)
				{
					cout << "You don't have a Defence Potion" << endl << "\n";
					continue;
				}
			}
			continue;
		}
		if (PAnswer == 5)
		{
				cout << "[My Status]" << endl;
				cout << "Your HP is : " << MStatus[0] << endl;
				cout << "Your MP is : " << MStatus[1] << endl;
				cout << "Your Attack is : " << MStatus[2] << endl;
				cout << "Your Defence is : " << MStatus[3] << endl;
				cout << "Your Level is : " << *MLevel << endl << "\n";
				continue;
		}
		if (PAnswer == 6)
		{
			cout << "Level UP!" << endl << "\n";
			++*MLevel;
			cout << "Level UP Present!" << endl << "All Potions + 1 !" << "\n";
			for (int i = 0; i < 4; ++i)
			{
				++Potions[i];
			}
			continue;
		}
		else
		{
			cout << "\n" << "Please Input Again" << endl << "\n";
			continue;
		}
		continue;
	}
	return;
}



int main(void)
{
	const int size = 4;
	int Status[size] = { 0 };
	int Level = 0;
	/*
	0 = HP
	1 = MP
	2 = Attack
	3 = Defence
	*/
	while (1)
	{
		cout << "Set Your Default HP : ";
		cin >> Status[0];
		cout << "Set Your Default MP : ";
		cin >> Status[1];
		cout << "\n";
		if (cin.fail())
		{
			cin.clear(); // 1. Clear error state (restore to normal)
			cin.ignore(100, '\n'); // 2. Discard up to 100 invalid characters
			cout << "\n" << "Please enter a number only!" << "\n" << "\n" << "Please Input Again" << endl << "\n";
			continue; // go back to start
		}
		if (Status[0] <= 49 || 49 >= Status[1])
		{
			cout << "Inputed HP or MP is so Lower" << endl;
			cout << "Please Input Again" << endl << "\n";
			continue;
		}
		cout << "Your HP is : " << Status[0] << "\n" << "Your MP is : " << Status[1] << endl << "\n";
		break;
	}
	while (2)
	{
		cout << "Set Your Default Attack : ";
		cin >> Status[2];
		cout << "Set Your Default Defence : ";
		cin >> Status[3];
		cout << "\n";
		if (cin.fail())
		{
			cin.clear(); // 1. Clear error state (restore to normal)
			cin.ignore(100, '\n'); // 2. Discard up to 100 invalid characters
			cout << "\n" << "Please enter a number only!" << "\n" << "\n" << "Please Input Again" << endl << "\n";
			continue; // go back to start
		}

		if (0 >= Status[2] || Status[3] <= 0)
		{
			cout << "Inputed Attack or Defence is so Lower" << endl;
			cout << "Please Input Again" << endl << "\n";
			continue;
		}

		cout << "Your Attack is : " << Status[2] << "\n" << "Your Defence is : " << Status[3] << endl << "\n";

		cout << "========================================================================" << endl;
		cout << "[Default Setting is over]" << "\n" << "Give you The Posions!" << endl;
		cout << "========================================================================" << endl << "\n";
		break;
	}
	while (3)
	{
		int Menu = 0;


		cout << "[Select Menu]" << endl << "\n";
		cout << "[0]Exit ";
		cout << "[1]HP UP ";
		cout << "[2]MP UP ";
		cout << "[3]Attack UP ";
		cout << "[4]Defence UP ";
		cout << "[5]View Status ";
		cout << "[6]Level UP ";
		cout << "[7]View Potions ";
		cout << "[8]Add Potions " << endl << "\n";

		cin >> Menu;

		if (cin.fail())
		{
			cin.clear(); // 1. Clear error state (restore to normal)
			cin.ignore(100, '\n'); // 2. Discard up to 100 invalid characters
			cout << "\n" << "Please enter a number only!" << "\n" << "\n" << "Please Input Again" << endl << "\n";
			continue; // go back to start
		}
		if (Menu == 0)
		{
			cout << "\n";
			cout << "You Select Exit" << endl;
			break;
		}
		if (Menu == 1)
		{
			cout << "\n" << "HP UP!" << "\n" << "\n";

			++Status[0];

			continue;
		}
		if (Menu == 2)
		{
			cout << "\n" << "MP UP!" << "\n" << "\n";

			++Status[1];

			continue;
		}
		if (Menu == 3)
		{
			cout << "\n" << "Attack UP!" << "\n" << "\n";

			++Status[2];

			continue;
		}
		if (Menu == 4)
		{
			cout << "\n" << "Defence UP!" << "\n" << "\n";

			++Status[3];

			continue;
		}
		if (Menu == 5)
		{
			string Potionsname[4]{ "HP Potion", "MP Potion", "Attack Potion", "Defence Potion" };
			cout << "\n" << "You Select Status" << endl << "\n";

			cout << "[Your Status]" << endl;
			cout << "Your HP is : " << Status[0] << endl;
			cout << "Your MP is : " << Status[1] << endl;
			cout << "Your Attack is : " << Status[2] << endl;
			cout << "Your Defence is : " << Status[3] << endl;
			cout << "Your Level is : " << Level << endl << "\n";
			for (int i = 0; i < 4; ++i)
			{
				cout  << Potionsname[i] << " : " << Potions[i] << endl;
			}

			continue;
		}
		if (Menu == 6)
		{

			cout << "\n" << "Level UP!" << "\n" << "\n";

			++Level;
			cout << "Level UP Present!" << endl << "All Potions + 1 !" << endl<< "\n";
			for (int i = 0; i < 4; ++i)
			{
				++Potions[i];
			}
			continue;

		}
		if (Menu == 7)
		{

			setPotion(Status, &Level);
			continue;
		}
		if (Menu == 8)
		{
			cout << "\n" << "You got each Potion" << endl << "\n";
			AddPotion();
			continue;
		}
		else
		{
			cout << "\n" << "Please Input Again" << endl << "\n";
			continue;
		}

		

		break;
	}




	return 0;
}

