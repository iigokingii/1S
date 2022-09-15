#include<iostream>
using namespace std;
void main() {
	const int n = 6;
	int k = 0;
	int arr1[n];
	int arr2[n];
	for (int i = 0;i < n;i++)
	{
		*(arr1+i) = rand() % 3;
		cout <<" "<<arr1[i];
	}
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		*(arr2+j) = rand() % 3;
		cout <<" "<< arr2[j];
	}
	cout << endl;
	for (int i = 0;i < n;i++)
	{
			if (*(arr1 + i) == *(arr2 + i))
			{
				k++;
			}
		
	}
	cout << "k=" << k;
}
