#include <iostream>

using namespace std;


int main()
{
	int a[100], n;
	cout << "Enter the number of elements: ";
	cin >> n;

	cout << "Enter the elements: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	// Bubble Sorting
	for (int k = 0; k < n - 1; k++)
	{
		for (int j = 0; j < n - k - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	int evenNumbers[50];
	int oddNumbers[50];
	int x = 0, y = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			evenNumbers[x] = a[i];
			x += 1;
		}
		else
		{
			oddNumbers[y] = a[i];
			y += 1;
		}
	}

	cout << "\nSorted array using bubble sorting:\n";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\n";

	cout << "\nEven numbers:\n";
	for (int i = 0; i < x; i++)
		cout << evenNumbers[i] << "\n";

	cout << "\nOdd numbers:\n";
	for (int j = 0; j < y; j++)
		cout << oddNumbers[j] << "\n";
	return 0;
}