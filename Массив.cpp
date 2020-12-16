#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "Russian");
	int array[5] = { 1, 2, 3, 4, 5 };
	double array2[3][3] = { {1, 2, 3}, {7, 8, 9}, {4, 5, 6} };
	std::cout << "указатели (array):\t" << array << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Текущий адрес:\t" << array + i;
		std::cout << "\tЗгачение по адресу:\t" << *(array + i) << std::endl;
	}

	std::cout << "Указатель (array2d):\t" << array2 << std::endl;
	for (int i = 0; i < 9; i++)
	{

		std::cout << "Текущий адрес:\t" << array2 + i;
		std::cout << "\tЗгачение по адресу:\t" << *(*(array2 + i) + i) << std::endl;
	}
	
	int array10[10][10];
	for (int n = 0; n < 10; n++)//столбцы
	{
		for (int m = 10; m > n; m--)
		{
			array10[n][m] = m == 0;
		std::cout << array10[n][m] << "\t";
		}
		std::cout << std::endl;
	}

	








	std::system("pause");

	return 0;

}