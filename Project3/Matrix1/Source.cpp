#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
#include <cmath>



//����������������

//���������, �������� �����������
// ��������� 2������

//���������2 ���������������
//��������� ������� �� ������
//��������� ���������������� �� �������
// ��������� ��������� ������������
//������� ������������ ������� 
int main()
{
	setlocale(LC_ALL, "Russian");
	double matrix[3][3] = { 0 };
	std::cout << "������� ��� ������� �� ��������� �������" << std::endl;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			std::cout << "������ " << row << ", ������� " << col;
			std::cin >> matrix[row][col];
		}
	}
	std::cout << "�������" << std::endl;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{

			std::cout << matrix[row][col] << " ";
		}
		std::cout << std::endl;
	}

	double det = 0;
	for (int i = 0; i < 1; i++)
	{
		int det = matrix[0][0] * matrix[1][1] * matrix[2][2] - matrix[0][0] * matrix[1][2] * matrix[2][1]
			- matrix[0][1] * matrix[1][0] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0]
			+ matrix[0][2] * matrix[1][0] * matrix[2][1] - matrix[0][2] * matrix[1][1] * matrix[2][0];
		std::cout << "������������ �������: " << det << std::endl;
	}
	std::cout << std::endl;

	
	









		std::system("pause");
	return 0;
}