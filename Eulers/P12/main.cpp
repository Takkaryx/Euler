#include <iostream>
#include <math.h>

long Triangle_number(long value)
{
	return long(value * (value + 1) / 2);
}

long numFactors(long value)
{
	long numFactors = 0;
	for (long i = 1; i <= (sqrt(value) + 1); i++)
	{
		if(value % i == 0)
			numFactors++;
	}
	return numFactors * 2;
}

int main(void)
{
	bool found = false;
	int num_factors_to_find = 500;
	long check = 1;
	long triangle = 0;
	while(!found)
	{
		triangle = Triangle_number(check);
		if (numFactors(triangle) >= num_factors_to_find)
			found = true;
		check++;
	}
	std::cout << "Triangle Number: " << triangle << std::endl;
	return 0;
}
