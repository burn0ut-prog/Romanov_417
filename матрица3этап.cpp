#include <iostream>
#include <locale.h>
#include <iomanip>
#include <bitset>
#include <cmath>

class Matrix {
private:
	int i;
	int j;
	int k;
	int** a;


	int o;

public:
	Matrix() {}

	int** vvod(int n, int m, int& i, int& j, int**& a)
	{
		this->a = a;

		this->i = i;
		this->j = j;
		std::cout << "**ÇÀÄÀÍÈÅ Ñ ÌÀÒÐÈÖÀÌÈ**" << std::endl;
		std::cout << "**ÍÀÕÎÆÄÅÍÈÅ ÎÏÐÅÄÅËÈÒÅËß**" << std::endl;
		std::cout << "Ââåäèòå òèï ìàòðèöû ïîñòîëáöàìè ñòðîêàì" << std::endl;
		a = new int* [n];
		for (i = 0; i < n; i++)
		{
			a[i] = new int[m];


		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				std::cout << "ñòðîêà " << i << ",ñòðîêà " << j;
				std::cin >> a[i][j];

			}
		}
		return a;
	}
	void matrix(int**& a, int m, int& i, int& j, int n)
	{
		std::cout << "ÌÀÒÐÈÖÀ" << std::endl;
		this->a = a;

		this->i = i;
		this->j = j;



		for (i = 0; i < n; i++)

		{
			for (j = 0; j < m; j++)
			{
				std::cout << a[i][j] << " ";

			}

			std::cout << std::endl;
		}

	}


	int det(int** a)
	{
		this->a = a;


		for (int k = 0; k < 1; k++)
		{
			int d = a[0][0] * a[1][1] * a[2][2] - a[0][0] * a[1][2] * a[2][1]
				- a[0][1] * a[1][0] * a[2][2] + a[0][1] * a[1][2] * a[2][0]
				+ a[0][2] * a[1][0] * a[2][1] - a[0][2] * a[1][1] * a[2][0];
			return d;


		}








	}



};

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	int j;
	int k;
	int n = 3;
	int m = 3;
	int** a;
	int o;
	int** matrix;
	
	Matrix x;
	x.vvod( n, m, i, j, a);
	x.matrix(a, m, i, j, n );
	x.det (a);
	std::cout << "Îïðåäåëèòåëü = " << x.det(a) << std::endl;
	system("pause");
	return 0;
}
	


