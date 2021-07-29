#include <iostream>

long primeToFind = 10001;

bool isPrime(int);

int main(void)
{
	int i = 6;
	//start counting after known primes 2 and 3.  so we've 'found' 2
	int primesFound = 2;
	int lastPrime = 0;
	while(primesFound < primeToFind)
	{
		if(isPrime(i-1))
		{
			primesFound++;
			lastPrime = i-1;
		}
		if(isPrime(i+1))
		{
			primesFound++;
			lastPrime = i+1;
		}
		i += 6;
	}
	std::cout << "The " << primeToFind << "th prime number is: " << lastPrime <<std::endl;
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
