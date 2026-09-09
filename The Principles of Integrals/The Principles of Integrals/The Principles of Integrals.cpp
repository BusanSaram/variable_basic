#include <iostream>
using namespace std;


int Add(int a, float b) 
{
	int c = a + b;
	cout << c << endl;
	return c;
}

int main(){
	int result = Add(10, 20);
	return 0;
}
