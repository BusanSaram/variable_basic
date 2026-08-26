#include <iostream>
using namespace std;

//char 대략적으로 -100에서 100
//short 대략적으로 -30000에서 30000까지 
//int (4byte) -21억에서 21까지 
//__int64 (8byte) 21억을 초과하면 __int64로 가면 된다라고 보면 된다. 
int hp; // 그리고 30000이면 아쉽고 21억 정도면 충분히 HP를 표현할 수 있겠다라고 생각이 들어서 int를 쓴다.

//Data영역

int main() // main으로 들어와 실행이 된다. 
{
    hp = 150; // 50을 hp에 넣는다.

    //Stack 영역
    cout << hp << endl;
}
