#include <iostream>
#include <iomanip>         // �������������ʽ
using namespace std;
int main() {
    double F;
    cout << "�����뻪���¶�: " << endl;;
    cin >> F;
    // �����¶�ת��Ϊ�����¶ȵĹ�ʽ��C = (F - 32) * 5 / 9
    double C = (F - 32) * 5.0 / 9.0;
    // ���������ʽΪ������λС��
    cout << fixed << setprecision(2);
    cout << "��Ӧ�������¶���: " << C << endl;
    return 0;
}