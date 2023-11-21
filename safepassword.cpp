#include <iostream>
#include <string>
#include <Windows.h>
#include <random>

using namespace std;

string L = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
string nums = "1234567890";
string sumb = "#()$/*-";

int frand(int a, int b) {
	return a + rand() % (a - b + 1);
}

string simple() {
	int lenth, r;
	string password = "";
	cout << "Введите длину пароля для генерации: ";
	cin >> lenth;
	cout << " " << endl;
	for (int i = 0; i < lenth; i++) {
		r = frand(0, 52);
		password += L[r];
	}
	cout << password << endl;
	return password;
}

string middle() {
	string password = "";
	int lenth, r;
	cout << "Введите длину пароля для генерации: ";
	cin >> lenth;
	cout << " " << endl;
	for (int i = 0; i < lenth/2; i++) {
		r = frand(0, 52);
		password += L[r];
	}
	for (int i = 0; i < lenth / 2; i++) {
		r = frand(0, 10);
		;
	}
	cout << password << endl;
	cout << sumb << endl;
	return password;
}

string hard1() {
	string prepass = "";
	string password = "";
	int lenth, r, r1;
	cout << "Введите длину пароля для генерации: ";
	cin >> lenth;
	cout << " " << endl;
	for (int i = 0; i < 64; i++) {
		r = frand(0, 10);
		r1 = frand(0, 52);
		prepass += L[r1] + nums[r];
	}
	for (int i = 0; i < lenth; i++) {
		r = frand(0, 64);
		password += prepass[r];
	}
	cout << password << endl;
	return password;
}

string hard() {
	string password = "";
	int lenth, r, r1, r2;
	cout << "Введите длину пароля для генерации: ";
	cin >> lenth;
	cout << " " << endl;
	for (int i = 0; i < lenth; i++) {
		r = frand(0, 52);
		r1 = frand(0, 10);
		r2 = frand(0, 7);
		password += L[r] + nums[r1] + sumb[r2];
	}
	cout << password << endl;
	return password;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int chose;
	cout << "ГЕНЕРАТОР БЕЗОПАСНЫХ ПАРОЛЕЙ" << endl;
	cout << "Выберите тип сложности" << endl << "1. Легкий" << endl << "2. Средний" << endl << "3. Сложный" << endl << "4. БОНУС Очень сложный" << endl;
	cin >> chose;
	switch (chose)
	{
	case 1:
		simple();
		break;
	case 2:
		middle();
		break;
	case 3:
		hard();
		break;
	case 4:
		hard1();
		break;
	default:
		break;
	}

}


