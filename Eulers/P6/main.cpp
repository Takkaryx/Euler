#include <iostream>

int sum_of_square(int min, int max)
{
	min = min - 1;
	return (max * (max + 1) * (2 * max + 1) - min * (min + 1) * (2 * min + 1)) /6;
}

int sum_of_n(int min, int max)
{
	return (max + min) * (max - min + 1) /2;
}

int main(void)
{
	int max = 100, min = 1, sum, sum_square;
	sum = sum_of_n(min, max);
	sum_square = sum_of_square(min, max);
	std::cout << sum << std::endl << sum_square << std::endl;
	std::cout << sum * sum - sum_square << std::endl;
}
