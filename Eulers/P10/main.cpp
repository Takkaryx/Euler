#include <iostream>

long primeSize = 2000000;

bool isPrime(int);

int main(void)
{
	int i = 6;
	//we've 'found' 2 and 3, so start sum at 5.
	long total_sum = 5;
	while(i < primeSize)
	{
		if(isPrime(i-1))
			total_sum += i-1;
		if(isPrime(i+1))
			total_sum += i+1;
		i += 6;
	}
	std::cout << "the total sum of primes below " << primeSize << "is: " << total_sum << std::endl;
	return 0;
}

bool isPrime(int val)
{
	for (int i = 3; i*i <= val; i+=2)
	{
		if ((val % i) == 0)
			return false;
	}
	return true;
}
