#include <iostream>

enum Color
{
	RED,
	BLUE
};

enum Fruit
{
	BANANA,
	APPLE,
};

enum class Color2
{
	RED,
	BLUE
};

enum class Fruit2
{
	BANANA,
	APPLE,
};



int main()
{
	Color color = RED;
	Fruit fruit = BANANA;
	

	if (color == fruit) //내부적으로 정수로 처리하기 때문에 true로 통과
		std::cout << "Color == Fruit" << std::endl;

	Color2 color_2 = Color2::RED;
	Fruit2 fruit_2 = Fruit2::BANANA;

	//if (color_2 == fruit_2) //이제 비교가 안되게 막아버린다
		//std::cout << "Color == Fruit" << std::endl;

	//static_cast<int>로 강제 변환하여 비교는 가능하나, 이건 우리가 원하는 바가 아님
	//같은 Enum타입끼리 비교는 가능

	return 0;
}