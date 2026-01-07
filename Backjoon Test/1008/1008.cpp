#include <iostream>

//A/B
int main()
{
	int a = 0;
	int b = 0;
	double result = 0.0;

	std::cin >> a >> b;
	
	//정밀도 설정
	//기본 cout 설정(유효숫자 6자리)
	//소수점 아래 넉넉히 출력하기 위해 설정
	//precision()은 std::fixed 추가되면 소수점 아래 유효숫자 6자리로 고정
	std::cout.precision(12); //유효숫자 12자리 설정 (기본: 정수부 포함 총 6글자)
	std::cout << std::fixed; //고정 소수점 표기 (숫자 출력시 과학적 표기법(e) 쓰지말고 소수점 방식(0.00)으로 고정
	

	//형 변환
	result = (double)a / b;
	std::cout << result;

	return 0;
}