#include <iostream>

long fibonacci(int);

int main(void)
{
	long int tope = 0;
	long int total = 0;
	long int i = 0;

	while (tope < 4000000)
	{
		tope = fibonacci(i);
		if (tope % 2 == 0)
		{
			total += tope;
		}
		i++;
	}
	std::cout << "result value: " << total << std::endl;
	return 0;
}

long fibonacci(int n)
{
	if(n == 0 || n ==1)
		return n;
	else
		return fibonacci(n-2) + fibonacci(n-1);
}
