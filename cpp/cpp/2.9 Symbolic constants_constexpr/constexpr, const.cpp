#include <iostream>

//#define PRICE_PER_ITEM //상수 대체를 위해 매크로를 쓰는 것은 거의 안함
//디버깅이 힘들다
//define은 전처리기로서, cpp파일 전체에 영향을 미치기 때문에 사용x

using namespace std;

int main()
{
	/* 심볼릭 상수 [키워드 constexpr, const] */
	//constexpr : 컴파일 타임에 값이 완전히 결정되는 것을 컴파일 타임에 체크하겠다는 의미
	//따라서 constexpr은 런타임에 결정되는 변수 앞에 붙일 수 없다
	constexpr int my_const(123); //const expression의 약자
	const int price_per_item = 30; //앞으로 값을 고정하겠다. (선언과 동시에 초기화 필수)

	int number;
	cin >> number;

	const int special_number(number); //런타임에 값이 결정되어 고정된다

	return 0;
}