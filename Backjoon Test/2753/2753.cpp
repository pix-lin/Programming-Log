#include <iostream>
#include <cassert> //assert()

using namespace std;

//À±³â
int main()
{
	int year = 0;

	cin >> year;
	assert(year >= 1 && year <= 4000);

	if (year % 4 == 0 && year % 100 || year % 400 == 0)
		cout << 1;
	else
		cout << 0;

	return 0;
}