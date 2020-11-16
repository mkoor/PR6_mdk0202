#include <iostream>
#include <locale.h>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int k = 10;
	int a[k];
	
	for (int i = 0; i < k; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	cout << "\n";

	int i;
	int para = 0;

	for (i = 0; i < k - 1; i++)
	{
		if (a[i] == a[i + 1])
		{
			para++;
		}
	}
	cout << "число пар = " << para << endl;
	return 0;

}