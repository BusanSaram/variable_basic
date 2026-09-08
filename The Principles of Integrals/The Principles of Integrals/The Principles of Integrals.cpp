#include <iostream>

using namespace std;

//가위 바위 보
/*
rand() = 0   →  0 % 3 = 0
rand() = 1   →  1 % 3 = 1
rand() = 2   →  2 % 3 = 2
rand() = 3   →  3 % 3 = 0
rand() = 4   →  4 % 3 = 1
rand() = 17  → 17 % 3 = 2
*/

/*
cpp
int main() {
	for (int i = 0; i < 5; i++)
		cout << rand() % 100 << " ";
}

이걸 srand 없이 돌리면:

1회차 실행: 41 67 34 0 69
2회차 실행: 41 67 34 0 69   ← 똑같음
3회차 실행: 41 67 34 0 69   ← 또 똑같음

srand(time(0))을 넣으면:

1회차 실행: 82 15 93 7 51
2회차 실행: 23 68 4 77 30   ← 매번 다름


rand()한테 "이 숫자부터 시작해" 라고 알려주는 함수입니다.

cpp
srand(100);   // 100부터 시작해
srand(999);   // 999부터 시작해
srand(time(0));   // 지금 시각부터 시작해

rand()는 시작값이 정해지면 거기서부터 숫자를 만들어냅니다. 시작값이 같으면 나오는 숫자도 똑같고, 시작값이 다르면 다른 숫자가 나옵니다.

srand를 아예 안 쓰면 시작값이 항상 1로 고정입니다. 그래서 매번 똑같은 결과가 나오는 거고요.

time(0)은 매초 바뀌니까, 이걸 시작값으로 주면 실행할 때마다 달라집니다.

이름은 seed + rand 라서 srand입니다. seed는 씨앗이라는 뜻이고요.
*/
//ctrl alt 여러 줄 선택가능 RAM에 data중에서 변하지 않는 영역이 있는데 그곳으로 들어간다 

/*
const int SCISSORS = 0;
const int ROCK = 1;
const int PAPER = 2;
이렇게 하는것 보다 enum을 더 많이 쓴다. 
*/

//열거형
enum ENUM_RCP {
	SCISSORS,
	ROCK,
	PAPER
};

//매크로도 가능 열거형을 사용하는 것에서는 그냥 매크로 잘 안씀
// #define DEF_SCISSORS 0;

int main(){
	
	srand(time(0)); // 프로그램 켤 때마다 똑같은 숫자만 나온다. 키면 켤때마다 다른 숫자가 나온다
	while (true) {
		cout << "가위(0) 바위(1) 보(2) 골라주세요" << endl;
		cout << "> ";

		//사용자
		int value;
		cin >> value;


		//컴퓨터
		int computerValue = rand() % 3; // 0,1,2가 나옴

		switch (value)
		{
		case SCISSORS : //가위
			switch (computerValue)
			{
			case SCISSORS: //가위
				cout<< "적 가위" << endl;
				cout << "draw" << endl;
				break;
			case ROCK: //바위
				cout << "적 바위" << endl;
				cout << "lose" << endl;
				break;
			case PAPER: //보
				cout << "적 보" << endl;
				cout << "win" << endl;
				break;
			default:
				cout << "wrong" << endl;
				break;
			}
			break;
		case ROCK : //바위
			switch (computerValue)
			{
			case SCISSORS: //가위
				cout << "적 가위" << endl;
				cout << "win" << endl;
				break;
			case ROCK: //바위
				cout << "적 바위" << endl;
				cout << "draw" << endl;
				break;
			case PAPER: //보
				cout << "적 보" << endl;
				cout << "lose" << endl;
				break;
			default:
				cout << "wrong" << endl;
				break;
			}
			break;
		case PAPER: //보
			switch (computerValue)
			{
			case SCISSORS: //가위
				cout << "적 가위" << endl;
				cout << "lose" << endl;
				break;
			case ROCK: //바위
				cout << "적 바위" << endl;
				cout << "win" << endl;
				break;
			case PAPER: //보
				cout << "적 보" << endl;
				cout << "draw" << endl;
				break;
			default:
				cout << "wrong" << endl;
				break;
			}
			break;
		default:
			cout << "something wrong" << endl;
			break;
		}
	}
}
 
//0,1,2 이런식으로 하면 다른 사람들이 가독성이 늦어진다. 