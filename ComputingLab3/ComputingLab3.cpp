#include <iostream>
#include <string>

#include "Mass.h"

using namespace std;

void clear_keyboard_buffer()
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{
	int quit = 1;
	Mass m;
	do
	{
		int value = -1;
		cout << "Please enter 1 to use Avoirdupois pounds, 2 to use Troy pounds, 3 to use grams, or 0 to exit: ";
		cin >> value;

		if (cin.fail())
		{
			cout << "Please enter a valid value." << endl;
			clear_keyboard_buffer();
			continue;
		}
		clear_keyboard_buffer();

		if (value == 1)
		{
			int Avoi;
			cout << "Please enter a mass in Avoirdupois pounds: ";
			cin >> Avoi;
			if (cin.fail())
			{
				cout << "Please enter a valid value." << endl;
				clear_keyboard_buffer();
				continue;
			}
			clear_keyboard_buffer();
			m.setMassAvoirdupoisPounds(Avoi);
		}
		else if (value == 2)
		{
			int Troy;
			cout << "Please enter a mass in Troy pounds: ";
			cin >> Troy;
			if (cin.fail())
			{
				cout << "Please enter a valid value." << endl;
				clear_keyboard_buffer();
				continue;
			}
			clear_keyboard_buffer();
			m.setMassTroyPounds(Troy);
		}
		else if (value == 3)
		{
			int grams;
			cout << "Please enter a mass in grams: ";
			cin >> grams;
			if (cin.fail())
			{
				cout << "Please enter a valid value." << endl;
				clear_keyboard_buffer();
				continue;
			}
			clear_keyboard_buffer();
			m.setMassMetricGrams(grams);
		}
		else if (value == 0)
		{
			quit = 0;
			continue;
		}
		else
		{
			cout << "Please enter a valid value." << endl;
			continue;
		}

		cout << "Mass in Avoirdupois pounds is " << m.getMassAvoirdupoisPounds() << endl;
		cout << "Mass in Troy pounds is " << m.getMassTroyPounds() << endl;
		cout << "Mass in grams is " << m.getMassMetricGrams() << endl;
	} while (quit != 0);
}