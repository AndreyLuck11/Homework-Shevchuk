#include <iostream>
#include <fstream>
using namespace std;

void main()
{

    string WORDS[] =
    {
        "GJjiirk",
        "jdjdijawwad",
        "dawda",
        "fjdawjhdoihaoi",
        "rdgdrggdrg",
        "geg"
    };

    int amout = sizeof(WORDS) / sizeof(WORDS[0]);
    int* mas = new int[amout];

    cout << "Original massiv" << endl;


    for (int i = 0; i < amout; i++)
    {
        cout << WORDS[i] << endl;

    }
    cout << "\n";

    for (int i = 0; i < amout; i++)
    {
        bool flag = true;
        for (int j = 0; j < amout - (i - 1); j++)
        {
            if (WORDS[j].length() > WORDS[j + 1].length())
            {
                flag = false;
                swap(WORDS[j], WORDS[j + 1]);
            }
        }
        if (flag)
        {
            break;
        }
    }

    cout << "Sort massiv" << endl;

    for (int i = 0; i < amout; i++)
    {
        cout << WORDS[i] << endl;
    }



}

