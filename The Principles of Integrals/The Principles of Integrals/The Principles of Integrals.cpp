#include <iostream>
using namespace std;

//같은 이름의 함수지만 완전히 다른 함수라고 인지를 한다. argument 갯수, 타입이 다르기 때문이다.
int Add(int a, float b)
{
	int c = a + b;
	cout << c << endl;
	return c;
}

int Add(int a)
{
	return 0;
}


int main(){
	int result = Add(10, 20);
	return 0;
}

