#include <iostream>

using namespace std;

//N 찍기
int main()
{
	int num = 0;

	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		/*
		많은 양의 출력 시 endl 사용하면 (내부적으로 개행(\n) 후 버퍼 비우기(flush)를 하기 때문에 느려진다
		제한시간 넘기는 문제 발생 : 시간 초과(Time Limit Exceeded)
		*/
		//cout << i + 1 << endl;
		//cout << std::flush; //개행(\n) 하지 않고 버퍼만 비운다(flush), 지금 당장 전송해야할 때
		cout << i + 1 << "\n"; //endl(\n + flush) 대신 개행(\n)만
		
	}
	return 0;
}