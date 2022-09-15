#include<iostream>
using namespace std;
void main() {
	const int n = 10;
	int tmp=0;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5-3;
		while (*(arr+i) == 0)
		{
			*(arr+i) = rand() % 5-3;
		}
		cout <<" "<< arr[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (arr[j] > 0)
			{
				tmp = *(arr+j);
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		
	}
	for (int i = 0; i < n; i++)
	{
		cout <<" " << arr[i];
	}
}