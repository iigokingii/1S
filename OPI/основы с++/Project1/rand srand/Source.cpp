#include<iostream>
#include<ctime>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	bool a;
	for (int i = 0; i < SIZE; )
	{
		a = false;
		int n = rand() % 20;
		for (int j = 0; j <i; j++)
		{
			if (arr[j] == n)
			{
				a = true;
				break;
			}
		}
		if (!a)
		{
			arr[i] = n;
			i++;
		}
	}






	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}