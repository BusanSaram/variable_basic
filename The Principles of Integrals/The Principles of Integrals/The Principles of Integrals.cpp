#include <iostream>

using namespace std;

//논리연산
//비밀번호도 맞아야 하지만 아이디도 맞아 떨어져야지 로그인이 가능하다.

bool isRich;
bool isTall;

int main(){

	//비교연산
	// == 같은지
	//result = (a==b);

	//<
	//<=
	//>
	//>=


	//논리 연산
	isRich = true;

	!isRich;// true의 반대는 false
	cout << !isRich << endl;

	isRich&& isTall; //이 두개를 만족해야지 true;
	//근데 키작은 사람이 좋다 하면
	isRich && !isTall;
	isRich && (isTall == false); //이것도 같다. 

	// ! not
	// && and 이고
	// || or 이면
}
 