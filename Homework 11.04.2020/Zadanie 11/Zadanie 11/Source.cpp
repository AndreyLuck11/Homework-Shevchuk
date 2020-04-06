#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int size = 20;
	int arr[size];

	for (int i = 0; i < size; i++)
	{

		arr[i] = rand() % 30 - 10;

	}

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
		
	}
	
	int sa = sum / size;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < sa)
		{
			cout << arr[i] << endl;
		}
	}

}