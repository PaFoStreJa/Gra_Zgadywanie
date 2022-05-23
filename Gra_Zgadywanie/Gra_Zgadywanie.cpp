#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;



int poziom1()
{

	int liczba;
	int szukana;
	int lpr = 1; //lpr - liczba prób

	srand((unsigned)time(NULL));
	szukana = rand() % 10 + 1;

	cout << "\nWprowadz liczbe od 1 do 10: ";
	cin >> liczba;

	while (liczba != szukana)
	{
		if (liczba > szukana)
		{
			cout << "za duzo\n";
			lpr = lpr + 1;
		}
		else
		{
			cout << "za malo\n";
			lpr = lpr + 1;
		}
		cout << "Wprowadz kolejna liczba: ";
		cin >> liczba;
	}
	cout << "Gratulacje! odgadnieta liczba to: " << szukana << " | zgadnieto za " << lpr << " razem\n";

	return 0;
}

int poziom2()
{

	int liczba;
	int szukana;
	int lpr = 1;

	srand((unsigned)time(NULL));
	szukana = rand() % 100 + 1;

	cout << "\nWprowadz liczbe od 1 do 100: ";
	cin >> liczba;

	while (liczba != szukana)
	{
		if (liczba > szukana)
		{
			cout << "za duzo\n";
			lpr = lpr + 1;
		}
		else
		{
			cout << "za malo\n";
			lpr = lpr + 1;
		}
		cout << "Wprowadz kolejna liczba: ";
		cin >> liczba;

	}

	cout << "Gratulacje! odgadnieta liczba to: " << szukana << " | zgadnieto za " << lpr << " razem\n";

	return 0;
}

int gra()
{
	int wybur{};

	while (wybur != 1 && wybur != 2)
	{

		cout << "wybierz poziom trudnosci: 1, 2: ";
		cin >> wybur;


		switch (wybur)
		{

		case 1: poziom1(); break;
		case 2: poziom2(); break;

		default: cout << "";

		}

	}
	return 0;
}


int main()
{

	cout << "GRA Jakub Pieprzyca\n\n";

	gra();

	system("pause");

	return 0;

}