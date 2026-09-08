#include <iostream>

using namespace std;

int hp;
int a;
int b;
int main(){
	hp = 100;
	a = 5;
	b = 2;
	cout << (hp * b + a / b); // 괄호 먼저, */ 먼저 그다음에 덧셈
}
 