#include <iostream>

using namespace std;

int main()
{
	double number;
	int count = 0;
	double suma = 0;

	cout << "Enter a numbers to calculate the arithmetic mean of positive numbers (0 to end)\n";
	while (true)
	{
		cin >> number;

		if (number == 0) break;

		try
		{
			if (number < 0)
			{
				string error = "Numbers must be positive\n";
				throw(error);
			}
			suma += number;
			count++;
		}

		catch (const string& error)
		{
			cout << error;
		}
	}

	cout << "Arithmetic mean: " << suma / count << endl;
}