#include<iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	char symbol1,symbol2,symbolRu1,symbolRu2,number;
	int y;
	cout << "�������� ��� ��������\n";
	cout << "1 � ����������� ������� �������� ����� � Windows-1251 ����� ���������� �������� � ��������� � �������� ���������" << endl;
	cout << "2 � ����������� ������� �������� ����� � Windows-1251 ����� �������� �������� � ��������� � �������� ���������" << endl;
	cout << "3 � ����� � ������� ���� �������, ���������������� ��������� �����" << endl;
	cout << "4 � ����� �� ���������." << endl;
	cin >> y;
	switch (y)
	{
		case 1:
		{
			cout << "������� ����� ���������� �������� � �������� � ��������� ����: \t";
			cin >> symbol1 >> symbol2;
			while (int(symbol1) < int('a') || int(symbol1) > int('z') || int(symbol2) < int('A') || int(symbol2) > ('Z') || abs(symbol1 - symbol2) != 32) {
				cout << "������� ����� ���������� �������� � �������� � ��������� ����: ";
				cin >> symbol1 >> symbol2;
			}
			cout << "������� �������� ����� " << int(symbol1) - int(symbol2);
			break;
			
		}
		case 2:
		{
			cout << "������� ����� �������� �������� � �������� � ��������� ����: ";
			cin >> symbolRu1 >> symbolRu2;
			while (int(symbolRu2) > int('�') || int(symbolRu2) < int('�') || int(symbolRu1) > int('�') || int(symbolRu1) < int('�')) {
				cout << "������� ����� �������� �������� � �������� � ��������� ����: ";
				cin >> symbolRu1 >> symbolRu2;
			}
			cout <<"������� �������� ����� "<<int(symbolRu1) - int(symbolRu2);
			break;
		}
		case 3:
		{
			cout << "����� ����� �� 0 �� 9:\t";
			cin >> number;
			while (number > '9' || number < '0') {
				cout << "\n����� ����� �� 0 �� 9: "; cin >> number;
			}
			cout << int(number);
			break;
		}
		case 4:
		{
			break;
		}
		default:
		{
			cout << "����������� ��������� �������\n";
			break;
		}
	}
}