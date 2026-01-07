#include <iostream>
#include <string> //std::string

using namespace std;

//숫자의 합
int main()
{
	int n = 0;
	string str;
	cin >> n;
	cin >> str;

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += static_cast<int>(str[i] - '0');
	}
	cout << sum << endl;

	return 0;
}