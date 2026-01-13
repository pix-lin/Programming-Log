//#include <iostream> //<iostream>에서 <cstdint>를 include하고 있기 때문에 <iostream> 있으면 아래 include 필요x
#include <cstdint> //이 표준 라이브러리 헤더를 추가하면 사용 가능

int main()
{
	using namespace std;

	std::int16_t i(5); //현재 플랫폼에서 16bits(2bytes) = short
	std::int8_t myint = 65; //현재 플랫폼에서 8bits(1byte) = char
	
	std::int_fast8_t fi(5); //8bits 중 빠른 데이터타입 (signed char)
	std::int_least64_t fl(5); //적어도 64bits(8bytes) 데이터 타입 (long long)

	return 0;
}