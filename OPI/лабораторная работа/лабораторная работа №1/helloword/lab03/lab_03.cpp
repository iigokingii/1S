#include<iostream>
//SmolikValera2003
// представление строки в Windows-1251:53 6D 6F 6C 69 6B 56 61 6C 65 72 61 32 30 30 33 00
// представление строки в UTF-8:53 6D 6F 6C 69 6B 56 61 6C 65 72 61 32 30 30 33 
// представление строки в UTF-16:0053 006D 006F 006C 0069 006B 0056 0061 006C 0065 0072 0061 0032 0030 0030 0033

//СмоликВалерийАлександрович2003
// представление строки в Windows-1251:D1 EC EE EB E8 EA C2 E0 EB E5 F0 E8 E9 C0 EB E5 EA F1 E0 ED E4 F0 EE E2 E8 F7 32 30 30 33 00
// представление строки в UTF-8:D0A1 D0BC D0BE D0BB D0B8 DOBA ,D092 D0B0 D0BB D0B5 D180 D0B8 D0B9,D090 D0BB D0B5 D0BA D181 D0B0 D0BD D0B4 D180 D0BE D0B2 D0B8 D187,32 30 30 33
// представление строки в UTF-16:0421 043C 043E 043B 0438 043A,0412 0430 043B 0435 0440 0438 0439,0410 043B 0435 043A 0441 0430 043D 0434 0440 043E 0432 0438 0447,32 30 30 33

//Смолик2003Valera
//представление строки в Windows - 1251:D1 EC EE EB E8 EA 32 30 30 33 56 61 6C 65 72 61 
// представление строки в UTF-8:D0A1 D0BC D0BE D0BB D0B8 DOBA 32 30 30 33 56 61 6C 65 72 61
// представление строки в UTF-16:0421 043C 043E 043B 0438 043A 32 30 30 33 56 61 6C 65 72 61

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