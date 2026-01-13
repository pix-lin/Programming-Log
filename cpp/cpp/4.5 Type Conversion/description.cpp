#include <iostream>
#include <typeinfo> //typeid()

int main()
{
	using namespace std;

	int a = 123;
	cout << typeid(a).name() << endl;

	/* 형 변환도 우선순위가 있다 */
	//4bytes보다 작은 것은 무조건 int형으로 변환
	// 우선순위 낮음 -> 높음
	//int, unsigned int, long, unsigned long
	//long long, unsinged long long, float, double
	//long double
	
	//numeric conversion
	int i = 3000;
	char c = i;

	/* 명시적 형변환 */
	cout << static_cast<int>(c) << endl;

	return 0;
}