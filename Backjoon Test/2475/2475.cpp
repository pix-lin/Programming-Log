#include <iostream>
#include <iterator> //std::size()
#include <cmath> //std::pow()

//검증수
int main()
{
	int arr[5];
	int sum = 0;
	int result = 0;
	//int size = sizeof(arr) / sizeof(arr[0]); //옛날 방식

	for (int i = 0; i < std::size(arr); i++)
		std::cin >> arr[i];
	for (int i = 0; i < std::size(arr); i++)
		sum += std::pow(arr[i], 2);
	result = sum % 10;
	
	std::cout << result << std::endl;

	return 0;
}