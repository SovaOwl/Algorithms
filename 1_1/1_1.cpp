#include <iostream>

using namespace std;

int func(int Starting_point, int arr[])
{
	for (int i = 0; i < Starting_point; i++)
		if (arr[i] > Starting_point)
		{
			int foo = 0;
			foo += 9 - i;
			break;

			return foo;
		}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int Starting_point = -999;
	int arr[9]{ 14, 16, 19, 32, 32, 32, 56, 69, 72 };

	cout << "Введите точку отсчёта: ";
	cin >> Starting_point;

	cout << "Количество элементов в массиве больших, чем " << Starting_point << ": " << func(Starting_point, arr);
}