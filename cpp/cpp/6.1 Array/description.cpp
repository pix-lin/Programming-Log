#include <iostream>

int main()
{
	char name[] = "Hello World"; //뒤에 '\0'(null character) 숨어있다
	const int n_name = sizeof(name) / sizeof(char);
	const int n_name = sizeof(name) / sizeof(name[0]);

	return 0;
}
