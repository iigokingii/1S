#include<iostream>
#include<string>
using namespace std;
void main() {
	char arr[20];
	int y;
	cout << "����� ������: ";
	cin >> arr;
	y = strlen(arr);
	cout << endl;
	while (y != 0)
	{
		int k = 0;
		cout << *(arr+k);
		k++;
		y--;
	}
}