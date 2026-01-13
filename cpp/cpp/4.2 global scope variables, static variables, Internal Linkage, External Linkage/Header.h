#pragma once

namespace Constants
{
	//이렇게 선언된 전역상수의 경우, 여러 cpp파일에서 접근하여 가져다 사용할 때 주소를 확인해보면 서로 다른 주소를 갖는 것을 알 수 있다 (변수의 복사본)
	//const double pi(3.141592);
	//const double gravity(9.8);

	//extern 키워드를 선언해주면 다른 cpp파일에 작성된 정의를 갖다 그 변수 그대로 사용(사본 생성x, 같은 메모리 주소의 하나의 변수 사용)
	//원래 전역변수에 const 붙이면 기본으로 (static처럼) Internal Linkage 속성을 갖게되지만, extern을 붙이면 다른 파일에서 정의함을 컴파일에 전달 (해당 정의부에서도 extern const를 선언해야함)
	//static 키워드가 붙으면 Internal Linkage가 고정되어서 extern 사용 못함
	extern const double pi;
	extern const double gravity;
}