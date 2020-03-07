#include <iostream>
#include <windows.h>
using namespace std;
float p1;
float kvad;
float kub;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Vvedite chislo \n";
	cin >> p1;



	kvad = p1 * p1;
	kub = p1 * p1 * p1;

	cout << p1 << "^2" << "=" << kvad << endl;
	cout << p1 << "^3" << "=" << kub << endl;




	getchar();
	getchar();
}