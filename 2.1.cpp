#include <iostream>
using namespace std;
int main() {
    char input;
    cout << "������һ���ַ�: ";
    cin >> input;
    if (std::islower(input)) 
    {
        // ����ַ���Сд��ת��Ϊ��д���
        char uppercase = toupper(input);
        cout << "��д�ַ���: " << uppercase << endl;
    }
    else
    {
        // ������������ַ���ASCII��ֵ
        char nextChar = input + 1;
       cout << "����ַ���ASCII��ֵ��: " << static_cast<int>(nextChar) << endl;
    }
    return 0;
}