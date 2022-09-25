#include <iostream>

using namespace std;

int f(int n)
{
	while (n > 1)
	{
		return f(n - 1) + f(n - 2);
	}

	if (n == 1)
	{
		return 1;
	}

	if (n == 0)
	{
		return 0;
	}
}

int main()
{
	system("chcp 1251");

	int n = 0;

	cout << "Введите число: ";
	cin >> n;

	int* arr = new int[n + 1];

	cout << "Числа Фибоначчи: " << n << " = ";
	
	for (int i = 0; i < n + 1; i++)
	{
		arr[i] = f(i);

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