#include<iostream>
//SmolikValera2003
// представление строки в Windows-1251:53 6d 6f 6c 69 6b 56 61 6c 65 72 61 32 30 30 33 00
// представление строки в UTF-8:
// представление строки в UTF-16:

//СмоликВалерийАлександрович2003
// представление строки в Windows-1251:d1 ec ee eb e8 ea c2 e0 eb e5 f0 e8 e9 c0 eb e5 ea f1 e0 ed e4 f0 ee e2 e8 f7 32 30 30 33 00
// представление строки в UTF-8:
// представление строки в UTF-16:

//Смолик2003Valera
//представление строки в Windows - 1251:d1 ec ee eb e8 ea 32 30 30 33 56 61 6c 65 72 61 00
// представление строки в UTF-8:
// представление строки в UTF-16:

int main() {
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "SmolikValera2003";
	char rfie[] = "СмоликВалерийАлександрович2003";
	char lr[] = "Смолик2003Valera";

	wchar_t Lfie[] = L"SmolikValera2003";
	wchar_t Rfie[] = L"СмоликВалерийАлександрович2003";
	wchar_t LR[] = L"Смолик2003Valera";
	std::cout << hello << lfie << std::endl;
	return 0;


}