#include <iostream>
#include <cassert> //assert()
#include <iomanip> //setw(), setfill()
#include <string> //std::string

using namespace std;

//별 찍기-2
int main()
{
	ios::sync_with_stdio(false); //c++의 표준 입출력(cout, cin)과 c언어 버퍼 간 동기화 해제 (속도 향상)
	cin.tie(NULL); //입력과 출력 묶음 풀기 (속도 향상)
	//기본적으로 cin과 cout은 묶여있어서 cin으로 입력받으려하면 그 전에 cout에 있는 내용을 화면에 다 내보낸다(flush)
	//NULL 설정 시 이 묶음을 풀어버려서 입력을 받든 안받든 출력버퍼가 꽉 차거나 명령 시에만 출력하도록 한다
	//= 불필요한 청소 시간을 아껴서 속도가 빨라짐

	int n = 0;

	cin >> n;

	//method1
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n - i; j++)
			cout << " ";

		for (int k = 0; k <= i; k++)
			cout << "*";
		cout << endl;
	}*/
		
	//method2
	for (int i = 1; i <= n; i++)
		cout << setw(n) << string(i, '*') << '\n';

	return 0;
}