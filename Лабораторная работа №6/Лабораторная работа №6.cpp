
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    const int a = 10;
    int mass[a];
    int i;

    cout << "Введите 10 цифр, чтобы заполнить массив:\n";
    for (i = 0; i < a; i++)
    {
        cin >> mass[i];
    }

    cout << "Ваш массив: " << endl;
    for (i = 0; i < a; i++)
    {
        cout << mass[i] << ' ';
    }

    return 0;
}
