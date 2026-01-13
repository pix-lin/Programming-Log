#include <iostream>
#include <string> //std::string
#include <cassert> //assert()
#include <vector> //std::vector<>

using namespace std;

//문자열 반복
//alphanumeric : 숫자(0-9) + 문자(A-Z) + 연산자
int main()
{
	int n;
	

	cin >> n;
	assert(n >= 1 && n <= 1000);
	
	vector<string> s(n);
	vector<string> p(n);
	/*
	int r;
	for (int i = 0; i < n; i++)
	{
		cin >> r >> s[i];
		for (int j = 0; j < s[i].size(); j++)
			for (int k = 0; k < r; k++)
				p[i] += s[i][j];
	}
	
	for(int i = 0; i < n; i++)
		cout << p[i] << endl;
	*/

	while (n--)
	{
		int r;
		string s;

		cin >> r >> s;

		string result = "";

		for (char c : s)
		{
			result += string(r, c);
		}
		cout << result << "\n";
	}

	return 0;
}