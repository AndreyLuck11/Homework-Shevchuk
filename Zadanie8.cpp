#include <iostream>
#include <math.h>
using namespace std;
float x = -2.34;
float chast1;
float sins;
float modul;
float chast2;
float kk;
float cos2x;
float chast3;
float resh;

int main() {
    modul = abs(x - 5);

    sins = sin(x);

    kk = sqrt(x * x + 2014);

    cos2x = cos(2 * x);

    resh = (modul - sins) / 3 + kk * cos2x - 3;

    cout << "Otvet = " << resh << endl;

    getchar();  // ожидание ввода
    getchar();
    return 0;

}
