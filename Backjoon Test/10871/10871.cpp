#include <iostream>
#include <vector> //vector<>

using namespace std;

//X보다 작은 수
int main()
{
	int n = 0;
	int x = 0;
	
	cin >> n >> x;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int j = 0; j < arr.size(); j++)
		if (arr[j] < x)
			cout << arr[j] << " ";

	return 0;
}