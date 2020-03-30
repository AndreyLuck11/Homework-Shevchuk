#include <iostream>
using namespace std;
#include <ctime>

void main() {
	srand(time(NULL));

	int const size = 10;
	int quantity = 0;
	int arr[size];



	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 30 - 10;
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 6)
		{
			quantity = arr[i] + quantity;
		}
	}

	cout << quantity << endl;

}