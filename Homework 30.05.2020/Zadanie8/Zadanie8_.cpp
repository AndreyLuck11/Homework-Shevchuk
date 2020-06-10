#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
	fstream f;
	f.open("Z8.txt", ios::out | ios::trunc);

	string s1("qw");
	string s2 = "gklqgwgwgw";
	char *p = new char [s1.length()];

	for (int i = 0; i < s1.length(); i++) {

		p[i] = s1[i];

	}
	
	f << s1 << endl;
	f << s2<< endl;

	for (int i = 0; i < s2.length(); i++)
	{
		for (int j = 0; j < s1.length(); j++)
		{
			if (s2[i] == s1[j])
			{
				s2.erase(i, 1);
			}
		}
	}

	for (int i = 0; i < s2.length(); i++)
	{
		cout << s2[i];
		f << s2[i];
	}
}

//Составить алгоритм, исключающий из строки А символы строки Б.
