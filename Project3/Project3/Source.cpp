#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "Russian");
	//Массивы
	
	const int size = 10;

	int arr[size]{ 11, 25, 34, 55 }; 

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	//нельзя назнаитьпременуюмассива заранее
	


	std::system("pause");
	return 0;

}