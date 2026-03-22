#include <iostream>
#include <iomanip>

int main()
{
	float a, b;
	
	std::cin >> a >> b;
	
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	
	if (b == 0)
	{
		std::cout << "ERROR" << std::endl;
	}
	else
	{
		std::cout << std::fixed << std::setprecision(2) << a / b << std::endl;
	}
	
	return 0;
}
