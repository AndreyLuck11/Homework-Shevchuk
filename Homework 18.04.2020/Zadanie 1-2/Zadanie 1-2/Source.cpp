#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>
#include <stdlib.h>

using namespace std;
void selectionSort(float data[], int len);
void insertionSort(float data[], int len);
void bubbleSort(float data[], int len);
void s100();
void s1k();
void s5k();
void s10k();
void s50k();
long int counterB = 0;
long int counterS = 0;
long int counterI = 0;
fstream f;

int main() {

    f.open("Zadanie_2_Oll.txt", ios::out | ios::trunc);
    cout << "Start of the sorting!" << endl << endl;
    srand(5589004543543466);
    s100();
    s1k();
    s5k();
    s10k();
    s50k();
    return 0;
    f.close();
}

void selectionSort(float data[], int len) {
    int j = 0;
    float tmp = 0;
    for (int i = 0; i < len; i++) {
        j = i;
        for (int k = i; k < len; k++) {
            if (data[j] > data[k]) {
                j = k;
                counterS++;
            }
        }
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
        counterS++;
    }
}

void insertionSort(float data[], int len) {
    float key = 0;
    int j = 0;
    for (int i = 1; i < len; i++) {
        key = data[i];
        j = i - 1;
        counterI++;
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j = j - 1;
           
            data[j + 1] = key;
            counterI++;
        }
    }
}

void bubbleSort(float data[], int len) {
    float tmp = 0;
    for (int i = 0; i < len; i++) {
        for (int j = len - 1; j >= i + 1; j--) {
            if (data[j] < data[j - 1]) {
                tmp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = tmp;
                counterB++;
            }
        }
    }
}

void s100()
{
    const int n = 100;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }
    bubbleSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    selectionSort(data, n);
    cout << "------------------------" << endl;
    cout << "100 elementov" << endl;
    cout << "Selection Sort \t" << counterS << endl;
    cout << "Bubble Sort \t" << counterB << endl;
    cout << "Insertion Sort \t" << counterI << endl;
    cout << "------------------------" << endl << endl;

    f << "------------------------" << endl;
    f << "100 elementov" << endl;
    f << "Selection Sort \t" << counterS << endl;
    f << "Bubble Sort \t" << counterB << endl;
    f << "Insertion Sort \t" << counterI << endl;
    f << "------------------------" << endl << endl;

    counterS = 0;
    counterB = 0;
    counterI = 0;

}

void s1k()
{
    const int n = 1000;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }
    bubbleSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    selectionSort(data, n);

    cout << "------------------------" << endl;
    cout << "1000 elementov" << endl;
    cout << "Selection Sort \t" << counterS << endl;
    cout << "Bubble Sort \t" << counterB << endl;
    cout << "Insertion Sort \t" << counterI << endl;
    cout << "------------------------" << endl << endl;

    f << "------------------------" << endl;
    f << "100 elementov" << endl;
    f << "Selection Sort \t" << counterS << endl;
    f << "Bubble Sort \t" << counterB << endl;
    f << "Insertion Sort \t" << counterI << endl;
    f << "------------------------" << endl << endl;

    counterS = 0;
    counterB = 0;
    counterI = 0;
}

void s5k() {
    const int n = 5000;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }
    bubbleSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    selectionSort(data, n);

    cout << "------------------------" << endl;
    cout << "5000 elementov" << endl;
    cout << "Selection Sort \t" << counterS << endl;
    cout << "Bubble Sort \t" << counterB << endl;
    cout << "Insertion Sort \t" << counterI << endl;
    cout << "------------------------" << endl << endl;

    f << "------------------------" << endl;
    f << "100 elementov" << endl;
    f << "Selection Sort \t" << counterS << endl;
    f << "Bubble Sort \t" << counterB << endl;
    f << "Insertion Sort \t" << counterI << endl;
    f << "------------------------" << endl << endl;



    counterS = 0;
    counterB = 0;
    counterI = 0;
}

void s10k() {
    const int n = 10000;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }
    bubbleSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    selectionSort(data, n);
    cout << "------------------------" << endl;
    cout << "10000 elementov" << endl;
    cout << "Selection Sort \t" << counterS << endl;
    cout << "Bubble Sort \t" << counterB << endl;
    cout << "Insertion Sort \t" << counterI << endl;
    cout << "------------------------" << endl << endl;

    f << "------------------------" << endl;
    f << "100 elementov" << endl;
    f << "Selection Sort \t" << counterS << endl;
    f << "Bubble Sort \t" << counterB << endl;
    f << "Insertion Sort \t" << counterI << endl;
    f << "------------------------" << endl << endl;

    counterS = 0;
    counterB = 0;
    counterI = 0;
}

void s50k() {
    const int n = 50000;
    float  data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }
    bubbleSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    selectionSort(data, n);

    f << "------------------------" << endl;
    f << "100 elementov" << endl;
    f << "Selection Sort \t" << counterS << endl;
    f << "Bubble Sort \t" << counterB << endl;
    f << "Insertion Sort \t" << counterI << endl;
    f << "------------------------" << endl << endl;

    cout << "------------------------" << endl;
    cout << "50000 elementov" << endl;
    cout << "Selection Sort \t" << counterS << endl;
    cout << "Bubble Sort \t" << counterB << endl;
    cout << "Insertion Sort \t" << counterI << endl;
    cout << "------------------------" << endl << endl;

    counterS = 0;
    counterB = 0;
    counterI = 0;
}

