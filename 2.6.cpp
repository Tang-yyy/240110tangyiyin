#include <iostream>
using namespace std;
int main() {
    int a, b,max,min,c,d;
    cout << "������������������";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "������������������" << endl;
    }
     c = a % b;
     d = a * b;
     while (c != 0) {
         a = b;
         b = c;
         c = a % b;
     }
     if (c == 0) {
         max = b;
         min = b / max;
     }
     cout << "���Լ��Ϊ��" << max << '\n';
     cout << "��С������Ϊ��" << min << '\n';
    return 0;
}