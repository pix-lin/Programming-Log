#include <iostream>

//±¸±¸´Ü
int main()
{
	int num = 0;
	
	std::cin >> num;

	for (int i = 0; i < 9; i++)
	{
		std::cout << num << " * " << i + 1 << " = " << num * (i + 1);
		std::cout << std::endl;
	}

	return 0;

}