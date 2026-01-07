#include <iostream>

using namespace std;

//아스키 코드 
//A(65) - Z(90) / a(97) - z(122) / 0(48) - 9(57)
int main()
{
	char c;

	cin >> c;
	cout << static_cast<int>(c);
	return 0;
}