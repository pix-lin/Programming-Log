#include <iostream>

int main()
{
	/* sizeof() 연산자 */
	//1byte = 8bits
	//데이터의 크기를 알고싶을 때 사용
	//타입, 변수, 사용자 정의 자료형(구조체, 클래스) 등 객체를 넣을 수 있다
	float a = 0.0f;

	sizeof(float); //4
	sizeof(a); //4

	/* 쉼표 연산자(Comma Operator) */
	//앞(왼쪽)의 것을 계산하고, 뒤의 것을 계산하여 뒤의 것이 대입될 수 있도록 한다
	int x = 3;
	int y = 10;
	int z = (++x, ++y); //11
	//풀어쓰면
	/*
	++x;
	++y;
	z = y;
	*/
	int a = 1, b = 10; //여기서의 ,는 연산자가 아닌 구분기호
	z = a, b; //연산자 우선순위에 따라 ,(콤마 연산자)는 =(대입 연산자)보다 우선순위가 낮아서 1

	/* 조건부 연산자(Conditional Operator, arithmetric if) */
	//Conditional Operator = 삼항 연산자 [?]
	int k = x > y ? x : y;

	return 0;
}