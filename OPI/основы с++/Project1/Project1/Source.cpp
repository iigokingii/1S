#include<iostream>
using namespace std;
/*����������� ���������, ������� ����� �������� ��������, ������ ������� ���������� ��� � ������� ����� ��������� (������������ � ��������������)
*/
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	int a=0, y, z;
	char k;
	cout << "����� ������ " << endl;
	cin >> k;
	cout << "����� ����� ��������" << endl;
	cin >> y;
	cout << "�������� ��� �����" << endl << "1.��������������" << endl << "2.������������" << endl;
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
		cout << "����� ���������� �����";
		break;
	}
}