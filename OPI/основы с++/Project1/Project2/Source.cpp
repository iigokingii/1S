#include<iostream>
using namespace std;
//Ќаписать программу, котора€ находит сумму всех целых нечетных чисел в диапазоне, указанном пользователем.
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	int a,b,c=0;
	cout << "введи диапазон чисел" << endl;
	cout<<"1.нижнее значение" << endl;
	cin >> a;
	cout<<"2.верхнее значение" << endl;
	cin >> b;
	do
	{
		if (a%2!=0)
		{
			c += a;
		}
		a++;	
	} while (a<=b);
	cout << c << endl << endl;

}