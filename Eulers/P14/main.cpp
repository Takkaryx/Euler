#include <stdio.h>
#include <iostream>

#define FINISH 	1
#define MAX_VALUE 1000000
bool isEven(unsigned int val)
{
	return (val % 2 == 0);
}

unsigned int even(unsigned int val)
{
	return (val / 2);
}

unsigned int odd(unsigned int val)
{
	return (3*val + 1);
}

int main(void)
{
	int longestChain = 0;
	int attemptNumber = 1;
	int chosenNumber = 0;
	while(attemptNumber < MAX_VALUE)
	{
		unsigned int currValue = attemptNumber;
		long iterations = 1;
		while(currValue != 1)
		{
			if (isEven(currValue))
				currValue = even(currValue);
			else
				currValue = odd(currValue);
			iterations++;
		}
		if (iterations > longestChain)
		{
			longestChain = iterations;
			chosenNumber = attemptNumber;
		}
		attemptNumber++;
	}

	std::cout << "longest chain took " << longestChain << " iterations to finish." << std::endl;
	std::cout << "Number is: " << chosenNumber << std::endl;
}
