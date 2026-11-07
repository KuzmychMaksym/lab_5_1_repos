//lab_5_1
// Кузьмич Максим
// Лабораторна робота № 5_1
// Функції, що містять арифметичний вираз
// варіант 27

#include <iostream>
#include <cmath>

using namespace std;

double g(const double a, const double b, const double c);

int main()
{
	double x, y;

	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;

	double result = (g(x * y, pow(x, 2), pow(y, 2)) - pow(g(1, x, y), 2)) / (1 + g(sqrt(x), pow(y, 2), 1));
	cout << "Result = " << result << endl;
	
	return 0;
}

double g(const double a, const double b, const double c) {
	return pow(a, 2) + pow(b, 2) - pow(c, 2);
}
