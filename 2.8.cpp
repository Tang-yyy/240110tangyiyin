#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a, x, y;
    cout << "������һ���� a��";
    cin >> a;
    if (a < 0) {
        cout << "�����aΪ�����������������ֵ��ƽ����" << endl;
        a = -a;
    }
    x = a;
    y = 0.5 * (x + a / x);
    while (fabs(x - y) >= 0.0000000001) {
        x = y;
        y = 0.5 * (x + a / x);
    }
    cout << "a��ƽ�����ǣ� " << y << endl;
    if (a < 0) {
        cout << "�����aΪ�����������ֵ��ƽ�����ǣ� " << -y << endl;
        a = -a;
    }
    return 0;
}