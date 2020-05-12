#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;
const int string_len = 3;

std::string arrcolor[10] = {"Black","Yellow", "Red", "White", "Green", "Pink", "Blue", "Purple", "Gray"};

struct book
{
	string name;
	string color;
	
};

struct libliary
{
	string name;
	int shelfs;
	book book;
};

void randString(string &str, const int len){
	static const char alphabet[] =
        	"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	// очищаем и заносим данные
	str.clear();
	str.append(len, ' ');

	for(int i=0; i < str.length(); i++){
    	int r = rand() % (sizeof(alphabet)-1);
    	str[i] = alphabet[r];
	}
	str[str.length()] = 0;  // последний символ сообщает о том, что строка закончилась
}

void showBooks(const libliary l){
    cout << l.name << "\t"
		 << l.shelfs << "\t"
         << l.book.name << "\t\t"
		 << l.book.color << endl;
		
}

void showlibliary(const libliary book[], const int len){
	cout << "name \t"
     	<< "shelfs \t"
     	<< "bookName\t"
     	<< "bookColor "<< endl;

	for(int i=0; i<len; i++){
		showBooks(book[i]);
	}

	cout << endl;
}

void initlibliary(libliary books[], const int len){
	for(int i=0; i<len; i++){
    	// libliary
		randString(books[i].name, string_len);
    	books[i].shelfs = rand() % 50;

    	// book
    	randString(books[i].book.name, string_len);
		books[i].book.color = arrcolor[rand() % 9];
	}
}

void writeTextFile(const libliary books[], const int l){
	ofstream f;

	f.open("HomeWork_12.05.20.txt");
	for(int i = 0; i < l; i++)  // Все атрибуты struct  в одной строке
    	  f << books[i].name<< " "
		    << books[i].shelfs << "  "
      		<< books[i].book.name << "  "
			<< books[i].book.color << endl;
	f.close();
}

void writeBinFile(libliary lib[], const int l) {
	// in-function WRITE code
	fstream f;
	f.open("HomeWork_12.05.20.txt", ios::out | ios::binary);
	f.write((char*)lib, sizeof(libliary) * l);
	f.close();
}

void openBinFile(libliary lib[], const int l) {
	fstream f;
	f.open("HomeWork_12.05.20.txt", ios::in | ios::binary);
	f.read((char*)lib, sizeof(libliary) * l);
	f.close();
}


void openTextFile(libliary books[], const int l){
	ifstream f;

	f.open("HomeWork_12.05.20.txt");
	for(int i = 0; i < l; i++)
    	f   >> books[i].name
		    >> books[i].shelfs
      		>> books[i].book.name
			>> books[i].book.color;
	f.close();
}

int main()
{
	//Задание 1+
	//Объявить сущности 1 и 2. Описать их свойства. Включить одну сущность в другую. Объявить массив сущностей 1. +
	//Заполнить атрибуты числовыми и текстовыми значениями (диапазон значений определить самостоятельно). +
	//библиотека и книга +
	//Задание 2 +
	//Реализовать чтение и запись данных в текстовый файл +
	const int len = 20;
	const int Showmassive = 5;
	libliary arrBooks[len];

	cout << "First massive libliary:\n";
	initlibliary(arrBooks, len);
	writeTextFile(arrBooks, len);
	writeBinFile(arrBooks, len);
	showlibliary(arrBooks, Showmassive);

	cout << "New massive libliary:\n";
	initlibliary(arrBooks, len);
	showlibliary(arrBooks, Showmassive);

	cout << "Read massive libliary txt:\n";
	openTextFile(arrBooks, len);
	showlibliary(arrBooks, Showmassive);

	cout << "Read massive libliary bin:\n";
	openBinFile(arrBooks, len);
	showlibliary(arrBooks, Showmassive);
	

	std::getchar();
	std::getchar();
	return 0;
}


