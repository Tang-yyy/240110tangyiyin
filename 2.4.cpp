#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char t;
    cout << "�������һ������: " << endl;
    cin >> num1;
    cout << "����������� (+, -, *, /, %): " << endl;
    cin >> t;
    cout << "������ڶ�������: " << endl;
    cin >> num2;

    switch (t) {
    case '+':cout<< num1 + num2;
        break;
    case '-':cout<< num1 - num2;
        break;
    case '*':cout<< num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "��������Ϊ0��" <<endl;
        }
        else {
            cout<<num1 / num2<<endl;
        }
        break;
    case '%':
        if (num2 == 0 ) {
            cout << "��������Ϊ0��" <<endl;
        }
        else {
            cout<<(int)num1 % (int)num2<<endl;
        }
        break;
    default:cout << "������Ƿ���" <<endl;
        break;
    }
    return 0;
}