#include <iostream>
#include <vector> //vector<>
#include <string> //std::string
#include <cassert> //assert()

using namespace std;

//숫자의 개수
int main()
{
	int a = 0, b = 0, c = 0;
	string result;
	vector<int> count(10);

	cin >> a >> b >> c;
	assert(a >= 100 && a < 1000);
	assert(b >= 100 && b < 1000);
	assert(c >= 100 && c < 1000);

	result = to_string(a * b * c);

	for (int i = 0; i < result.size(); i++)
	{
		count[static_cast<int>(result[i] - '0')]++;
	}

	for (int i = 0; i < count.size(); i++)
		cout << count[i] << endl;
	return 0;
}