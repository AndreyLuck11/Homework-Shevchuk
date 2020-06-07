#include <iostream>
using namespace std;
#include <fstream>

void main() 
{
	fstream f;
	f.open("Z22.txt", ios::out | ios::trunc);
	string s1 = "FweggewgFF/*jweggegwgf*/fiewgegee";

	int lonng = s1.length();
	char zvezd = '*';
	char slash = '/';


	for (int i = 0; i < lonng; i++)
	{	
		
		if (slash == s1[i] && zvezd == s1[i + 1])
		{
			break;
		}
		else 
		{
			cout << s1[i];
			f << s1[i];
		}
		
		
	}

	for (int i = 0; i < lonng; i++)
	{

		if (slash == s1[i + 1] && zvezd == s1[i]) {

			int t = i + 2;

			for (;t < lonng; t++)
			{
				cout << s1[t];
				f << s1[t];
			}
			
		}
		
	}

	f.close();

}
//Result : FweggewgFFfiewgegee