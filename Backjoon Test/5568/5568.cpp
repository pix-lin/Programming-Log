#include <iostream>
#include <cassert> //assert()
#include <vector> //vector<>
#include <string> //std::string
#include <algorithm> // 정렬(sort)을 위해 필요

using namespace std;

//카드 놓기
/*
부르트포스(Brute Force) 알고리즘
완전 탐색 알고리즘, 가능한 모든 경우의 수를 탐색하면서 요구조건에 충족되는 결과만을 가져온다
해가 존재할 것으로 예상되는 모든 영역을 전체 탐색하는 방법
선형 구조를 전체적으로 탐색하는 순차탐색, 비선형 구조를 전체적으로 탐색하는 깊이우선 탐색(DFS), 너비 우선 탐색(BFS)가 기본적인 도구
*/
//순열?
int n = 0, k = 0;
vector<string> cards; //카드에 적힌 숫자
bool visited[10]; //해당 카드 사용했는지 여부
vector<string> made_nums; //만들어진 수 저장할 리스트

void select(int depth, string current_num)
{
	if (depth == k)
	{
		made_nums.push_back(current_num); //결과 리스트에 저장
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (visited[i] == false)
		{
			visited[i] = true;
			select(depth + 1, current_num + cards[i]);

			visited[i] = false;
		}	
	}
}

int main()
{
	//n, k 입력받기
	cin >> n >> k;
	assert(n >= 4 && k <= 10);
	assert(k >= 2 && k <= 4);

	//카드 입력받기
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		cards.push_back(temp);
	}
	
	select(0, "");
	
	sort(made_nums.begin(), made_nums.end());

	int count = 1;

	for (int i = 1; i < made_nums.size(); i++)
	{
		if (made_nums[i] != made_nums[i - 1])
			count++;
	}
		
	cout << count << endl;
	
	return 0;
}