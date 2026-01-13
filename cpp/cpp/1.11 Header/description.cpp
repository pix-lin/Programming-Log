#include <iostream> //표준 라이브러리 헤더파일은 <>
//#include "MyHeaders/add.h" //현재 빌드 위치의 하위 폴더에 접근 가능
#include "add.h" //사용자 정의 헤더파일은 ""
//헤더파일을 나중엔 폴더로 묶고 정리하는 습관을 들여야한다.
//나중엔 클래스를 Header와 cpp 파일로 쪼개서 묶고 작업을 한다.

using namespace std;

//int add(int a, int b); 
//다른 파일에 있는 함수를 재사용하기 위해 매번 프로토타입을 전방 선언하기 귀찮다
//따라서 헤더 파일을 만든다.

int main()
{
	cout << add(1, 2) << endl;

	return 0;
}