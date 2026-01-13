#include <iostream>
#include "Header.h"

using namespace std;
int c = 12; //다른 파일의 extern 전역변수에 값을 할당할 때 extern 키워드 사용x

void doSomething2()
{
	cout << "In text.cpp file " << Constants::gravity << " " << &(Constants::gravity) << endl;
}

