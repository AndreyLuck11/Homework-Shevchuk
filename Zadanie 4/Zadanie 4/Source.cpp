#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

struct Plane {

	string Brand;
	int NumberOfPassengers;
	float Speed;
};

void randString(string& str) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";


	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;
}

void showPlane(const Plane p) {

	cout << "\t" << p.Brand << "\t\t\t"
		<< p.NumberOfPassengers << "\t\t"
		<< "   " << p.Speed << endl;
}

void showPlaneF(const Plane p) {
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "\t" << p.Brand << "\t\t\t"
		<< p.NumberOfPassengers << "\t\t"
		<< "   " << p.Speed << endl;
	f.close();

}


void bubbleSortSpeed(Plane planes[], int Size) {
	int j = 0;
	Plane tmp;
	// èä¸ì ïî ìàññèâó
	for (int i = 0; i < Size; i++) {
		// äåëàåì ïðîâåðêè â îñòàâøåéñÿ ÷àñòè ìàññèâà
		for (int j = Size - 1; j >= i + 1; j--) {
			if (planes[j].Speed > planes[i].Speed) {  // ñðàâíèâàåì ñîñåäíèå ýëåìåíòû
				// äåëàåì ïåðåñòàíîâêó
				tmp = planes[i];
				planes[i] = planes[j];
				planes[j] = tmp;
			}
		}
	}
}

void bubbleSortNumberOfPassengers(Plane planes[], int Size) {
	int j = 0;
	Plane tmp;
	// èä¸ì ïî ìàññèâó
	for (int i = 0; i < Size; i++) {
		// äåëàåì ïðîâåðêè â îñòàâøåéñÿ ÷àñòè ìàññèâà
		for (int j = Size - 1; j >= i + 1; j--) {
			if (planes[j].NumberOfPassengers > planes[i].NumberOfPassengers) {  // ñðàâíèâàåì ñîñåäíèå ýëåìåíòû
				// äåëàåì ïåðåñòàíîâêó
				tmp = planes[i];
				planes[i] = planes[j];
				planes[j] = tmp;
			}
		}
	}
}


void Cout(Plane planes[], int Size) {

	cout << endl << "                        Sorted Max Speed" << endl << endl;
	cout << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
	bubbleSortSpeed(planes, Size);

	for (int i = 0; i < Size; i++)
		showPlane(planes[i]);

	cout << endl << "                 Sorted Number Of Passengers" << endl << endl;
	cout << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
	bubbleSortNumberOfPassengers(planes, Size);

	for (int i = 0; i < Size; i++)
		showPlane(planes[i]);
}

void file(Plane planes[], int Size, const int l) {

	ofstream f;
	f.open("data.txt");
	for (int i = 0; i < l; i++) {
		f << endl << "                        Sorted Max Speed" << endl << endl;
		f << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
		bubbleSortSpeed(planes, Size);

		for (int i = 0; i < Size; i++)
			showPlaneF(planes[i]);

		f << endl << "                 Sorted Number Of Passengers" << endl << endl;
		f << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
		bubbleSortNumberOfPassengers(planes, Size);

		for (int i = 0; i < Size; i++)
			showPlaneF(planes[i]);
	}
	f.close();
}

void write2File(const Plane p[], const int l) {
	ofstream f;
	f.open("data.txt");


	for (int i = 0; i < l; i++)
		f << p[i].Brand << "\t"
		<< p[i].NumberOfPassengers << "\t"
		<< p[i].Speed << endl;
	f.close();
}

int main() {
	int const Size = 15;
	Plane planes[Size];
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
	for (int i = 0; i < Size; i++)
	{
		planes[i].NumberOfPassengers = 80 + rand() % 150;
		planes[i].Speed = 725 + rand() % 250;
		randString(planes[i].Brand);

		showPlaneF(planes[i]);


	}

	cout << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
	for (int i = 0; i < Size; i++)
	{
		planes[i].NumberOfPassengers = 80 + rand() % 150;
		planes[i].Speed = 725 + rand() % 250;
		randString(planes[i].Brand);

		showPlane(planes[i]);


	}

	Cout(planes, Size);
	file(planes, Size, 1);
	write2File(planes, Size);
	return 0;
}
