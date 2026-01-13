#include <iostream>

using namespace std;

//함수 이름을 다르게 해주는 경우도 있지만 어쩔 수 없이 같게 해줘야하는 상황도 있다.
namespace MySpace1
{
	//namespace 안에 또 namespace를 넣을 수 있다.
	namespace MySubSpace1
	{
		int myFunction(int a, int b)
		{
			return a / b;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}


int main()
{
	using namespace MySpace2; //이렇게 하면 MySpace2::를 안써도 된다
	//만약 Header 파일에 using namespace를 해준다면, 그 Header 파일을 include하는 cpp파일들도 다 영향이 끼치기 때문에 가급적 using namespace는 중괄호 내에 넣어서 범위를 제한해주는 것이 좋다

	cout << MySpace1::doSomething(3, 4) << endl; //7
	doSomething(3, 4); //12
	MySpace1::MySubSpace1::myFunction(1, 2); //0

	return 0;
}