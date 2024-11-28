#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    unsigned int testUnint = 65534; // 0xfffe
    cout << "output in unsigned int type: " << testUnint << endl;
    cout << "output in char type: " << static_cast<char>(testUnint) << endl;
    cout << "output in short type: " << static_cast<short>(testUnint) << endl; // Ϊʲô���Ϊ-2?
    cout << "output in int type: " << static_cast<int>(testUnint) << endl;
    cout << "output in double type: " << static_cast<double>(testUnint) << endl;
    cout << "output in double type with precision: " << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in hex unsigned int type: " << hex << testUnint << endl; // 16�������

    // 8�������
    cout << "output in octal unsigned int type: " << oct << testUnint << endl;

    // ��һ��ʵ��ת����int���۲�����������2Ϊ����
    double realNumber = 2;
    cout << "output of real number cast to int: " << static_cast<int>(realNumber) << endl;
    system("pause");
    return 0;
}