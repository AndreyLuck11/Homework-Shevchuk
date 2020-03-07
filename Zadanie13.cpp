#include <iostream>

using namespace std;
float cooki;
float candy;
float bay1;
float bay2;


int main() {

	cout << "Enter the cost of 1 KG of sweets" << endl;
	cin >> candy;
	cout << "Enter the cost of 1 KG of cookies" << endl;
	cin >> cooki;
	bay1 = candy * 0.3 + cooki * 0.4;
	bay2 = 3 * (cooki * 2 + candy * 1.8);

	cout << "Purchase value 1 =" << bay1 << endl;
	cout << "Purchase value 2 =" << bay2 << endl;

	getchar();  // ожидание ввода
	getchar();
	return 0;

}
