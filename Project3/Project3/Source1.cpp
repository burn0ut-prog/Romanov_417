#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "Russian");
	//�������



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