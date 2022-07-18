#include <iostream>

using namespace std;

int main()
{
	int cap = 999;
	int number = 0;
	int cleandivision = 0;
	int totalsum = 0;

	while (number < cap)
	{
		number += 1;
		if (number % 15 == 0)
		{
			totalsum += number;
			cout << "number: " << number << endl;
		}
		else if (number % 5 == 0)
		{
			totalsum += number;
			cout << "number: " << number << endl;
		}
		else if (number % 3 == 0)
		{
			totalsum += number;
			cout << "number: " << number << endl;
		}
	}
	cout << "Sum total: " << totalsum << endl;
	return 0;
}
