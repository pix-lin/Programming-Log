#include <iostream>
#include <cassert> //assert()

using namespace std;

//시험 성적
int main()
{
	int score = 0;
	
	cin >> score;
	assert(score >= 0 && score <= 100);

	//switch - case 문은 case 뒤에 딱 하나의 리터럴(literal)만 올 수 있다.
	if (score >= 90)
		cout << "A";
	else if (score >= 80)
		cout << "B";
	else if (score >= 70)
		cout << "C";
	else if (score >= 60)
		cout << "D";
	else
		cout << "F";

	return 0;
}