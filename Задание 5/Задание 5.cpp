#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int k = 30;
	int mass[k], max, min;

	cout << "Элементы: ";
	for (int r = 0; r < k; r++)
	{
		mass[r] = rand() % 30 + (-10);
		cout << mass[r] << " ";
	}
	cout << endl;
	int num1, num2;
	max = mass[0];
	min = mass[0];
	for (int r = 1; r < k; r++)
	{
		if (max < mass[r])
		{
			max = mass[r];
			num2 = r;
		}
		if (min > mass[r])
		{
			min = mass[r];
			num1 = r;
		}
	}
	cout << "Наименьший элемент: " << min << endl;
	cout << "Наибольший элемент: " << max << endl;

	for (int i = 0; i < k; i++)
	{
		mass[num1] = mass[num2];
		mass[num2] = mass[num1];
		cout << mass[i] << " ";
		
	}

	return 0;
}