#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

#include "data.h"

int main(void)
{
	const unsigned int subSum = 50 + 10;
	std::vector<unsigned int> sum(subSum, 0);

	//iterate through all the string numbers
	for(int i = 0; i < N; i++)
	{
		std::string currString;
		currString = data[i];

		//convert the string data to int data, how does this work?
		std::vector<unsigned int> add;
		for (auto j = currString.rbegin(); j != currString.rend(); j++)
			add.push_back(*j - '0');
		add.resize(sum.size(), 0);

		//do the actual summing
		for (unsigned int j = 0; j < add.size(); j++)
		{
			sum[j] += add[j];
			if (sum[j] >= 10)
			{
				sum[j+1]++;
				sum[j] -= 10;
			}
		}
	}

	auto i = sum.rbegin();
	while (*i == 0)
		i++;

	unsigned int numPrints = 10;
	while(numPrints-- > 0)
		std::cout << *i++;

	return 0;
}
