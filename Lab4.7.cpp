// Lab4.7.cpp
// Михайлов Олександр
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних
// Варіант 24

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double xfirst, xlast, x, dx, eps, a , R , S;
	int n = 0;

	cout << "xfirst must be bigger than 1" << endl;
	cout << "xfirst = "; cin >> xfirst;
	cout << "xlast = "; cin >> xlast;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;

	cout << "----------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |" << setw(10) << "   log(x + 1)" << "   |" << setw(7) << "S" << "      |" << setw(5) << "n" << "   |" << endl;
	cout << "----------------------------------------------------" << endl;

	x = xfirst;
	while (x <= xlast) 
	{
		n = 0;
		a = x;
		S = a;
		do {
			n++;
			R = -2 / 3 * x;
			a *= R;
			S += a;
		} while (x > -1 && x <= 1);
		cout << "|" << setw(7) << setprecision(2) << x << "   |   " << setw(10) << setprecision(5) << log(x + 1) << "   |" << setw(10) << setprecision(5) << S << "   |" << setw(5) << n << "   |" << endl;
		x += dx;
	}
	cout << "----------------------------------------------------" << endl;

	cin.get();
	return 0;
}
