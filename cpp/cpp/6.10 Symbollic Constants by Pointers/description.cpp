#include <iostream>

using namespace std;

int main()
{
	//char name[] = "Jack Jack";
	//char *name = "Jack Jack"; //포인터는 '주소'를 담기만 하는 변수 따라서 안됨

	/* 문자열 심볼릭 상수(Symbolic Constants) */
	//char형 포인터 선언 앞에 const를 붙이면 기호적 상수로 사용할 수 있다.
	const char* name = "Jack Jack"; //앞에 const를 붙이면 가능
	int int_arr[] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello World!";

	/* cout의 문자열 포인처 처리 */
	cout << int_arr << endl; //006FF800
	cout << char_arr << endl; //Hello World!
	cout << name << endl; //Jack Jack
	//cout에서 문자열은 특별히 처리한다. (포인터(주소)가 들어오면 문자열이 아닐까 가정을 한다. \0을 만날 때까지 쭉 출력)

	char c = 'Q';
	cout << &c << endl; //????? 쓰레기값
	//cout이 포인터가 들어오니까 문자열로 가정하고 \0만날 때까지 진행


	return 0;
}