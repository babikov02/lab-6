#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	const int a = 10;
	int b[a] = {};

	for (int i = 0; i < a; i++)
	{
		b[i] = rand() % 20 + (-10);
		cout << b[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < a; i++)
	{
		if (b[i] < 0) 
		{ 
			b[i] = 0;
		}
	}

	for (int i = 0; i < a; i++)
	{
		cout << b[i] << " ";
	}
}