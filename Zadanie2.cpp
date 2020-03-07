#include <iostream>
#include <windows.h>
using namespace std;
int a;
int b;
int c;
int S;
int P;
int main()

{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "¬ведите сторону a" << endl;
    cin >> a;

    cout << "¬ведите сторону b" << endl;
    cin >> b;

    cout << "¬ведите сторону c" << endl;
    cin >> c;

    P = a + b + c;
    S = 0.5 * a * b;


    cout << "P=" << P << endl;

    cout << "S=" << S << endl;



    getchar();  // ожидание ввода, чтобы прога
    getchar();  // не закрывалась после выполнени€

    return 0;
}