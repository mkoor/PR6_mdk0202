using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = 10;
    int mass[size];
    int i;

    cout << "Введите 10 цифр:\n";
    for (i = 0; i < size; i++)
    {
        cin >> mass[i];
    }

    cout << "Ваш массив: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << mass[i] << ' ';
    }
    
    return 0;
}
