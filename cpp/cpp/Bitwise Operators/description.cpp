#include <iostream>
#include <bitset> //이진수로 바꿔 출력해주는 라이브러리 헤더

int main()
{
	//앞에서 int, float double 등 연산은 타입 단위 연산이라고 할 수 있다.

	/* 비트단위 연산자(Bitwise Operators) : Bits끼리 연산*/
	//객체 지향으로 넘어가면 타입단위 연산자가 타입을 사용자가 정의한 추상적인 개념(ADT, Abstract Data Type)에 대해서 적용을 한다. (뒤에서 배울 내용)

	//메모리를 아끼고 계산에 사용하기 위해서
	//비트단위 연산자를 사용하면 연산이 훨씬 빠르다

	/* 비트단위 연산자(Bitwise Operators) */
	//Bitwise left shift [<<]
	//Bitwise right shift [>>]
	//*cout에서 사용하는 출력 연산자(<<), cin에서 사용하는 입력 연산자(>>)와 다른 의미 (Bitwise operator가 기본인데 입력, 출력 연산자로 연산자 오버로딩)
	//Bitwise NOT [~]
	//Bitwise END [&]
	//*논리 연산자(&)와 비슷하면서 다르다
	//Bitwise OR [|]
	//Bitwise XOR [^]

	//Bitwise operator를 할 때는 unsigned를 사용하는 것이 일반적

	using namespace std;

	unsigned int a = 3;

	/* Bitwise Shift Operators */
	{
		//Bitwise Operator는 곱하기나 std::pow()를 쓰는 것이 아니고, 어떤 unsigned int가 있을 때 여기에 2의 몇 제곱을 곱하고/나누고 싶은 상황에 Bitwise Shift Operator를 쓰는 것이 곱하기나 나누기를 하는 것보다 훨씬 빠르다.

		/* Bitwise Left Shift Operator [<<] */
		//Bitwise Left Shift Operator [<<] : 2의 n제곱만큼 곱해진다
		cout << std::bitset<4>(a) << endl; //0011
		//내부적으로 데이터가 2진수로 어떻게 저장되는지 볼 수 있다

		unsigned int b = a << 1; //Bitwise left shift [<<]

		cout << std::bitset<4>(b) << endl; //0110 left로 1칸 밀리고 밀린 자리는 0으로 채워짐
		cout << b << endl; //6 (left shift 1 : shift하기 전 숫자에 2를 곱한다)

		b << 2; //b를 2비트 왼쪽으로 민 결과를 계산만 하고 저장 안하고 버림
		b = 2 << 2; //2(0010)를 2비트 왼쪽으로 밀고 저장(1000)
		cout << std::bitset<4>(b) << endl; //1000
		cout << b << endl; //8 = 2 * 2^2

		/* Bitwise Right Shift Operator [>>] */
		//Bitwise Right Shift Operator [>>] : 2의 n제곱만큼 나눠진다
		unsigned int c = 1024; //1024(0000 0100 0000 0000)

		cout << std::bitset<16>(c >> 1) << " " << (c >> 1) << endl; //0000001000000000 512
		cout << std::bitset<16>(c >> 2) << " " << (c >> 2) << endl; //0000000100000000 256
		cout << std::bitset<16>(c >> 3) << " " << (c >> 3) << endl; //0000000010000000 128
		cout << std::bitset<16>(c >> 4) << " " << (c >> 4) << endl; //0000000001000000 64

		/*
		(1024 / 8)을 하면 컴퓨터가 내부적으로 8이 아닌 다른 숫자로도 나눌 수 있는 일반적인 방식으로 계산하기 때문에 느린데,
		Bitwise Operator를 쓰면 컴퓨터 내부에 데이터가 저장된 방식으로 계산되기 때문에 속도는 훨씬 빠르다.
		대신 일반적인 곱하기 / 나누기에는 사용할 수 없다.
		*/
	}
		
	/* Bitwise NOT [~] */
	{
		//Logical NOT은 [!]이다. (주의)
		//0 <-> 1, 0과 1이 서로 바뀐다
		unsigned int d = 1024; //1024(0000 0100 0000 0000)

		cout << std::bitset<16>(~d) << " " << (~d) << endl; //1111101111111111 4294966271
	}

	/* Bitwise AND [&], Bitwise OR [|], Bitwise XOR [^] */
	{
		//이진수 표현은 앞에 0b를 붙인다.
		unsigned int e = 0b1100;
		unsigned int f = 0b0110;

		cout << e << " " << f << endl; //12 6

		/* Bitwise AND [&] */
		//둘 다 1일 경우만 1, 나머지 0
		cout << std::bitset<4>(e & f) << endl; //0100

		/* Bitwise OR [|] */
		//둘 중 하나만 1이어도 1
		cout << std::bitset<4>(e | f) << endl; //1110

		/* Bitwise XOR [^] */
		//둘 중 하나만 1이면 1, 둘 다 0이면/1이면 0, 
		cout << std::bitset<4>(e ^ f) << endl; //1010

		//Bitwise AND [&], OR [|], XOR [^]는 Bitmask에서 유용하게 쓰임

		e &= f; //모두 할당 연산자(Assignment Operator)에 적용할 수 있다.
	}


	return 0;
}