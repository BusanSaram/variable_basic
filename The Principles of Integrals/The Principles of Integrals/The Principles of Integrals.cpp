#include <iostream>

using namespace std;

// 별찍기 연습문제

int main(){
	//키보드 입력 가능
	int N;
	cin >> N;
	
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N; i++) {
			cout << '*';
		}
		cout << endl;
	}
}
 