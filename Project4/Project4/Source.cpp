#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "Russian");
	//�������
	int dem_array[5] = { 1, 2, 3, 4, 5 };
	double dem_array[3][3] = { {1, 2, 3}, {4, 5, 6,}, {7, 8, 9} };
	std::cout << "��������� (dem_array):\t" << dem_array << std::endl;
	for(int g = 0; g < 5; g++)
	{
		std::cout << "������� �����:\t" << dem_array + g;
		std::cout << "\t�������� �� ������:\t" << *(dem_array + g) << std::endl;

	}
	std::cout << "��������� (dem_array2):\t" << dem_array << std::endl;


	int array[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int a = 0; a <= i; a++)
		{// ������������� ��������� ������������������� ����������
			array[i][a] = a + 1;
			std::cout << array[i][a] << "\t";
		}

		std::cout << std::endl;
	}
	//������ ����������������������� �������



	std::system("pause");
	return 0;

}