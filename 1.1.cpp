#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846;  // ����Բ���ʳ���

int main() 
{
    double radius, height, volume;

    cout << "������Բ׶�׵İ뾶��";
    cin >> radius;
    cout << "������Բ׶�ĸߣ�";
    cin >> height;         // �Ӽ�������Բ׶�׵İ뾶��׶��

    // ����Բ׶���
    volume = (1.0 / 3.0) * PI * radius * radius * height;

    // ���Բ׶���
    cout << "Բ׶������ǣ� " << volume << endl;

    return 0;
}