#include <iostream>

using namespace std;

//반복문

int cnt; // 0 가위 1 바위 2 보

int main(){
	//while
	//for
	//do while

	cnt= 0;


	//정해지지 않은 횟수만큼 돌아야 할 경우는 while을 쓴다. 
	while (cnt < 5) {
		cout << "hello" << endl;
		cnt++;
	}

	//정해진 횟수만큼 돌아야 할 경우는 for문을 쓰고 
	for (int i = 0; i < 100; i++) { // for은  stack영역에 포함되는 i를 local에서 잠깐 쓰고 반환함.
		//i == 3에서 continue를 써서 바로 hello를 쓰지 않고 i== 4로 넘어가게 만들 수 있다.
		if (i == 3) continue;
		
		cout << "hello" << endl;

		//특정 부분을 찾았으면 빠져나오게 할 수 있다. break를 써서
		if (i== 4) break;
	}
}
 