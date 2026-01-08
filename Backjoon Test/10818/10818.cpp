#include <iostream>
#include <cassert> //assert()
#include <vector> //vector<>

using namespace std;

//최소, 최대
int main()
{
	int n = 0;
	int min = 0, max = 0;

	cin >> n;
	assert(n >= 1 && n <= 1000000);
	vector<int> arr(n); //이미 만들어진 배열의 크기는 변하지 않음

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int minIndex = 0;
	int maxIndex = 0;
	min = arr[minIndex];
	max = arr[maxIndex];

	for (int i = 1; i < n; i++)
	{
		if (arr[minIndex] > arr[i])
			minIndex = i;
		
		if (arr[maxIndex] < arr[i])
			maxIndex = i;
	}
	min = arr[minIndex];
	max = arr[maxIndex];

	cout << min << " " << max;
	return 0;
}