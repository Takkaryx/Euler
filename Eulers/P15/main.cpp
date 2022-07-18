#include <stdio.h>
#include <iostream>

//set of choices, combinatorial logic is most useful here, should provide
//an easy calculation to do this;

#define GRID_SIZE 20

int main(void)
{
	long numPaths = 1;
	for (int i = 0; i < GRID_SIZE; i++)
	{
		numPaths *= (2 * GRID_SIZE) - i;
    	numPaths /= i + 1;
	}
	std::cout << "the number of Paths is: " << numPaths << std::endl;
}
