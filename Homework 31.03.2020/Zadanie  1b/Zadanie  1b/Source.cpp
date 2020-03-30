#include <iostream>
#include <ctime> 
using namespace  std;
void main()
{
	srand(time(NULL));

	int k = rand() % 10 + 2;
	
	for (int i = 0; i < k; i++)
	{
		int a = rand() % 30 - 10;
		cout << a << endl;
	}
	
}