#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
#include <cmath>

int** vvod(int n , int m)
{
	std::cout << "**ÇÀÄÀÍÈÅ Ñ ÌÀÒÐÈÖÀÌÈ**" << std::endl;
	std::cout << "**ÍÀÕÎÆÄÅÍÈÅ ÎÏÐÅÄÅËÈÒÅËß**" << std::endl;
	std::cout << "Ââåäèòå òèï ìàòðèöû ïî còîëáöàìè ñòðîêàì" << std::endl;
	int i, j;
	int** a = new int* [n];
	for (i = 0; i < n; i++)
	{
		a[i] = new int[m];


	}
	for (i = 0; i < n; i++)
	{
		for(j = 0;j < m;j++)
		{
			std::cout << "ñòðîêà " << i << ",ñòðîêà " << j;
			std::cin >> a[i][j];

		}
	}
	return a;
}
void matrix(int** a, int n , int m)
{
	std::cout << "ÌÀÒÐÈÖÀ" << std::endl;
	int i, j;
	for (i = 0; i < n; i++)

	{
		for (j = 0; j < m; j++)
		{
			std::cout << a[i][j] << " ";

		}

		std::cout << std::endl;
	}

}
double det(int** a, int n)
{
	
	for (int i = 0; i < 1; i++)
	{
		int d = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1] - (a[2][0] * a[1][1] * a[0][2] + a[0][0] * a[1][2] * a[2][1] + a[0][1] * a[1][0] * a[2][2]);
		return d;
	}

	return 0;
}
int main ()
{
	setlocale(LC_ALL, "Russian");
	int** a, o;
	int n, m;
	a = vvod(n = 3, m = 3);
	
	matrix(a, n, m);
	o = det(a, n);
	std::cout << "Îïðåäåëèòåëü = " << o << std::endl;




	std::system("pause");
	return 0;




}
