#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main() {
	fstream f;
	f.open("Z3 h.txt", ios::out | ios::trunc);
	int N;

	float y, x, ch, z;
	z = 5;
	N = 5 ;
	
	cout << "Vvedite chiclo ch\n";
	cin >> ch;
	cout << "Vvedite chiclo x\n";
	cin >> x;

	y = x - (pow(x, 3) / 1 * 2) + (pow(x, 5) / 1 * 2 * 3 * 4);
	int fact = 0;
	if (ch > z ) {
		for (int i = 5; i < ch; i = i + 2) {
			z = z +2;
			N = N + 2;
			if (N < 0)
				fact = 0;
			if (N == 0)
				fact = 1;

			else
				for (int i = 1; i <= N; i++)
				{
					fact = fact * i;
				}
			y = -(pow(x, z) / N);

		}
	}
	cout << y;
}