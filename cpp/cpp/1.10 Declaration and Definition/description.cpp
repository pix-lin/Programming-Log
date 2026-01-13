#include <iostream>

using namespace std;

/* 용어 구분 */
//시그니처(Signature) : 함수이름 + 매개변수의 타입과 순서에 대한 정보. *리턴타입 포함x
//프로토타입(Prototype) : 리턴타입 + 시그니처

int add(int a, int b); //함수 프로토타입을 전방 선언(forward declaration)

int main()
{
	cout << add(1, 2) << endl; //해당 함수 호출된 부분에 커서 대고 우클릭>Peek Definition 하면 아래 팝업으로 내용을 보여준다

	//함수 정의할 때 선언(declaration)과 정의(definition)은 분리하는 습관은 아주 좋다

	return 0;
}

int add(int a, int b) //함수 정의(Definition)
{
	return a + b;
}
