#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
#include <cmath>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	double x1 = 15.6;
	double x2 = 15.4;
	std::cout << "round(15.6) = " << round(x1) << std::endl; //печатате 16
	std::cout << "round(15.4) = " << round(x2) << std::endl; //печатает 15
	std::cout << "ceil(15.6) = " << ceil(x1) << std::endl; //печатает 16
	std::cout << "ceil(15.4) = " << ceil(x2) << std::endl; //печатает 16
	std::cout << "floor(15.6) = " << floor(x1) << std::endl; //печатает 15
	std::cout << "floor(15.4) = " << floor(x2) << std::endl; //печатает 15


	int int_val = 15;
	std::cout <<"Float = " << static_cast<float>(int_val) / 2 << std::endl; // печатает 7.5


	int int_a = 15;
	int int_b = 7;
	double double_a = 15.0;
	double double_b = 7.0;

	std::cout << "int 15/int 7 = " << int_a / int_b << std::endl; //распечатается целое число без дробного значения
	std::cout << "double 15/int 7 = " << double_a / int_b << std::endl; // если хоть одно значение имеет тип дабл, то ответ будет с дробными значениями
	std::cout << "int 15/double 7 = " << int_a / double_b << std::endl; // если хоть одно значение имеет тип дабл, то ответ будет с дробными значениями
	std::cout << "double 15/double 7 = " << double_a / double_b << std::endl; //также распечататеся дробное значение
	std::cout <<" 15.0 / 7.0 = " << 15.0 / 7.0 << std::endl; // результат - 2.14.... так как указали дробную часть




	std::cout << "ПРИМЕР 1" << std::endl;
	FILE* ptrFile = 0;
	fopen_s(&ptrFile, "file.txt", "rb");
	if (ptrFile == NULL) perror("Ошибка открытия файла");
	else
	{
		while (!feof(ptrFile)) // повторять цикл, пока не конец файла
		{
			char buffer[100] = { 0 };
			fgets(buffer, 100, ptrFile);
			std::cout << buffer;
		}
		fclose(ptrFile); // закрыть файл
	}

	/*std::cout << "ПРИМЕР 2" << std::endl;
	FILE* ptrFile = fopen("example.txt", "w"); // открыть для записи
	fputs("This is sample.", ptrFile); // записать в файл строку
	fseek(ptrFile, 9, SEEK_SET); // изменить позицию на 9 байт относительно начала файла
	fputs("parta", ptrFile); // дописать слово в файл
	fclose(ptrFile);



	//std::cout << "ПРИМЕР 2" << std::endl;
	FILE* ptrFile = fopen("file.txt", "w"); // открыть файл file.txt в текущем каталоге в режиме только для чтения
	if (ptrFile != NULL) // проверить, удалось ли открыть файл
	{
		fputs("Пример использования функции fopen ", ptrFile); // записать строку в файл
		fclose(ptrFile);
	}*/


	std::system("pause");
	return 0;

}