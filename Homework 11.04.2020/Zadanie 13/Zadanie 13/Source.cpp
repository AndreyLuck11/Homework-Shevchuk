#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	int newArr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 30 - 10;
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			newArr[i] = arr[i] - 1;
			cout << arr[i] << "       " << newArr[i] << endl;
		}
		else
		{
			newArr[i] = arr[i] + 5;
			cout << arr[i] << "       " << newArr[i] << endl;
		}

	}
}