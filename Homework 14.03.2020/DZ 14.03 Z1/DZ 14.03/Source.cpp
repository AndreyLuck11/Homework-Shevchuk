#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream f;
    f.open("Z1.txt", ios::out | ios:: trunc);
    int n;
    cin >> n ;   
    n = n++;   
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++)
           f << 0;
           f << endl;
          
        
    }

    cout << endl;

    std::getchar();  
    std::getchar();  
    return 0;
}
