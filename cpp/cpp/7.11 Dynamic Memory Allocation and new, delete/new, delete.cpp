#include <iostream>

using namespace std;

int main()
{
	/* 메모리 할당 방식 */
	//1. 정적 메모리 할당(Static Memory Allocation)
	//전역변수, static 변수같이 한번 만들면 프로그램이 끝날 때까지 메모리를 유지
	//Data Segment에 들어간다
	 
	//2. 자동 메모리 할당
	//지역변수나 정적 배열을 선언했을 때 블럭 밖으로 나가면 사라지고, 메모리가 OS에 반납
	//Stack에 들어간다
	
	//3. 동적 메모리 할당(Dynamic Memory Allocation)
	//키워드 new를 통해 os로부터 동적할당 받는다.
	//동적으로 할당된 메모리는 Heap에 들어간다. 

	//Heap은 Stak보다 훨씬 용량이 크다

	/* [키워드 new] */
	int *ptr = new int; //os에게 int 크기(4bytes)에 맞춰서 메모리를 받아온 뒤 메모리 주소를 알려준다 따라서 포인터로 받아야함
	*ptr = 7; 
	int *ptr2 = new int{ 7 }; //포인터로 메모리 할당받으면서 동시에 초기화
	
	cout << ptr2 << endl; //0000013A279C7710
	cout << *ptr2 << endl; //7
	
	//os로부터 할당받은 메모리를 돌려줘야한다
	/* [키워드 delete] */
	//delete가 없어도 프로그램이 끝나면, 자동으로 메모리를 반납하지만, 자동으로 프로그램이 끝나기 전에 delete를 해줌으로서 os에 반납함을 명시할 수 있다
	//반납하고나면 그 포인터 변수의 주소를 출력할 수는 있어도 de-referencing [*]해서 value에 접근하면 쓰레기값이 출력된다.
	//동적할당 받는 변수는 포인터여야 한다

	/* 동적할당 메모리 반납 */
	delete ptr;
	ptr = nullptr; //포인터가 갖는 주소를 반납했다면 nullptr로 초기화

	//*예외처리 관련
	//메모리를 다 쓰고 있어서 메모리를 할당받지 못하는 경우 new를 써서 동적할당 받을 때 에러가 발생할 수 있다
	int* ptr3 = new (std::nothrow) int{ 7 }; //오류 발생시키지 않고 쭉 진행

	int* ptr4 = new (std::nothrow) int{ 10 };
	int* ptr5 = ptr4;

	delete ptr4;
	ptr4 = nullptr;
	//ptr5 = nullptr; //이렇게 해주지 않으면 ptr5도  오류가 발생할 수 있다.
	//메모리 반납하지 못했을 때는
	//방법1. 꼼꼼한 프로그래머가 되어서 문제가 발생하지 않도록 코드 작성
	//방법2. 스마트 포인터(Smart Pointer)를 사용해서 덜 걱정스럽게 방지(나중에 배움)
	//방법2는 프로그램이 조금 느려질 수 있다

	/* 메모리 누수(Memory leak) */
	//동적 메모리 할당할 때 반납하고 지우는 것을 깜박하면 문제가 생긴다
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		//delete ptr; //메모리 반납을 꼭 해줘야한다
	}

	//프로그래밍을 잘하려면 new, delete를 적게 사용하는 방식으로 프로그래밍 하는 것이 좋다

	return 0;
}