#include <iostream>

//A+B
int main()
{
	int a = 0, b = 0;

	//콘솔 입력 : 공백(space), 탭(tab), 엔터(enter)는 모두 같은 구분자로 취급
	std::cin >> a >> b;
	//std::cin >> a;
	//std::cin >> b; //두 줄로 나눠 작성했다고 해서 개행으로 구분하지 않아도 됨

	std::cout << a / b;

	return 0;
}