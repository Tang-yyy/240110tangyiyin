#include<iostream>
using namespace std;
int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "������һ���ַ���"<<endl;
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (c ==' ')
            spaces;
        else
            others;
    }
    cout << "Ӣ����ĸ����: " << letters << endl;
    cout << "�ո����: " << spaces << endl;
    cout << "�����ַ�����: " << digits << endl;
    cout << "�����ַ�����: " << others << endl;

    return 0;
}