#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void main()
{
	fstream f;
	f.open("Z1.txt", ios::out | ios::trunc);
	string s1 = "Suma sosumhol suma um";
	f << s1 << endl;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == 'u' && s1[i + 1] == 'm' && s1[i - 1] != ' ')
		{
			s1.erase(i, 2);
		}
	}
	cout << s1;
	f << s1;
}

//Составить алгоритм, находящий, сколько раз в тексте сочетание “ум” встречается не в начале слова.
