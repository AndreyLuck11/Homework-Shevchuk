#include <iostream>
using namespace std;
#include <ctime>
#include <cmath>
void main() {
	srand(time(NULL));

	int const size = 10;
	int quantity = 0;
	int arr[size];



	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 30 - 10;
	}

	int minVel = abs(arr[0]);
	int nomerMin = 0;
	for (int i = 1; i < size; i++)
	{
		if (abs(arr[i]) < abs(minVel)) 
		{
			minVel = abs(arr[i]);
			nomerMin = i;
		}
	}
	nomerMin++;


	int maxVel = abs(arr[0]);
	int nomerMax = 0;
	for (int i = 1; i < size; i++)
	{
		if (abs(arr[i]) > abs(maxVel))
		{
			maxVel = abs(arr[i]);
			nomerMax = i;
		}
	}
	nomerMax++;

	cout << "Nomer min po modulu massiva raven " << nomerMin << endl;
	cout << "Nomer max po modulu massiva raven " << nomerMax;
	
}