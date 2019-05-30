#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int a,b;
    char c;
    cout << "Драси, это куркулятор. Введите своё выражение, а я посчитаю " << endl;
    cin >> a >> c >> b;
    if (c == '+') cout << a << "+" << b << "=" << a+b;
    else if (c == '-') cout << a << "-" << b << "=" << a-b;
    else if (c == '*') cout << a << "*" << b << "=" << a*b;
    else if (c == '/'&&b!=0) cout << a << "/" << b << "=" << a/b;
    else cout << "Вы что-то делаете не так";

    return 0;
}
