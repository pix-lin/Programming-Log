#include <iostream>
#include <string> //std::string

using namespace std;

//단어의 개수
//flag 변수 필요함
int main()
{
	int count = 0;
	string sentence;
	bool isWord = false;

	//cin >> sentence; //cin은 공백, 개행(\n), 탭이 들어오면 입력 종료
	getline(cin, sentence);

	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] != ' ')
		{
			if (!isWord)
			{
				isWord = true;
				count++;
			}
		}
		else
			isWord = false;

		
	}

	cout << count;

	return 0;
}