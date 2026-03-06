#include <iostream>
#include <string>
using namespace std;
void el()
{
	cout << endl << "\n";
}
void Menu()
{
	cout << "[Select Menu]";
	el();
	cout << "[0]Exit ";
	cout << "[1]HP UP ";
	cout << "[2]MP UP ";
	cout << "[3]Attack UP ";
	cout << "[4]Defence UP ";
	cout << "[5]View Status ";
	cout << "[6]Level UP ";
	cout << "[7]View Potions ";
	cout << "[8]Add Potions ";
	el();
}
void PMenu()
{
	cout << "[Select Menu]";
	el();
	cout << "[0]Exit ";
	cout << "[1]HP Potion : ";
	cout << "[2]MP Potion : ";
	cout << "[3]ATK Potion : ";
	cout << "[4]DF Potion : ";
	cout << "[5]MY Status ";
	cout << "[6]Level UP ";
	el();
}
void Default_Setting_is_over()
{
	cout << "========================================================================" << endl;
	cout << "[Default Setting is over]" << "\n" << "Give you The Posions!" << endl;
	cout << "========================================================================";;
	el();
	return;
}
void setPotion(int* MStat, int* Level, string* MStatN, string* PN, int* Potions)
{

	int input = 0;
	string sinput;
	while (1)
	{
		PMenu();
		cin >> input;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\n" << "Please enter a number only!" << "\n" << "\n" << "Please Input Again"; el();
			continue;
		}
		if (input == 0)
		{
			return;
		}
		if (input == 1)
		{
			cout << "Use potion?";
			el();
			cout << "[YES] / [NO]";
			el();
			cin >> sinput;
			if (sinput == "yes" || sinput == "Yes" || sinput == "YES")
			{
				if (Potions[0] > 0)
				{
					cout << "\n" << "You used Potion";
					el();
					--Potions[0];
					MStat[0] += 20;
					continue;
				}
				if (Potions[0] <= 0)
				{
					cout << "\n" << "No Potions available";
					el();
					continue;
				}
			}
			if (sinput == "no" || sinput == "No" || sinput == "NO")
			{
				continue;
			}
		}
		if (input == 2)
		{
			cout << "\n" << "Use potion?";
			el();
			cout << "[YES] / [NO]";
			el();
			cin >> sinput;
			if (sinput == "yes" || sinput == "Yes" || sinput == "YES")
			{
				if (Potions[1] > 0)
				{
					cout << "\n" << "You used Potion";
					el();
					--Potions[1];
					MStat[1] += 20;
					continue;
				}
				if (Potions[1] <= 0)
				{
					cout << "\n" << "No Potions available";
					el();
					continue;
				}
			}
			if (sinput == "no" || sinput == "No" || sinput == "NO")
			{
				continue;
			}
		}
		if (input == 3)
		{
			cout << "Use potion?";
			el();
			cout << "[YES] / [NO]";
			el();
			cin >> sinput;
			if (sinput == "yes" || sinput == "Yes" || sinput == "YES")
			{
				if (Potions[2] > 0)
				{
					cout << "\n" << "You used Potion";
					el();
					--Potions[2];
					MStat[2] *= 2;
					continue;
				}
				if (Potions[2] <= 0)
				{
					cout << "\n" << "No Potions available";
					el();
					continue;
				}
			}
			if (input == 3)
			{
				cout << "Use potion?";
				el();
				cout << "[YES] / [NO]";
				el();
				cin >> sinput;
				if (sinput == "yes" || sinput == "Yes" || sinput == "YES")
				{
					if (Potions[2] > 0)
					{
						cout << "\n" << "You used Potion";
						el();
						--Potions[2];
						MStat[2] *= 2;
						continue;
					}
					if (Potions[2] <= 0)
					{
						cout << "\n" << "No Potions available";
						el();
						continue;
					}
				}
				if (sinput == "no" || sinput == "No" || sinput == "NO")
				{
					continue;
				}
			}
		}
		if (input == 4)
		{
			cout << "Use potion?";
			el();
			cout << "[YES] / [NO]";
			el();
			cin >> sinput;
			if (sinput == "yes" || sinput == "Yes" || sinput == "YES")
			{
				if (Potions[3] > 0)
				{
					cout << "\n" << "You used Potion";
					el();
					--Potions[3];
					MStat[3] *= 2;
					continue;
				}
				if (Potions[3] <= 0)
				{
					cout << "\n" << "No Potions available";
					el();
					continue;
				}
			}
		}
		if (input == 5)
		{

			for (int i = 0; i < 4; ++i)
			{
				cout << MStatN[i] << " : " << MStat[i] << endl;
			}
			for (int i = 0; i < 4; ++i)
			{
				cout << PN[i] << " : " << Potions[i] << endl;
			}
			cout << "Level" << "[" << *Level << "]"; el();
		}
		if (input == 6)
		{
			cout << "Level UP!" << "[" << *Level << "]";
			++*Level;
			cout << "->" << "[" << *Level << "]"; el();
			cout << "Level UP Bonus All Potions +1"; el();
			for (int i = 0; i < 4; ++i)
			{
				++Potions[i];
			}
		}
	}

}
void AddPotion(int* Potions)
{
	while (1)
	{
		int set = 0;
		cout << "Add Potion"; el();
		cout << "[0]Exit ";
		cout << "[1]Add HPPotion ";
		cout << "[2]Add MPPotion ";
		cout << "[3]Add ATKPotion ";
		cout << "[4]Add DFPotion "; el();
		cin >> set;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\n" << "Please enter a number only!" << "\n" << "\n" << "Please Input Again"; el();
			continue;
		}
		if (set == 0)
		{
			return;
		}
		if (set == 1)
		{
			cout << "Yot Add HPPotion";
			++Potions[0];
			continue;
		}
		if (set == 2)
		{
			cout << "Yot Add MPPotion";
			++Potions[2];
			continue;
		}
		if (set == 3)
		{
			cout << "Yot Add DFPotion";
			++Potions[3];
			continue;
		}
		else
		{
			continue;
		}

	}
}
int main(void) 
{
	int Level = 0;
	const int size = 4;
	int Stat[size]{ 0, };
	string StatN[size]{ "HP" , "MP" , "ATK" , "DF"}; 
	int Pcount = 0;
	int Potions[size]{ 5, 5, 0, 0 };
	string PN[size]{ "HPPotion" , "MPPotion" , "ATKPotion" , "DFPotion" };
	/*set hp/mp*/while (1)
	{
		cout << "Set Your HP : ";
		cin >> Stat[0];
		cout << "Set Your MP : ";
		cin >> Stat[1];
		cout << "\n";
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\n" << "Please enter a number only!" << "\n" << "\n" << "Please Input Again" << endl << "\n";
			continue;
		}
		if (Stat[0] <= 49 || 49 >= Stat[1])
		{
			cout << "HP or MP is low" << endl;
			cout << "Please Input Again";
			el();
			continue;
		}
		if (Stat[0] > 0 && 0 < Stat[1])
		{
			cout << "Success HP/MP Setting!" << endl;
			cout << "Your HP is : " << Stat[0] << "\n" << "Your MP is : " << Stat[1];
			el();
			break;
		}
		else
		{
			cout << "Please Input Again";
			el();
			continue;
		}

	}
	/*set at/df*/while (2)
	{
		cout << "Set Your ATK : ";
		cin >> Stat[2];
		cout << "Set Your DF : ";
		cin >> Stat[3];
		cout << "\n";
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\n" << "Please enter a number only!" << "\n" << "\n" << "Please Input Again"; el();
			continue;
		}
		if (Stat[2] <= 0 || 0 >= Stat[3])
		{
			cout << "Your ATK or DF is low" << endl;
			cout << "Please Input Again"; el();
			continue;
		}
		if (Stat[2] >= 0 && 0 <= Stat[3])
		{
			cout << "Success ATK/DF Setting" << endl;
			cout << "Your ATK is : " << Stat[2] << "\n" << "Your DF is : " << Stat[3]; el();
			break;
		}
		

	}
	Default_Setting_is_over();
	/*menu*/while (3)
	{
		int menu = 0;
		Menu();
		cin >> menu;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\n" << "Please enter a number only!" << "\n" << "\n" << "Please Input Again"; el();
			continue;
		}
		if (menu == 0)
		{
			cout << "\n";
			cout << "You Select Exit" << endl;
			break;
		}
		if (menu == 1)
		{
			cout << "\n" << "HP UP!"; el();

			++Stat[0];

			continue;
		}
		if (menu == 2)
		{
			cout << "\n" << "MP UP!"; el();

			++Stat[1];

			continue;
		}
		if (menu == 3)
		{
			cout << "\n" << "Attack UP!"; el();

			++Stat[2];

			continue;
		}
		if (menu == 4)
		{
			cout << "\n" << "Defence UP!"; el();

			++Stat[3];

			continue;
		}
		if (menu == 5)
		{
			cout << "\n" << "You Select Status" << endl << "\n";

			cout << "[Your Status]" << endl;
			cout << "HP is : " << Stat[0] << endl;
			cout << "MP is : " << Stat[1] << endl;
			cout << "Attack is : " << Stat[2] << endl;
			cout << "Defence is : " << Stat[3] << endl;
			cout << "Level is : " << Level; el();
			cout << "[Potions]"; el();
			for (int i = 0; i < 4; ++i)
			{
				cout << PN[i] << " : " << Potions[i] << endl;
			}
			el();
			continue;
		}
		if (menu == 6)
		{

			cout << "\n" << "Level UP!"; el();

			++Level;
			cout << "Level UP Present!" << endl << "All Potions + 1 !"; el();
			for (int i = 0; i < 4; ++i)
			{
				++Potions[i];
			}
			continue;

		}
		if (menu == 7)
		{
			setPotion(Stat, &Level, StatN, PN, Potions);
		}
		if (menu == 8)
		{
			AddPotion(Potions);
		}

		else
		{
			cout << "\n" << "Please Input Again"; el();
			continue;
		}
	}
	



	return 0;
}
