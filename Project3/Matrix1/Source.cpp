#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
#include <cmath>



//транспонирование

//умножение, делениеи прсосоклром
// умножение 2матриц

//умножение2 матричматричное
//умножение матрицы на вектор
//скалярное умножениематрицы на веектор
// векторное умножение двухвекторов
//Подсчёт определителя матрицы 
int main()
{
	setlocale(LC_ALL, "Russian");
	double matrix[3][3] = { 0 };
	std::cout << "Введите тип матрицы постолбцами строкам" << std::endl;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			std::cout << "строка" << row << ",строка" << col;
			std::cin >> matrix[row][col];
		}
	}
	std::cout << "Матрица" << std::endl;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			
			std::cout << matrix[row][col] << " ";
		}
		std::cout << std::endl;
	}
	

	
	









		std::system("pause");
	return 0;
}