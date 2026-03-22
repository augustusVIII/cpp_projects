#include <iostream>

int main()
{
	int length, width;
	
	std::cin >> length >> width;
	
	// chu vi
	std::cout << 2*(width + length) << std::endl;
	// dien tich
	std::cout << width * length << std::endl;
}