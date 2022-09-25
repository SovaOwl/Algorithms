#include <iostream>

using namespace std;

int f(int n, int* arr)
{
	while (n > 1)
	{
		if (arr[n - 1] >= 0 && arr[n - 2] >= 0)
		{
			arr[n] = arr[n - 1] + arr[n - 2];
			return arr[n];
		}
		else
		{
			f(n - 1, arr);
		}
	}

	if (n == 1)
	{
		arr[n] = 1;
		f(n - 1, arr);
	}

	if (n == 0)
	{
		arr[n] = 0;
		return arr[n];
	}
}

int main()
{
	system("chcp 1251");

	int n = 0;

	cout << "Введите число: ";
	cin >> n;

	int* arr = new int[n + 1];

	for (int i = 0; i < n + 1; i++)
	{
		arr[i] = -1;
	}

	f(n, arr);

	cout << "Числа Фибоначчи: " << n << " = ";

	for (int i = 0; i < n + 1; i++)
	{
		if (i == 0)
		{
			cout << "{";
		}

		cout << arr[i];

		if (i >= 0 && i < n)
		{
			cout << " ";
		}
		if (i == n)
		{
			cout << "}";
		}
	}

	cout << endl;

	delete[] arr;

	return 0;
}