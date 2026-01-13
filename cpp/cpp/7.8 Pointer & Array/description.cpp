#include <iostream>

using namespace std;

void printArray(int* array) //배열을 함수의 인수로 전달할 때 포인터로 전달한다
{

}

int main()
{
	int arr[5] = { 1, 2, 3 , 4, 5 };

	/* 배열 이름 = 포인터 */
	//배열 이름 자체는 주소를 갖고있다

	//&arr == &(arr[0])
	//배열명은 배열의 0번째 인덱스의 주소를 담는다
	//따라서 배열명을 갖고 인덱싱이 가능하다

	//배열이 구조체나 클래스 내에 들어있을 경우에는 앞에 &를 붙여도 포인터로 강제변환되지 않음

	/* 포인터 연산과 배열 인덱싱(Indexing) */
	int value = 7;
	int *ptr_value = &value;

	double value2 = 1.0;
	double* ptr_value2 = &value2;

	cout << ptr_value << endl; //0000002646F1FC24 (16진수로 된 주소가 나옴)
	cout << uintptr_t(ptr_value) << endl; //899793419236 (16진수 포인터를 10진수로 출력)
	cout << uintptr_t(ptr_value - 1) << endl; //899793419232 (-4)
	cout << uintptr_t(ptr_value + 1) << endl; //899793419240 (+4)
	cout << uintptr_t(ptr_value + 2) << endl; //899793419244 (+8)
	
	cout << uintptr_t(ptr_value2) << endl; //899793419304 (16진수 포인터를 10진수로 출력)
	cout << uintptr_t(ptr_value2 + 1) << endl; //899793419312 (+8)
	cout << uintptr_t(ptr_value2 + 2) << endl; //899793419320 (+16)
	//메모리 주소는 출력할 때마다 바뀐다

	//이 성질을 통해 배열에서 연산으로 인덱싱이 가능하다
	int arr2[] = { 5, 6, 7, 8, 9 };

	cout << arr2[0] << " " << (uintptr_t)&arr2[0] << endl; //5 1079791056312
	cout << arr2[1] << " " << (uintptr_t)&arr2[1] << endl; //6 1079791056316

	cout << *arr2 << " " << (uintptr_t)arr2 << endl; //5 1079791056312
	cout << *(arr2 + 1) << " " << (uintptr_t)(arr2 + 1) << endl; //6 1079791056316

	printArray(arr);

}