#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int k = 30;
	int a[k];

	for (int i = 0; i < k; i++)
	{
		a[i] = rand() % 30 + (-10);
		cout << a[i] << " ";
	}
	cout << "\n";

	int min = a[0];
	int num1;
	for (int i = 0; i < k; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			num1 = i;
		}
	}

	int max = a[0];
	int num2;
	for (int i = 0; i < k; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			num2 = i;
		}
	}

	cout << "Наименьший элемент массива = " << min << "\n";
	cout << "Наибольший элемент массива = " << max << endl;

	for (int i = 0; i < k; i++)
	{
		int l = a[num1];
		a[num1] = a[num2];
		a[num2] = l;
		cout << a[i] << " ";
	}

	return 0;
}