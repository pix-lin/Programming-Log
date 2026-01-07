#include <iostream>
#include <cstdlib> //exit()
#include <cassert> //assert()

//두 수 비교하기
int main()
{
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	//edge case
	if (a < -10000 || b > 10000)
	{
		//exit(0); //0 : 성공적인 종료
		exit(-1); //0이 아닌 값 : 오류, 예외상황으로 프로젝트 중단
	}

	assert(a >= -10000 && b <= 10000); //조건 외의 값이 들어오면 assert error 발생

	if (a > b)
		std::cout << ">";
	else if (a < b)
		std::cout << "<";
	else
		std::cout <<  "==";

	return 0;
}