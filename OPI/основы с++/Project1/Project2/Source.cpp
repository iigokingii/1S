#include<iostream>
using namespace std;
//�������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� �������������.
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	int a,b,c=0;
	cout << "����� �������� �����" << endl;
	cout<<"1.������ ��������" << endl;
	cin >> a;
	cout<<"2.������� ��������" << endl;
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