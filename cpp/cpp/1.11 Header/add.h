#pragma once //전처리기의 일종, 헤더가드(Header Guards)
//헤더파일에는 프로토타입만 있고, 정의는 cpp로 가 있는 것이 좋다.
//헤더 가드를 사용하면 정의가 헤더에 있어도 문제가 생기지 않는다.
//중복될 경우 한번만 include하라고 알려주는 것이 헤더가드

//#ifndef MY_ADD //If Not Defined(정의되어있지 않다면)
//#define MY_ADD //MY_ADD를 정의하라
//이렇게 하는 것이 표준이지만, 근데 번거로우니 헤더가드를 사용한다.

//가급적이면 정의(definition) 와 선언(declaration)은 Header 파일과 cpp 파일로 분리해주는 것이 좋다
int add(int x, int y);