#include <iostream>
#include <string> //std::string
#include <cassert> //assert()

using namespace std;

//문자와 문자열
int main()
{
	string s;
	int i = 0;

	cin >> s >> i;
	assert(i <= s.size() && i >= 1);

	cout << s[i - 1];

	return 0;
}