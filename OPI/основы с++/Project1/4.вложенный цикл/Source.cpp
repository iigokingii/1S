#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	int a,b ;
	cout << "����� �����";
	cin >> a;
	cout << "����� ������";
	cin >> b;
	for (int i = 0; i < a; i++)
	{
		cout << "1" << endl;
		for (int j = 0;j < b;j++)
		{
			cout << "2";
		}
	}
}