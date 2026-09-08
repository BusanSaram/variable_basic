#include <iostream>

using namespace std;

//논리연산
//비밀번호도 맞아야 하지만 아이디도 맞아 떨어져야지 로그인이 가능하다.

// 분기문과 반복문만 잘하면 어떠한 코드도 거의 만들 수 있다.

int choice; // 0 가위 1 바위 2 보

int main(){
	if (choice == 0) {
		cout << "가위를 냈다" << endl;
	}
	else if(choice == 1){
		cout << "바위를 냈다" << endl;
	}
	else if(choice ==2) {
		cout << "보를 냈다" << endl;
	}

	//switch-case break
	switch (choice) // break를 넣어야지 다음 케이스로 넘어가는 것을 막을 수 있다.
	{
	case 0:
		cout << "가위를 냈다" << endl;
		break;
	case 1:
		cout << "바위를 냈다" << endl;
		break;
	case 2:
		cout << "보를 냈다" << endl;
		break;
	default:
		cout << "아무것도 안냄" << endl;
		break;
	}
}
 