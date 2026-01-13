#include <iostream> //# 붙는 것은 전처리기(preprocessor directive)
//Input Output Stream(입력 출력 스트림), 라이브러리(Library) 헤더파일(표준 라이브러리의 일부)
//c++ 표준 라이브러리는 여러 헤더가 구현되어 구성된 '파일'
//여러 표준 라이브러리(내에 속한 헤더 파일인) <iostream>, <algorithm> 등은 하나의 namespace인 std를 공유

int main() //반환 타입 int, 함수명 main
{
	//문장의 끝에는 세미콜론(;) 추가
	//기능을 수행하는 완전한 코드 한 줄 Statement
	//문장의 구성요소가 되는 표현 Expression (1 + 1 등)

	/* Error 종류 */
	//Syntax Error (문법 오류, 컴파일 에러)
	//Link Error (링킹 에러) : 컴파일까지 성공했는데 여러 파일을 하나로 합칠 때 발생하는 에러
	//Runtime Error (런타임 에러) : 빌드도 잘 됐고 실행할 때 발생하는 에러
	//Logic Error (논리 에러, 버그) : 그냥 결과값이 틀리게 나옴, 에러도 아님

	/* 오류 찾기 */
	//가장 먼저 output 창을 확인
	//오류 메세지 읽어보고 읽어도 이해안되면
	//오류메시지 복사하여 구글에 검색 (내가 겪는 오류의 99% 이상은 누군가 겪어봤음)

	int x; //변수 선언 : int 타입의 정수형 데이터를 담을 수 있는 메모리 공간 할당
	int y = 0; //변수 선언과 동시에 초기화(처음 값 저장)
	
	/* 리터럴(Literal) */
	y = x + 3; //값 대입, x + 3은 리터럴 x 
	std::string word = "Hello World";
	bool isTrue = true;
	//"Hello World", 0, 3, true 등 value(값) 자체는 리터럴

	/* 출력 */
	std::cout << y << std::endl; //cout은 <iostream> 헤더파일에 정의되어있는 namespace std를 공유하여 소속되어있는 표준 출력 스트림 객체

	/* 네임스페이스(namespace) */
	//비슷한 기능들을 하는 함수들을 묶어놓거나 이름이 겹칠 수 있는 것들을 다른 공간으로 나눠서 저장하기 위해 사용
	//std는 함수가 정의되어있는 네임스페이스(namespace), 표준 라이브러리(standard library)의 일부

	/* 연산자 */
	//접근?연산자 [::] namespace 안에 들어있는 것들에 접근 가능
	//출력연산자(output operator) [<<] 

	//Delete : 파일 자체를 삭제
	//Remove : 빌드할 때 파일을 컴파일하지 말고 없는 셈 치도록 설정
	
	//Build(컴퓨터가 이해할 수 있는 언어로 변환, 전처리->컴파일(obj 파일로 만듦)->obj파일 엮어서 링킹(Linkage 파일로 만듦)->실행파일(exe 파일 생성) 후 실행되어야한다.


	return 0; //정수 반환
}