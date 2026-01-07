#include <iostream>

using namespace std;

//º° Âï±â-1
int main()
{
	int n = 0;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}

	return 0;
}