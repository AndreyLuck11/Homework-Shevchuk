#include <iostream>
#include <iomanip>  
#include <fstream>
using namespace std;
float dx;
float x;
float z;
fstream f;
int main()
{    
   
    f.open("Z2.txt", ios::out | ios::trunc);
   cout << "Solve function. \nEnter dx: ";
   cin >> dx;
   cout << "Vvedite predel [x;z]\n";
   cout << "Vvedite x\n";
   cin >> x;
   cout << "Vvedite z\n";
   cin >> z;  
   f << "\tx\t\ty" << endl;
   f.precision(5);

    while (x < z) {
        float y = (-3 + x) * (-3 + x) + 2*x+5 ;
        f << "\t"
            << x
            << "\t\t"
            << y
            << endl;
            x += dx;
    }
    f.close();

    return 0;
}
