#include <iostream>


int main()
{
	/* 객체(Objects) */
	//객체지향 프로그래밍(Object-Oriented Programming, OOP)에서의 '객체'
	//메모리에 저장되어있는 정보는 '객체'로서 저장된다. (객체는 메모리에 주소를 갖고 존재)

	/* 변수(Variables) */
	//기능 상으로는 수학에서의 '변수'처럼 동작하지만, 내부적으로 메모리에 담겨있는 객체를 의미한다. (객체의 이름)
	// 내부적으로 작동하는 구조는 메모리 주소의 다른 이름이라고 생각
	//변수는 '메모리의 숫자 주소' 대신 문자로 된 이름을 붙여주는 것

	/* Left-Values, Right-Values */
	//메모리 주소를 프로그래머가 직접적으로 접근할 수 있느냐 없느냐 차이
	//왼쪽에 있는 것을 L-Values, 오른쪽에 있는 것을 R-Values라고 한다.
	//주소를 갖고있는 것이 L-Values
	//R-Values는 뭔가를 대입할 수 있는 변수로서 작동하는 것이 아니고 현재 갖고있는 '값'이 R-Values로서 나온다

	int x = 123; //변수 x 선언 및 초기화(123)
	x = 10; //대입
	//x는 숫자를 담을 수 있는 공간을 메모리에 차지하고 있다.
	//x는 메모리에 있는 어떤 공간에 대한 주소의 이름, 그 크기는 int(정수) 하나를 담을 수 있는 크기
	//대입 연산자(Assignment Operator) [=], 같다는 의미 x

	std::cout << &x << std::endl;
	//주소 연산자(Ampersand) [&]

	/* 데이터 초기화 */
	//copy initialization과 direct initialization은 //데이터 타입에 맞지 않는 값 들어오면 warning 띄움, 실행시켜줌
	//uniform initialization은 데이터 타입 맞지 않을 경우 컴파일 자체를 하지 않고 error를 띄운다
	int a = 123; //copy initialization
	int a(123); //direct initialization
	int a{ 123 }; //uniform initialization

	return 0;
}
