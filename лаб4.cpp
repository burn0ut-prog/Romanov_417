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
	std::cout << "round(15.6) = " << round(x1) << std::endl; //�������� 16
	std::cout << "round(15.4) = " << round(x2) << std::endl; //�������� 15
	std::cout << "ceil(15.6) = " << ceil(x1) << std::endl; //�������� 16
	std::cout << "ceil(15.4) = " << ceil(x2) << std::endl; //�������� 16
	std::cout << "floor(15.6) = " << floor(x1) << std::endl; //�������� 15
	std::cout << "floor(15.4) = " << floor(x2) << std::endl; //�������� 15


	int int_val = 15;
	std::cout <<"Float = " << static_cast<float>(int_val) / 2 << std::endl; // �������� 7.5


	int int_a = 15;
	int int_b = 7;
	double double_a = 15.0;
	double double_b = 7.0;

	std::cout << "int 15/int 7 = " << int_a / int_b << std::endl; //������������� ����� ����� ��� �������� ��������
	std::cout << "double 15/int 7 = " << double_a / int_b << std::endl; // ���� ���� ���� �������� ����� ��� ����, �� ����� ����� � �������� ����������
	std::cout << "int 15/double 7 = " << int_a / double_b << std::endl; // ���� ���� ���� �������� ����� ��� ����, �� ����� ����� � �������� ����������
	std::cout << "double 15/double 7 = " << double_a / double_b << std::endl; //����� ������������� ������� ��������
	std::cout <<" 15.0 / 7.0 = " << 15.0 / 7.0 << std::endl; // ��������� - 2.14.... ��� ��� ������� ������� �����




	std::cout << "������ 1" << std::endl;
	FILE* ptrFile = 0;
	fopen_s(&ptrFile, "file.txt", "rb");
	if (ptrFile == NULL) perror("������ �������� �����");
	else
	{
		while (!feof(ptrFile)) // ��������� ����, ���� �� ����� �����
		{
			char buffer[100] = { 0 };
			fgets(buffer, 100, ptrFile);
			std::cout << buffer;
		}
		fclose(ptrFile); // ������� ����
	}

	/*std::cout << "������ 2" << std::endl;
	FILE* ptrFile = fopen("example.txt", "w"); // ������� ��� ������
	fputs("This is sample.", ptrFile); // �������� � ���� ������
	fseek(ptrFile, 9, SEEK_SET); // �������� ������� �� 9 ���� ������������ ������ �����
	fputs("parta", ptrFile); // �������� ����� � ����
	fclose(ptrFile);



	//std::cout << "������ 2" << std::endl;
	FILE* ptrFile = fopen("file.txt", "w"); // ������� ���� file.txt � ������� �������� � ������ ������ ��� ������
	if (ptrFile != NULL) // ���������, ������� �� ������� ����
	{
		fputs("������ ������������� ������� fopen ", ptrFile); // �������� ������ � ����
		fclose(ptrFile);
	}*/


	std::system("pause");
	return 0;

}