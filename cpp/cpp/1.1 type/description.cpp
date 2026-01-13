#include <iostream>
#include <iomanip> //input output manipulator (입출력 조작) 관련 표준 라이브러리 헤드
#include <limits>
#include <cmath> //std::isnan()

int main()
{
	//값 뒤에 '-u' 붙으면 unsigned라는 의미

	/* 자료형 */
	//1byte = 8bits = 2^8 = 256가지 표현 가능
	// unsigned : 부호 없음(0, 양수만 표현), 모든 bit를 값으로 사용(최상위 bit도 값의 일부)
	// signed : 부호 있음(음수, 0, 양수 표현), 2의 보수 표현 = 최상위 bit 부호 표현(0: 양수, 1: 음수)
	
	//1. 문자형 : 저장될 때는 정수값(ASCII 변환)으로, 출력될 때 '문자'로 해석
	char ch1 = 'A'; //크기 1byte, (-128(= -2^7) ~ 127(= 2^7 - 1) 표현)
	unsigned char uch2 = 0; //크기 1byte, (0~255(= 2^8 - 1) 표현)

	//2. 정수형
	short sh1 = 0; //크기 2bytes, (-32,768(= -2^15) ~ 32,767(= 2^15 - 1) 표현)
	unsigned short ush2 = 0; //크기 2bytes, (0 ~ 65,535(= 2^16 - 1) 표현)
	int in1 = 0; //크기 4bytes, (-2,147,483,648(= -2^31) ~ 2,147,483,647(= 2^31 - 1) 표현)
	unsigned int uin2 = 0; //크기 4bytes, (0 ~ 4,294,967,295(= 2^32 - 1) 표현)
	//long은 OS에 따라 크기가 다름(4bytes, 8bytes), 당연히 표현범위도 달라짐
	long lo1 = 0; //크기 8 또는 4bytes
	unsigned long ulo2 = 0; //크기 8 또는 4bytes
	long long lolo1 = 0; //크기 8bytes, (- 9,223,372,036,854,775,808(= -2^63) ~  9,223,372,036,854,775,807(= 2^63 - 1) 표현)
	unsigned long long ulolo2 = 0; //크기 8bytes, (0 ~ 18,446,744,073,709,551,616(= 2^64- 1) 표현)
	
	//3. 부동소수점형(실수형) : 실수를 '근사값'으로 표현
	//float : 유효숫자 약 7자리 / double : 유효숫자 약 15~16자리 / long double : 구현 플랫폼에 의존
	float fl1 = 0.0f; //단정밀도(single precision), 크기 4bytes 
	double dou1 = 0.0; //배정밀도(double precision), 크기 8bytes
	long double lodou1 = 0.0L; //확장정밀도 (extended precision), 크기 8 또는 12 또는 16 bytes (by 컴파일러,OS)

	/* float(4bytes = 32bits)가 저장되는 방식 */
	//부호(sign) [1bit] / 지수(exponent)[8bits] / 가수(mantissa) [23bits]
	//부호(sign) : 양수(positive)는 0, 음수(negative)는 1
	//가수(mantissa) : 2^(-1) + 2^(-2) = 0.5 + 0.25 = 0.75
	// 
	//c#에서는 decimal에 m을, long에 접미사 L을 붙이고, long double이 없음
	//c++에서는 long double에 접미사 L을 붙인다

	std::cout << std::numeric_limits<float>::max() << std::endl; //표현할 수 있는 가장 큰 수의 절댓값
	std::cout << std::numeric_limits<float>::min() << std::endl; //표현할 수 있는 가장 작은 수의 절댓값
	std::cout << std::numeric_limits<float>::lowest() << std::endl; //표현할 수 있는 가장 작은 수

	float f(3.14);
	std::cout << 3.14 << std::endl;
	std::cout << 31.4e-1 << std::endl; //e는 10의 거듭제곱을 의미(10진수)
	std::cout << 31.4e2 << std::endl;

	/* 유효숫자(significant digit) */
	std::cout << 1.0 / 3.0 << std::endl; //0.333333 (기본 유효숫자 6자리)
	std::cout << std::setprecision(16) << std::endl; //유효숫자 16으로 설정
	//앞으로 출력할 것에 대한 설정을 바꿈
	std::cout << 1.0 / 3.0 << std::endl; //0.3333333333333333 (유효숫자 16자리)
	//부동소수점 수를 사용할 때는 정밀도가 날라가는 경우도 있다.
	//이것이 누적되면 오류 발생

	double d(0.1);
	std::cout << std::setprecision(17);
	std::cout << d << std::endl; //0.10000000000000001 
	//부동소수점 수 0.1에 가장 근사하여 표현할 수 있는 수라서 완전 정확하지 않음

	/* 숫자가 아닌 수 */
	//0으로 나누면 안된다
	//inf, -inf
	//ind (indeterminate) : 결정할 수 없다
	//이 수가 나왔는지 확인하려면 std::isnan() 사용 <cmath> 헤더 include


	return 0;
}