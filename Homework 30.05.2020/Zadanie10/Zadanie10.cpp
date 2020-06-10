#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	fstream f;
	f.open("Z10.txt", ios::out | ios::trunc);

	char str[256];
	int i = 0, j = 0;
	cout <<  "Entered string:\n";
	cin.getline(str, 256, '.');
	str[strlen(str)] = '.';
	while (*(str + i) != '.')
	{
		if (*(str + i) == ' ' || i == 0)
		{
			if (i != 0) j = i + 1;
			while (*(str + j) != '.')
			{
				str[j] = str[j + 1];
				j++;
			}
			str[j] = NULL;
		}
		i++;
	}
	cout << "String after conversions:\n";
	cout << str;
	f << str;
	return 0;
}

//Удалить из строки первые буквы слов. (Пример. Входная строка: Crystal Method. Результат: rystal ethod).
