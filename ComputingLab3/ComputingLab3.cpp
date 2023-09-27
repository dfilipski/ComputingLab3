#include <iostream>
#include "Mass.h"

using namespace std;
int main()
{
    int quit = 1;
    Mass m;
    do
    {
        int value;
        cout << "Please enter 1 to use Avoirdupois pounds, 2 to use Troy pounds, 3 to use grams, or 0 to exit: "
            cin >> value;

        if (value == 1)
        {
            int Avoi;
            cout << "Please enter a mass in Avoirdupois pounds: ";
                cin >> Avoi;
            m.setMassAvoirdupoisPounds(Avoi);
        }
        else if (value == 2)
        {
            int Troy;
            cout << "Please enter a mass in Troy pounds: ";
                cin >> Troy;
            m.setMassTroyPounds(Troy);
        }
        else if (value == 3)
        {
            int grams;
            cout << "Please enter a mass in grams: ";
                cin >> grams;
            m.setMassMetricGrams(grams);
        }
        else if (value == 0)
        {
            quit = 0;
        }

    } while (quit != 0);
}