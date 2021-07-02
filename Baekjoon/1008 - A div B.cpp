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
* �������� 10^-9 ���ϰ� �Ǳ� ���� ios_base::precision()�� �ִ�� �÷��� ���� �����ȴ�.
* iomanip���� �����ϴ� �Լ��� ����Ͽ� io ������ �����Ѵ�.
* ���Ѵٸ� ��Ȯ�� double ���� ����� ���� �ִ�.
* double 1/3�� ���� ������ ���� setprecision(54)�� �����Ͽ�
* 0.333333333333333314829616256247390992939472198486328125
* 54���� decimal point�� �����ش�.
*/