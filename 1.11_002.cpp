#include<iostream>
#include<windows.h>
#include<cstring>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char str1[] = { "малина" };
	char str2[10];

	do
	{
		std::cout << "Угадайте слово: ";
		std::cin >> str2;

		if (strcmp(str1, str2) != 0)
		{
			std::cout << "Неправильно" << std::endl;
		}

	} while (strcmp(str1, str2) != 0);
	
	std::cout << "Правильно!Вы победили!Загаданное слово — " << str1;
	


	std::cout << "\n\n\n";
}