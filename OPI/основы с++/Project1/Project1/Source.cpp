#include<iostream>
using namespace std;
/*разработать программу, которая будет выводить заданный, символ заднное количество раз и выбором линии написания (вертикальная и горизонтальная)
*/
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	int a=0, y, z;
	char k;
	cout << "введи символ " << endl;
	cin >> k;
	cout << "введи число символов" << endl;
	cin >> y;
	cout << "выберите тип линии" << endl << "1.горизонтальная" << endl << "2.вертикальная" << endl;
	cin >> z;
	switch (z)
	{
	case 1:
		while (a < y)
		{
			cout << k;
			a++;
		}
	case 2:
		while (a < y)
		{
			cout << k << endl;
			a++;
		}
	default:
		cout << "введи корректное число";
		break;
	}
}