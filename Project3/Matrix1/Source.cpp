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
	std::cout << "������� ��� ������� ����������� �������" << std::endl;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			std::cout << "������" << row << ",������" << col;
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
	

	
	









		std::system("pause");
	return 0;
}