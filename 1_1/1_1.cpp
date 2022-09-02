#include <iostream>

using namespace std;

int func(int Starting_point, int size, int arr[])
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int middle = (left + right) / 2;
		if (arr[middle] > Starting_point) right = middle - 1;
		else if (arr[middle] <= Starting_point) left = middle + 1;
	}
	return size - left;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int Starting_point = -999;
	int arr[]{ 14, 16, 19, 32, 32, 32, 56, 69, 72 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Введите точку отсчёта: ";
	cin >> Starting_point;

	cout << "Количество элементов в массиве больших, чем " << Starting_point << ": " << func(Starting_point, size, arr);
}
