#include <iostream>
#include <iterator> //std::size()

using namespace std;

//최댓값
int main()
{
	//탐색 알고리즘 사용 : 순차탐색(정렬x), 이진탐색(정렬o)
	//이진탐색 시 정렬하면서 기존 순서를 변경시키기 때문에 사용x
	//순차 탐색
	int arr[9];
	//int size = sizeof(arr) / sizeof(arr[0]);
	int max_Index = 0, max = 0;

	for (int i = 0; i < size(arr); i++)
		cin >> arr[i];
	
	int j = 0;
	for (; j < size(arr); j++)
	{
		if (arr[j] > max)
		{
			max_Index = j + 1;
			max = arr[j];
		}
	}

	cout << max << endl;
	cout << max_Index;
	
	return 0;
}