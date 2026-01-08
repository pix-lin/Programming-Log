#include <iostream>
#include <cassert> //assert()

using namespace std;

//알람시계
int main()
{
	int hour = 0;
	int minute = 0;

	cin >> hour >> minute;
	assert(hour >= 0 && hour <= 23);
	assert(minute >= 0 && minute <= 59);

	//조건문 설정을 최소화, 최적화
	if (minute >= 45)
		minute -= 45;
		
	else if (hour == 0)
	{
		hour = 23;
		minute = 60 - (45 - minute);
	}

	else
	{
		hour -= 1;
		minute = 60 - (45 - minute);
	}

	cout << hour << " " << minute;

	return 0;
}