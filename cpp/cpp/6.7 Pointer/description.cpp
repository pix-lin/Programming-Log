#include <iostream>
#include <cstddef> //std::nullptr_t

using namespace std;

struct Something
{
	int a, b, c, d; //데이터 크기 4 * 4 = 16bytes
};

int main()
{
	/* 포인터(Pointer) */
	//큰 메모리에 저장되어있는 데이터 중 일부분을 CPU가 사용하기 위해 메모리로부터 가져올 때 필요한 데이터가 저장되어 있는 '주소'를 사용하여 직접 접근하여 가져옴
	//메모리 주소를 담는 변수
	//주소를 저장하는 변수(포인터)의 크기는 자료형에 관계없이 플랫폼 환경에 따라 4bytes(x86), 8bytes(x64) 고정
	//어떤 타입의 주소를 저장할지 포인터의 타입을 설정한다

	//주소 연산자(Ampersand) [&]
	// 간접적으로 주소를 가리킬 수 있도록 도와주는 연산자
	
	//de-reference operator [*]
	//포인터가 간접적으로 가리키기만 하는 것에 대하여 직접적으로 접근하여 값을 확인

	typedef int* pint;

	int x = 5;
	//포인터 변수 선언
	int* ptr_x; //변수 앞에 바로 *를 붙여서 선언 (또는 자료형 * 변수명 이렇게 양쪽 공백)

	cout << &ptr_x << endl; //포인터 변수 자체의 주소가 있다
	//포인터 변수는 '주소'를 담는 변수로서, 저장할 주소 값을 복사하여 저장한다 (포인터 변수의 주소 != 저장되는 변수의 주소)

	ptr_x = &x;

	//int* ptr_y = &x, ptr_z = &x; //이렇게 하면 ptr_z가 포인터가 아님
	int* ptr_y = &x, * ptr_z = &x;
	pint ptr_u = &x, ptr_w = &x; //이렇게 포인터 자료형을 typedef로 정의하면 가능

	cout << ptr_x << " " << *ptr_x << endl; //0000006FC24FFB04 5
	//int *ptr_x = 0x0000006FC24FFB04 //이렇게 주소값을 직접 대입할 수는 없음 (주소값 앞에는 0x로 16진수 표현해줌)

	Something ss;
	Something* ptr_ss;

	/* 널 포인터 (Null Pointer) */
	//포인터에 쓰레기값이 들어가있는 경우 de-referencing [*]을 시도하게 되면 에러 발생하는 문제 방지를 위해 사용
	//조건 판단 시 nullptr인지 여부를 확인 가능 (nullptr이면 false, 아니면 true)

	double* ptr = nullptr; //null pointer 초기화
	double* ptr2 = 0; //0도 가능
	double* ptr{ nullptr }; //uniform initialization 가능

	std::nullptr_t nptr; //nullptr만 넣을 수 있다

	return 0;
}