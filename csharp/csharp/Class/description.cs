using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace csharp.Class
{
    /*
     * internal 접근지정자
     * 현재 프로젝트 내에서만 쓸 수 있다. 외부 파일에서는 사용 못한다
     */
    internal class Description
    {
        // 껍데기 클래스 (Main이 있는 Program 클래스에서 Character를 쓰려면 
        // Character 클래스는 이 밖으로 꺼내거나 public으로 바꿔야 합니다.
        // 일단 구조 유지를 위해 여기 둡니다.)
    }

    /// <summary>
    /// 클래스(Class) 정의
    /// </summary>
    internal class Character // Program에서 쓰려면 internal이나 public이어야 함
    {
        #region [개념] 접근 지정자 설명 (접으려면 왼쪽 - 클릭)
        /// <summary>
        /// 접근지정자 public
        /// 다른 클래스, 외부에서 사용가능하게 한다
        /// 
        /// 접근지정자 private (기본값)
        /// 다른 클래스, 외부에서 사용 못하게 막는다, 현재 클래스 내부에서만 사용 가능
        /// 
        /// 접근지정자 protected
        /// 현재 클래스, 자식 클래스에서 사용할 수 있도록 한다. (자식 클래스가 아닌 다른 클래스 사용x)
        /// </summary>
        #endregion

        // 필드(Field) : 클래스의 변수
        public string name;
        public int id;
        public int hp;
        private int att = 0; // 이건 내부에서만 쓰는 진짜 변수

        // 메서드(Method) : 클래스의 기능(함수)

        // 생성자
        // 초기화 용도로 사용
        // 반환타입이 없고 클래스 이름으로 되어있다
        // 매개변수 유무에 따라 나뉘는데, 매개변수가 없으면 내부 로직이 어떻든 기본 생성자
        public Character()
        {
            // 기본 생성자 내용
        }

        #region [개념] 프로퍼티 문법 공부 내용

        /* 프로퍼티(property) 문법 */
        // 필드에 대한 접근을 제어하는 특별한 멤버
        // get과 set 접근자를 통해 값을 읽거나 쓸 수 있다

        // Set???() : 외부에서 값을 변경하는 메서드
        // Get???() : 외부에서 값을 갖고오는 메서드
        // 이 메서드를 대체해주는 것이 '프로퍼티(Property) 문법'

        /* [옛날 방식: 일반 메서드로 구현했을 때]
           
           public void SetId(int _id)
           {
               id = _id;
           }
           public int GetId()
           {
               return id;
           }
        */

        /* [프로퍼티 문법 예시 1: 수동 구현]
           
           public int Att
           {
               get { return att; }
               set { att = value; }
           }
        */

        #endregion

        // [최신 방식] 자동 프로퍼티 (현업에서 가장 많이 씀)
        // 컴파일러가 알아서 private att 변수를 만들고 연결해줌
        public int Att { get; set; }

        // 읽기 전용 프로퍼티 (값 변경 불가)
        public int MaxHP { get; private set; }

    }

    internal class Program
    {
        static void Main(string[] args)
        {
            Character c = new Character();

            // 프로퍼티 사용 (대문자 Att)
            c.Att = 10;

            Console.WriteLine("공격력: " + c.Att);
        }
    }
}