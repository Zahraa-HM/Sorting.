
#include <iostream>
using namespace std;

int main()
{
	int i, j, temp;
	int array[10];
	cout << "Enter 10 numbers to order:\n";
	for (i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
	for (i = 0; i < 10 - 1; ++i)
	{
		for (j = 0; j < 10 - i - 1; ++j)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}

	}
	cout << "Item in descending order:\n";
	for (i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}
