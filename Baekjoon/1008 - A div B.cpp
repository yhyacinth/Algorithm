#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    std::cout << std::setprecision(16) << 1.*a/b << std::endl;
    std::cin.get();
}

/*
* 상대오차가 10^-9 이하가 되기 위해 ios_base::precision()을 최대로 늘려야 정답 판정된다.
* iomanip에서 제공하는 함수를 사용하여 io 포맷을 변경한다.
* 원한다면 정확히 double 값을 출력할 수도 있다.
* double 1/3의 가장 근접한 값은 setprecision(54)를 적용하여
* 0.333333333333333314829616256247390992939472198486328125
* 54개의 decimal point를 보여준다.
*/