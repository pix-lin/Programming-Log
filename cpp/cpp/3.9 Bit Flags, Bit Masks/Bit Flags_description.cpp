#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//비트단위 연산자(Bitwise Operator)가 실전에서 어떻게 어떤 용도로 사용될 수 있는지 본다
	
	//아이템 개수만큼 flag를 만드는 방법
	/*
	bool item0_flag = false;
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	...
	*/
	//근데 메모리 주소를 가지기 위해서 변수는 최소 1byte(8bit)의 메모리 크기를 가져야한다.
	//메모리 주소를 byte 단위로 접근해야하기 때문에 
	//bool 타입은 true(0이 아닌 값, 보통 1), false(0) 1bit면 충분하다.
	
	//따라서 1byte = 8bit의 남는 공간을 활용해서 1byte 변수 하나만 갖고 8개의 flag 표현은 할 수 있지 않나

	//각 bit에 대해서 flag를 설정(전제 작업)
	//0만큼 left shift하는 것은 없어도 상관없으나, 규칙성을 위해
	const unsigned char opt0 = 1 << 0; //0000 0001
	const unsigned char opt1 = 1 << 1; //0000 0010
	const unsigned char opt2 = 1 << 2; //0000 0100
	const unsigned char opt3 = 1 << 3; //0000 1000
	const unsigned char opt4 = 1 << 4; //0001 0000
	const unsigned char opt5 = 1 << 5; //0010 0000
	const unsigned char opt6 = 1 << 6; //0100 0000
	const unsigned char opt7 = 1 << 7; //1000 0000

	cout << bitset<8>(opt0) << endl; //0000 0001
	cout << bitset<8>(opt1) << endl; //0000 0010
	cout << bitset<8>(opt2) << endl; //0000 0100
	cout << bitset<8>(opt3) << endl; //0000 1000

	unsigned char items_flag = 0;
	cout << "No Items" << bitset<8>(items_flag) << endl; //No Items 00000000
	//bool타입 변수 8개를 갖고 아이템 8개가 있는지 확인하는 것이 x
	//1bit 단위마다의 상태를 통해 1byte 크기의 unsigned char타입 변수 하나만 갖고 아이템 8개가 있는지 확인 가능

	//item0 on [event 발생]
	items_flag |= opt0;
	cout << "Item0 obtained" << bitset<8>(items_flag) << endl; //Item0 obtained 00000001

	//item3 on [event 발생]
	items_flag |= opt3;
	cout << "Item3 obtained" << bitset<8>(items_flag) << endl; //Item3 obtained 00001001

	//item3 lost [event 발생]
	items_flag &= ~opt3;
	cout << "Item3 lost" << bitset<8>(items_flag) << endl; //Item3 lost 00000001

	//obtain item2, item3?
	items_flag |= (opt2 | opt3);

	//has item1?
	if (items_flag & opt1) //해당하는 자리 수가 1이면 true, 0이면 false
		cout << "Item1 have" << endl;

	//has item1 and no have item2
	//가지고 있는 것(item1)은 가지고 있지 않도록, 갖고있지 않은 것(item2)은 갖고있도록 이벤트 발생
	if ((items_flag & opt1) && !(items_flag & opt2))
	{
		//Bitwise XOR [^] 연산 활용
		items_flag ^= opt1;
		items_flag ^= opt2;
	}

	return 0;
}