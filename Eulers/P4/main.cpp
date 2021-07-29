#include <iostream>

bool isPalindrome(int n);

int main(void)
{
	long max = 0;
	int x, y = 0;
	for (x=100; x<999; x++)
	{
		for(y=100;y<999;y++)
		{
			long pl = x*y;
			bool isp=isPalindrome(pl);
			if (isp && pl>max)
				max = pl;
		}
	}
	std::cout << "Larget palindrome: " << max << std::endl;
}

bool isPalindrome(int n)
{
	int digit = 0;
	int rev = 0;
	int num = n;
	do{
		digit = num%10;
		rev = (rev*10) + digit;
		num = num/10;
	}while(num != 0);
	return n == rev;
}
