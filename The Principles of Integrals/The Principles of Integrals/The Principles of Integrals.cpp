#include <iostream>

using namespace std;

//대입연산
int a;
int b;

int main(){

	//cout << (a = 10); // a에 10을 넣고 a의 값이 뭔지 질의를 하는 것임 또는 
	a = b = 10; //이렇게 연쇄작용으로 값을 넣을 수 있다.
	cout << a << endl;
	cout << b;
}
