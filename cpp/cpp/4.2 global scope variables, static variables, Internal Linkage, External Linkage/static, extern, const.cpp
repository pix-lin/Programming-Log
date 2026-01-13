#include <iostream>
#include "Header.h"

using namespace std;

int value = 123; //전역 변수(Global Scope Variable)

/* forward declaration(전방 선언) [키워드 extern] */
//기본적으로 '(전역)함수' 앞에 extern 키워드가 생략되어있다 (정의가 없으면 내부적으로 자동으로 extern 붙음)
//전역변수 앞에는 extern을 명시하는 것과 명시하지 않는 것이 다르다.
//전역변수는 extern 키워드 생략 시 초기값 없으면 자동으로 0으로 초기화하여 메모리 할당
//전역변수는 extern 키워드가 있어야 컴파일 시 다른 파일에 정의가 되어있겠다 판단하고 넘어간다 (나중에 링킹하며 메모리 할당)
//전역변수는 가급적 안쓰는 것이 좋다
extern void doSomething2(); //어딘가 cpp파일에 doSomething()의 정의가 있으니, 링킹하여 실행해라
extern int c; //*꼭 다른 cpp파일에 이 변수의 정의(값)를 만들어줘야한다 
int d; //0으로 초기화, external linkage로 쓸 수 있음
static int e; //0으로 초기화, Internal Linkage(내부 연결, 현재 파일 내에서만 사용) 강제

void doSomething1()
{
	int a = 1;
	static int b = 1;

	++a;
	++b;

	cout << a << " " << b << endl;
	cout << c << endl;
}

int main()
{
	/* 전역 변수(Global Variable) */
	//범위가 무제한이 될 수 있다. 
	//현재 파일에서 쓸 수도, 다른 파일로 넘어가서도 쓸 수 있는 변수
	//가급적 사용을 안해야한다.
	//그럼에도 사용해야하는 경우가 발생한다.
	//다른 파일에서 다른 파일의 변수를 가져다 사용하고 싶을 때
	//main함수 밖에 선언하는 변수(?)
	//전역변수는 다른 파일까지 영향을 끼치기 때문에 가급적 사용x (최소한으로 사용)
	//전역변수는 global이라는 의미에서 앞에 'g_'등을 붙여주는 경우도 있다

	/* 지역 변수(Local Variable) */
	//지역변수(Local Variable)은 Linkage가 없다.
	//다른 scope에서 이 지역변수를 볼 수 없다
	 
	/* 내부 연결(Internal Linkage) */
	//전역변수에 static 키워드 선언
	//개별 cpp 파일 안에서만 전역으로 작동하는 전역변수, 전역변수 앞에 static 키워드를 선언하면 다른 cpp파일에서 접근x
	//전역변수에 static 키워드를 선언함으로서 이것도 '현재 파일'이라는 영역이 제한된다

	/* 외부 연결(External Linkage) [키워드 extern] */
	//한 파일에서 선언한 변수를 다른 파일에서 사용할 수도 있다.
	//여러 파일에서 사용하는 것이 좋지 않다.
	//전역변수는 다른 파일에서 사용할 수 있다.
	//전방선언(forward declaration) 시 함수 앞에 extern 키워드가 생략되어 있다 (다른 cpp파일에 해당 객체의 정의가 있으니 참고해라)

	/* 정적 변수(Static Duration Variable) [키워드 static] */
	//해당 객체가 OS로부터 받은 메모리가 static이라는 의미 (정적으로 같은 메모리 주소를 재사용)
	//객체가 선언될 때 같은 메모리를 쓰고 초기화를 한번 밖에 안한다.
	//static 변수를 선언할 때는 반드시 초기화해야함
	//보통 앞에 's_'를 붙여주는 경우도 있다
	//전역변수에 붙으면 Internal Linkage를 강제함

	/* [키워드 const] */
	//값을 이후에 안바꾸겠다
	//무조건 선언과 동시에 값을 초기화해야함 (전역번수더라도, extern 있으면 예외)
	//전역변수에 붙으면 Internal Linkage도 자동으로 설정(extern키워드 사용 가능)

	doSomething1(); //2 2
	doSomething1(); //2 3
	doSomething1(); //2 4

	//cout << value << endl; //123

	int value = 1;

	//cout << ::value << endl; //영역 연산자(Global Scope Operator) [::] 사용하여 전역변수에 접근
	//cout << value << endl; //1

	cout << "In main.cpp file " << Constants::gravity << " " << &(Constants::gravity) << endl;

	doSomething2();

	return 0;
}