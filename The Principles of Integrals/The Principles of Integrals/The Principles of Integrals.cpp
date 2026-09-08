#include <iostream>

using namespace std;

//논리연산
//비밀번호도 맞아야 하지만 아이디도 맞아 떨어져야지 로그인이 가능하다.

// 분기문과 반복문만 잘하면 어떠한 코드도 거의 만들 수 있다.

int hp;

int main(){
	hp = 100;
	if (hp <= 0) 
	{ // 보통 게임 업계에선 이런 식으로 코드를 짠다.중괄호를 if 밑으로 가게함
		cout << "몬스터를 처치" << endl;
	}
	else {
		if (hp <= 30) {
			cout << "몬스터가 도망감" << endl;
		}
		else {
			cout << "몬스터가 반격함" << endl;
		}
	}
}
 