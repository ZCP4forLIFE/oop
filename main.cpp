#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int a,b;
    char c;
    cout << "�����, ��� ����������. ������� ��� ���������, � � �������� " << endl;
    cin >> a >> c >> b;
    if (c == '+') cout << a << "+" << b << "=" << a+b;
    else if (c == '-') cout << a << "-" << b << "=" << a-b;
    else if (c == '*') cout << a << "*" << b << "=" << a*b;
    else if (c == '/'&&b!=0) cout << a << "/" << b << "=" << a/b;
    else cout << "�� ���-�� ������� �� ���";

    return 0;
}
