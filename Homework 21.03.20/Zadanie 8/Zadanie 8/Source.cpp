#include <iostream>
#include <fstream> 
using namespace std;
int main()
{
    fstream f;
    f.open("Z8.txt", ios::out | ios::trunc);
    int A, counter = 0;

    cout << "Enter A" << endl;
    cin >> A;

    for (int i = 100; i < 1000; ++i)
        if (i % 10 + i / 10 % 10 + i / 100 == A)
            counter++;
    f << counter;
    cout << counter;
}
