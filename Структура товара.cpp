// Кинотеатр
// Фомкин Г.А. 2ИСИП-122
/*
Опишите структуру сведений о товарах: наименование,
производитель, цена, количество на складе.
Объявите массив, состоящий из N структур.
Из этого массива получить выборочные сведения:
➢ О товарах, которых нет на складе
➢ О товарах с максимальной ценой
*/

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,
		"");
	struct Person
	{
		char Name[20];
		char Manufacture[15];
		unsigned int Price;
		unsigned int Quantity;
	} A[5];
	int i, k;
	for (i = 0; i < 5; i++)
	{
		cout << "Введите название товара:\n";
		cin >> A[i].Name;
		cout << "Введите производителя товара:\n";
		cin >> A[i].Manufacture;
		cout << "Введите цену товара:\n";
		cin >> A[i].Price;
		cout << "Введите кол-во товара:\n";
		cin >> A[i].Quantity;
		cout << "\n-----------------------\n";
		cout << "Заполнено " << i << " товара из " << k << endl;
	}
	for (i = 0; i < 5; i++)
	{
		if (A[i].Quantity == 0) {
			cout << "Товара " << A[i].Name << " нет на складе";
		}
	}
	int Max = 0;
	for (i = 0; i < 5; i++) {
		if (A[i].Price > Max) {
			cout << "Максимальная цена " << A[i].Price << "у товара " << A[i].Name << endl;
		}
	}