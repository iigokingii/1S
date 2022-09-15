#include<iostream>
using namespace std;
void main() {
	const int n = 6;
	int k = 0, q;
	int arr1[n];
	int arr2[n];
	cout << "q=";
	cin >> q;
	for (int i = 0;i < n;i++)
	{
		*(arr1 + i) = rand() % 10;
		cout << " " << arr1[i];
	}
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		*(arr2 + j) = rand() % 3;
		cout << " " << arr2[j];
	}
	cout << endl;
	int sum = arr1[0] + arr2[0];
	for (int i = 0; i < n; i++)
	{
		if ((*(arr1 + i) + *(arr2 + i)) > sum && arr1[i] + arr2[i] <= q)
			sum = (*(arr1 + i) + *(arr2 + i));
	}
	cout <<;
}