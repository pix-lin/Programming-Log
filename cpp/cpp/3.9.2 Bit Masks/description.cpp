#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT_;
	//컴퓨터 그래픽스에서 Bitwise OR 연산 등이 있는 코딩을 많이 하게 된다
	//그 외 여러 옵션들이 들어가게되는데, API 디자인을 할 때 파라미터가 너무 많이 들어가는 것을 방지하기 위해 Bit Flags를 사용하게된다.

	/* Bit Masks */
	//그래픽스에서는 color table을 사용하게 되는데 색상을 16진수 6개(RRGGBB)로 표현하게 된다. (Hex Code)
	//16진수 FF = 10진수 255 = 1byte(8bits)
	//즉 RRGGBB = 3bytes로 표현 가능 (R, G, B는 Red, Green, Blue)
	//예를들어 #FFA07A 라는 16진수 수로 한번에 들어오면, 10진수로 (255, 165, 122)로 분리를 할 수 있다.

	const unsigned int red_mask = 0xFF0000; //이 자리에 저장되는 숫자들이 RED
	const unsigned int green_mask = 0x00FF00; //이 자리에 저장되는 숫자들이 GREEN
	const unsigned int blue_mask = 0x0000FF; //이 자리에 저장되는 숫자들이 BLUE

	cout << std::bitset<32>(red_mask) << endl; //00000000111111110000000000000000
	cout << std::bitset<32>(green_mask) << endl; //00000000000000001111111100000000
	cout << std::bitset<32>(blue_mask) << endl; //00000000000000000000000011111111

	unsigned int pixel_color = 0xDAA520; //0xDAA520으로 앞에 00이 추가로 생략되어있음

	cout << std::bitset<32>(pixel_color) << endl; //00000000110110101010010100100000

	unsigned char blue = pixel_color & blue_mask;
	//unsigned char green = pixel_color & green_mask;

	cout << "blue " << bitset<8>(blue) << " " << static_cast<int>(blue) << endl; //blue 00100000 32
	
	//cout << "green " << bitset<8>(green) << " " << static_cast<int>(green) << endl; //green 00000000 0
	//이렇게 하면 8bit 자리만 담는 1byte의 unsigned char타입은 00000000까지밖에 못받아서 앞쪽은 싹 날라가서 0이 된다.
	//따라서 이때 Bitwise Shift Operator를 사용해준다.

	unsigned char green = (pixel_color & green_mask) >> 8; //연산자 우선순위 고려
	cout << "green " << bitset<8>(green) << " " << static_cast<int>(green) << endl; //green 10100101 165

	return 0;
}