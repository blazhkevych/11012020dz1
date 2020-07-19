/*
 Пользователь 	вводит с клавиатуры две стороны 	прямоугольника.Посчитать площадь и 	периметр прямоугольника.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	int a, b, P, S;
	cin >> a >> b;
	P = 2 * a + 2 * b;
	S = a * b;
	cout << P << "\n" << S << endl;
}
