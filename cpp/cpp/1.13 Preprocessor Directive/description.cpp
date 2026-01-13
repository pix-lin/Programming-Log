#include <iostream> //전처리기(preprocessor directive) : 빌드 들어가기 전에 처리한다

#define MY_NUMBER 9 //매크로 상수는 대문자로 작성
#define MAX(a, b) ((a)>(b) ? (a) : (b))
//매크로가 갖는 리터럴을 바꿔주면 빌드를 다시 해야한다

#define LIKE_APPLE //define 효과는 define이 정의되어 있는 해당 파일 내에서만 유효, 뒤의 값으로 교체해줌
//따라서 #define의 유효 범위도 생각하기

int main()
{
#ifdef LIKE_APPLE //LIKE_APPLE 이라는 매크로가 정의되어있으면
	//전처리기 라인 안에서는 #define에서 지정된 매크로 상수를 값으로 교체하지 않음
	std::cout << "Apple" << std::endl;
#endif //전처리기 if문 범위를 종료

#ifndef LIKE_APPLE //정의되어있지 않다면
	std::cout << "Orange" << std::endl;
#endif //전처리기 if문 범위를 종료

#ifdef //~정의되어있다면
#elif //위 조건이 틀리고 ~정의되어있다면
#else //그 외
#endif //끝



	return 0;
}
