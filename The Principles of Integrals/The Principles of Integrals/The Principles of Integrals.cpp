#include <iostream>

using namespace std;

//간단한 전투 시스템
int hp = 100; //몬스터HP
int roundd = 1;
int damage = 50;;// 플레이어 데미지

int main(){
	while (true) {
		hp -= damage;

		if (hp < 0) hp = 0;

		cout << "Round: " << roundd << "몬스터 체력: " << hp << endl;

		if (hp == 0) {
			cout << "몬스터 처치!" << endl;
			break;
		}

		if (roundd == 5) {
			cout << "제한 라운드 종료" << endl;
			break;
		}	

		roundd++;
	}
}
 