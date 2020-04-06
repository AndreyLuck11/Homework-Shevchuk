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


 int minznach = arr[1];
 int nomerZnach = 0;

	for (int i = 0; i < size; i++)
	{
		if ((i + 1) % 2 != 0 && arr[i] < minznach)
		{
			minznach = arr[i];
			nomerZnach = i + 1;
		}
		
	}
	cout << "Nomer elementa massiva raven " << nomerZnach << "              Element massiva raven " << minznach;
}










/*for (int i = 0; i < size; i++)
{
	if ((i + 1) % 2 == 0)
	{
		cout << "Nomer v massive - " << (i + 1) << "            " << "Znacenie elementa - " << arr[i] << endl;
	}
}
*/