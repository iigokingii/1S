#include<iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	char symbol1,symbol2,symbolRu1,symbolRu2,number;
	int y;
	cout << "¬арианты дл€ действий\n";
	cout << "1 Ц определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании" << endl;
	cout << "2 Ц определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании" << endl;
	cout << "3 Ц вывод в консоль кода символа, соответствующего введенной цифре" << endl;
	cout << "4 Ц выход из программы." << endl;
	cin >> y;
	switch (y)
	{
		case 1:
		{
			cout << "¬ведите букву латинского алфавита в строчном и прописном виде: \t";
			cin >> symbol1 >> symbol2;
			while (int(symbol1) < int('a') || int(symbol1) > int('z') || int(symbol2) < int('A') || int(symbol2) > ('Z') || abs(symbol1 - symbol2) != 32) {
				cout << "¬ведите букву латинского алфавита в строчном и прописном виде: ";
				cin >> symbol1 >> symbol2;
			}
			cout << "разница значений равна " << int(symbol1) - int(symbol2);
			break;
			
		}
		case 2:
		{
			cout << "¬ведите букву русского алфавита в строчном и прописном виде: ";
			cin >> symbolRu1 >> symbolRu2;
			while (int(symbolRu2) > int('€') || int(symbolRu2) < int('а') || int(symbolRu1) > int('я') || int(symbolRu1) < int('ј')) {
				cout << "¬ведите букву русского алфавита в строчном и прописном виде: ";
				cin >> symbolRu1 >> symbolRu2;
			}
			cout <<"разница значений равна "<<int(symbolRu1) - int(symbolRu2);
			break;
		}
		case 3:
		{
			cout << "введи цифру от 0 до 9:\t";
			cin >> number;
			while (number > '9' || number < '0') {
				cout << "\nвведи цифру от 0 до 9: "; cin >> number;
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
			cout << "некорректно введенный вариант\n";
			break;
		}
	}
}