using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    int * a;
    cout << "Введите размер массива: ";
    cin >> n;
    a = new int [n];
    for (int i = 0; i <= n; i++)
    {
        a[i] = rand() % 101;
        cout << a[i] << " ";
    }

    cout << "\nСумма чисел массива: " << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];  
    }
    cout << sum;

    return 0;
}
