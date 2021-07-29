#include <iostream>
#include <cmath>

int limit = 1000;

int main(void)
{
	int A, B = 0;
	int C = 0;
	bool found = false;
	for(A = 1; A < limit/3 ; A++)
	{
		for(B = A; B < limit/2; B++)
		{
			C = limit - A - B;
			if (A * A +  B * B == C * C)
			{
				found = true;
				break;
			}
		}
		if(found)
			break;
	}
	std::cout << "A: " << A << std::endl;
	std::cout << "B: " << B << std::endl;
	std::cout << "C: " << C << std::endl;
	std::cout << "Product: " << A*B*C << std::endl;
}
