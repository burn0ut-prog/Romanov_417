#include <iostream> // - ������������ ���� ��� cout, << � ����� ���� ���
#include <locale.h> // - ������������ ���� ��� ������� setlocale()
#include <iomanip> // - ������������ ���� ��� ������� ���������� ������� bin(), hex() � ��.
#include <bitset>
// ���� 1. ��������� C/C++, �������� ����������� ��������� C/C++

// main - ��-������ - �������, ��-������ - ����� �����
// �� ���� ��������� ������ ���� ������ ���� ������� main()
int main() 
{ 
	// ����� ���� � ��������, ����������, � ������ ����� �������� ������� ���� �� C/C++ ���������� ��������� ��������

	/* ������������� ����������
	* 1. �������������� (+, -, *, /, % - ������� �� ������ �������)
	*    �) ���������� ��� ������ (|| - �������� "���", && - �������� "�", ! - �������� ���������)
	                              ++ - ��������� �� �������, ��� "���������"
								  -- - ��������� �� �������, ��� "���������"
	*    �) �������� (& - �������� "�", | - �������� "���", �������� ������ ����� <<, �������� ������ ������ >>, 
	                  ������ ~ ������ ��������� ! ��� ��������� �������������)
	*    �) ��������� ��������� (> - ������, < - ������, == - �����)
	                            (>= - ������ ��� �����, <= - ������ ��� �����)
	*
	*/
	setlocale(LC_ALL, "Russian");
	int a = 10;
	int b = 3;
	int result = 10 % 3;
	std::cout
		<< "������������ ������ 1. ��������� C / C++, "
		   "�������� ����������� ��������� C / C++"
		<< std::endl;
	std::cout << "a = 10, b = 3" << std::endl; // endl - ������ ������� �� ���������
	std::cout << "10 % 3 = " << 10 % 3 << "\n"; // \n - �� �� �����, ��� � std::endl

	std::cout << "\n" << "������� �������� �������� &&" << std::endl;
	std::cout << "\t\tb = true\tb=false" << std::endl;
	std::cout << "a = true" << "\t" << (true && true) << "\t\t" << (true && false) << std::endl;
	std::cout << "a = false" << "\t" << (false && true) << "\t\t" << (false && false) << "\n" << std::endl;

	std::cout << "������� �������� �������� ||" << std::endl;
	std::cout << "\t\tb = true\tb=false" << std::endl;
	std::cout << "a = true" << "\t" << (true || true) << "\t\t" << (true || false) << std::endl;
	std::cout << "a = false" << "\t" << (false || true) << "\t\t" << (false || false) << "\n" << std::endl;


	
	//��� ��� ������������ ��������� ���������
	bool c = false;
	// !c
	bool d = true;
	// !d
	std::cout << "������������ ������ ��������� ��������� !" << std::endl;
	std::cout << "c = " << c <<  "\t"  << "!c = " << !c << std::endl;
	std::cout << "d = " << d << "\t" << "!d = " << !d << "\n" << "\n" << "\n" << std::endl;




	int binary_int = 0b1010;
	std::cout << "�������� ����� = binary_int " << std::hex << std::bitset<8>(binary_int) << "\n" << "\n" << "\n" << "\n" << "\n" << std::endl;


	// ��

	int binary_int1 = 0b1010;
	int binary_int2 = 0b1100;
	std::cout << "������� �������� �������� �������� &" << std::endl;
	std::cout << "�������� ����� = " <<std::bitset<4>(binary_int1) << std::endl;
	std::cout << "�������� ����� = " << std::bitset<4>(binary_int2) << std::endl;
	std::cout << "                 ----"<< std::endl;
	std::cout << "���������        "  << std::bitset<4>( binary_int1 & binary_int2) << "\n" << std::endl;

	std::cout << "������� �������� �������� �������� |" << std::endl;
	std::cout << "�������� ����� = " << std::bitset<4>(binary_int1) << std::endl;
	std::cout << "�������� ����� = " << std::bitset<4>(binary_int2) << std::endl;
	std::cout << "                 ----" << std::endl;
	std::cout << "���������        " << std::bitset<4>(binary_int1 | binary_int2) << "\n" << std::endl;

	std::cout << "������� �������� �������� �������� ^" << std::endl;
	std::cout << "�������� ����� = " << std::bitset<4>(binary_int1) << std::endl;
	std::cout << "�������� ����� = " << std::bitset<4>(binary_int2) << std::endl;
	std::cout << "                 ----" << std::endl;
	std::cout << "���������        " << std::bitset<4>(binary_int1 ^ binary_int2) << "\n" << std::endl;

	std::cout << std::endl << "������������ ������ ��������� ����������" << std::endl;
	// ��� ��� ������������ ���������� >>, << � ~
	std::cout << "a = " << std::bitset<8> (a) << "; b = " << b 
              << "; a >> b = " << std::bitset<8>(a >> b) << std::endl;
	std::cout << "a = " << std::bitset<8> (a) << "; b = " << b 
	          << "; a << b = " << std::bitset<8>(a << b) << std::endl;
	std::cout << "a = " << std::bitset<8>(a) << "; ~a = " << std::bitset<8>(~a) << std::endl;
		      



	// ����� ��



	std::cout << std::endl << "a = " << a << std::endl;
	std::cout << "�������� ++ ����� �����: a++ = " << a++ << std::endl;
	std::cout << "����� ���������� ���������� a = " << a << std::endl;

	std::cout << std::endl << "a = " << a << std::endl;
	std::cout << "�������� ++ ����� ������: ++a = " << ++a << std::endl;
	std::cout << "����� ���������� ���������� a = " << a << std::endl;

	/* 
	* ���� �������� ++ ����� ����� �����, �� ����� ������� ��������� �� ������, � ����� �������������
	* ���� �������� ++ ����� ����� ������, �� ����� ������� �������������, � ����� ���������
	* ���� � ������� ���� ����������� ������ ��������� (����� ��� ����� �����), �� ������� ���
	*/


	/* 
	* \t, \n - �.�. escape - ������������������, ����������� �������
	* ��� �������� ����� ��������, ������� ������ ������� � ���������� (���������� �������)
    * \t - ���� ������ ��������� (��� ���������� ���������� �������� ���� �������� /t �� ���� ������ ���������
	* \n - ���� ������ �������� ������ (��� ���������� ���������� �������� ���� �������� \n �� ���� ������ �������� ������
	* ��������� �������� ��� ������ escape - ������������������ ��������
	* ���� ����� ����������� ��� �� ���� ���� '/' ��p escape-������������������
	* �� ������� � ������ � ���� ������ '\\'
	* �������� ���� / - ��� ������ ������ � ������� �������� �� �����
	*/





	std::system("pause"); // ����� ������� system() �� ����������� ����������
	return 0;
}  