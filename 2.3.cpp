#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cout << "�����������ε������ߣ�"<<endl;
    cin >> a >> b >> c;
    // ��������ܹ���������
    if (a + b > c && a + c > b && b + c > a) {
        // �����ܳ�
        double l = a + b + c;
        cout << "�������ܳ�Ϊ��" <<l << endl;
        // �ж��Ƿ�Ϊ����������
        if(a==b ||b==c||a==c){
           cout << "����һ�����������Ρ�" <<  endl;
        }
        else {
           cout << "�ⲻ��һ�����������Ρ�" <<endl;
        }
    }
    else {
        cout << "�������߲��ܹ���һ�������Ρ�" << endl;
    }
    return 0;
}