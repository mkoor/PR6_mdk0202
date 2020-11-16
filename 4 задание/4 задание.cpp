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
	int number;
	for (int i = 0; i < k; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			number = i;
		}
	}
	cout << "Наименьший элемент массива = " << min << "\n";
	cout << "Порядковый номер = " << number << endl;
	return 0;
}