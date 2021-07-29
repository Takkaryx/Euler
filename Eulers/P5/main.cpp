#include <iostream>

int main(void)
{
	int number = 1;
	int multiple = 20;
	
	int i = 1;
	while (i <= multiple)
	{
		if (number %i != 0)
		{
			number++;
			i = 1;
			continue;
		}
		else
			i++;
	}
	std::cout << "number is: " << number << std::endl;
	return 0;
}
