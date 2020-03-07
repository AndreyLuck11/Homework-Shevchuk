#include <iostream>

using namespace std;
float c;
float k;
float f;
int vibor;
int znac;

int main() {


	cout << "Select the initial number system:" << endl
		<< "1.Celsius \n"
		"2.Fahrenheit\n"
		"3.Kelvin " << endl;
	cin >> vibor;
	cout << "Enter a value to convert" << endl;
	cin >> znac;

	switch (vibor) {
	case 1:
		cout << "1.C = " << znac << endl;
		cout << "2.F = " << znac * 1.8 + 32 << endl;
		cout << "3.K = " << znac + 273.15 << endl;
		break;
	case 2:
		cout << "1.C = " << (znac - 32) / 1.8 << endl;
		cout << "2.F = " << znac << endl;
		cout << "3.K = " << (znac + 459) / 1.8 << endl;
		break;
	case 3:
		cout << "1.C = " << znac - 273.15 << endl;
		cout << "2.F = " << znac * 1.8 - 459 << endl;
		cout << "3.K = " << znac << endl;
		break;
	}

	getchar();  // ожидание ввода
	getchar();
	return 0;

}
