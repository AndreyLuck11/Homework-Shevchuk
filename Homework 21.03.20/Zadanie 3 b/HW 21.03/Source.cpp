#include <iostream>
using namespace std;
#include <math.h>
#include <fstream>
int main(){
	fstream f;
	f.open("Z3.txt", ios::out | ios::trunc);

	float y, x, ch,  z , v;
	z = 5;
	v = 11;
	cout << "Vvedite chiclo ch\n";
	cin >> ch;
	cout << "Vvedite chiclo x\n";
	cin >> x;

	y = 3 / (7 * x) + 4 / (9 * x) + 5 / (11 * x);

	if (ch > 11) {
		for (int i = 11; i < ch; i = i + 2) {
			z++;
			v = v + 2;
			y = y + (z / (v * x));
		}
	}
	f << y;
	cout << y;
	f.close();
}
