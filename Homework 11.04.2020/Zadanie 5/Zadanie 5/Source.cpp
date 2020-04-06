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

	int minCislo = arr[0];
	int nomerMassivaMin = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]< minCislo)
		{
			minCislo = arr[i];
			nomerMassivaMin = i + 1;
				
		}		
	}

	int maxCislo = arr[0];
	int nomerMassivaMax = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > maxCislo)
		{
			maxCislo = arr[i];
			nomerMassivaMax = i + 1;

		}
	}
	
	
	if (nomerMassivaMin == 0) nomerMassivaMin = 1;
	cout << "Min chislo v masivi " << minCislo << endl;
	cout << "Min nomer masiva " << nomerMassivaMin << endl;

	if (nomerMassivaMax == 0) nomerMassivaMax = 1;
	cout << "Max chislo v masivi " << maxCislo << endl;
	cout << "MAX nomer masiva " << nomerMassivaMax << endl;
} 