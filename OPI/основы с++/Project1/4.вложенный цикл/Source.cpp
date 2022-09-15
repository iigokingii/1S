#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	int a,b ;
	cout << "введи длину";
	cin >> a;
	cout << "введи ширину";
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