#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
	srand(time(NULL));
	const int k = 10;
	int a[k] = {};
	
	for (int i = 0; i < k; i++)
	{
		a[i] = rand() % 20 + (-10);
		cout << a[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < k; i++)
	{
		if (a[i] < 0) { a[i] = 0; }
	}

	for (int i = 0; i < k; i++)
	{
		cout << a[i] << " ";
	}
}