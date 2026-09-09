#include <iostream>
using namespace std;


//보통 함수 쓸 때 함수 이름을 대문자로 적는다.

//입력할게 없으면 굳이 void TestFunction(void)할 필요 없다. 
void TestFunction(int a, float b) {
	cout << a << b << endl;
	return;
}

int main(){
	int a;
	cin >> a;
	float b;
	cin >> b;
	TestFunction(a,b);
	return 0;
}
