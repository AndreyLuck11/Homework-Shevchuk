#include <iostream>
#include <iomanip>  // чтобы работал precision
#include <fstream>
using namespace std;

fstream f;
int main()
{
   
    float dx;
    float c;
    float z;

    std::cout << "Solve function. \nEnter dx: ";
    std::cin >> dx;
    
    f.open("Z2.txt", ios::out | ios::trunc);
    
    cout << "Vvedite predel [x;z]\n";
    cout << "Vvedite x\n";
    cin >> x;
    cout << "Vvedite z\n";
    cin >> x;
    
    std::cin >> c;
    std::cin >> z;
    // заголовок таблицы
    std::cout << "\tx\t\ty" << std::endl;

    float x = c;
    
    std::cout.precision(5);

    while (x < z) {
        float f = (x + 1) * (x + 1) + 3 * (x + 2);
        std::cout << "\t"
            << x
            << "\t\t"
            << f
            << std::endl;
        x += dx;
    }

    return 0;
}
