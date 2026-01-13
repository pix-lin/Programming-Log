#include <iostream>

using namespace std;

/* 열거형(Enumerated Types) */
//일종의 사용자 정의 자료형으로 볼 수 있다
//일반적으로 요소를 대문자로 입력
//내부적으로 정수로 저장
//value로 입력 안하고 키워드로 사용하려고 
enum Color
{
	COLOR_BLACK, //0
	COLOR_RED, //1
	COLOR_BLUE, //2
	COLOR_GREEN, //3
	//마지막에 쉼표(,) 있어도 됨
}; //중괄호 끝에 반드시 세미콜론(;) 입력

enum FOOD
{
	FOOD_BURGER = -3, //-3 값을 직접 지정할 수 있다
	FOOD_CREAM, //-2
	FOOD_JUICE, //-1
	FOOD_CAKE, //0
	BREAD, //1
}; //지정해준 값에서부터 다음에 지정하지 않는다면 하나씩 가산

enum FOOD
{
	FOOD_BURGER, //0
	FOOD_CREAM = -5, //-5
	FOOD_JUICE, //-4
	FOOD_CAKE = 2, //2
	BREAD, //3
}; //지정해준 값에 따라 1씩 증가(중간에 만나면 값 갱신)
//웬만하면 서로 다른 값을 갖도록 자동으로 값을 기본 할당하여 사용

int main()
{
	Color paint = COLOR_BLUE;
	
	int color_id = COLOR_GREEN; //3, 대입은 잘 된다(형 변환)

	//Color my_color = color_id; //안된다
	//Color my_color = 3; //안된다
	Color my_color = static_cast<Color>(3);
	Color my_color = static_cast<Color>(color_id);

	//Casting(형 변환)은 되는데, 바로 대입은 안된다


	return 0;
}