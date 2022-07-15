#include<iostream>
#include<Windows.h>
#include<stdio.h>

using namespace std;

int StringLength(const char str[]); //Возвращает длину строки в символах
char* to_upper(char str[]); //Переводит строку в верхний регистр
char* to_lower(char str[]); //Переводит строку в верхний регистр
char* shrink(char str[]);//Удаляет лишние пробелы из предложения
int is_palindrome(const char str[]); //Проверяет, является ли строка палиндромом
int is_int_number(const char str[]); //Проверяет, является ли строка целым десятичным числом
int to_int_number(const char str[]); //Если строка является целым десятичным числом, возвращает ее числовое значение
int is_bin_number(const char str[]); //Проверяет, является ли строка двоичным числом
int is_bin_to_dec(char str[]); //Если строка является двоичным числом, возвращает ее десятичное значение
int is_hex_number(const char str[]);// Проверяет, является ли строка шестнадцатиричным числом
int bin_to_dec(char str[]); //Если строка является шестнадцатиричным числом, возвращает ее десятичное значение

void main()
{
	cout << (int)'A' << endl;
	cout << (int)'a' << endl;
	cout << 'A' - 'a' << endl;
	//setlocale(LC_ALL, "");
	system("chcp 1251"); //- через команду в консоль
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";

	const int SIZE = 256;
	//char str[SIZE] = "Hello World";
	char str[SIZE] = "Хорошо       живет        на        свете      Винни         Пух";

	cout << str << endl;
	/*str[5] = 0;
	cout << str << endl;*/

	//cout << "Введите строку: ";

	//SetConsoleCP(1251);
	//cin >> str;

	//cin.getline(str, SIZE);
	
	//SetConsoleCP(866);
	//cout << "Вы ввели строку размером: " << StringLength(str) << " символов" << endl;
	cout << "Вы ввели строку размером: " << strlen(str) << " символов" << endl;
	//to_upper(str);
	//cout <<to_upper (str) << endl;
	//cout << to_lower(str) << endl; 
	cout << shrink(str) << endl;

	cout << sizeof(str) << endl;
	//StringLength(str);
	
}
int StringLength(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
char* to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if(str[i]>='a'&& str[i]<='z')str[i] -= 32;
		if(str[i]>='а'&& str[i]<='я')str[i] -= 32;
		//str[i]=toupper(str[i]);
	}
	return str;
}
char* to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if(str[i]>='A'&& str[i]<='Z')str[i] += 32;
		if(str[i]>='А'&& str[i]<='Я')str[i] += 32;
		//str[i] = tolower(str[i]);
	}
	return str;
}
char* shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ' && str[i+1] == ' ')
		{
			for (int j = i + 1; str[j]; j++) str[j] = str[j + 1];
		}
	}
	return str;
}
