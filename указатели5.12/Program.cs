//1
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "Наибольшее число: " << a << endl;
    }
    else
    {
        cout << "Наибольшее число: " << b << endl;
    }
    return 0;
}
//2
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Введите число: ";
    cin >> num;
    if (num > 0)
    {
        cout << "Число положительное" << endl;
    }
    else if (num < 0)
    {
        cout << "Число отрицательное" << endl;
    }
    else
    {
        cout << "Число равно нулю" << endl;
    }
    return 0;
}
//3
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Введите два числа: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "После обмена:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
//4
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> op;
    switch (op)
    {
        case '+':
            cout << "Результат: " << a + b << endl;
            break;
        case '-':
            cout << "Результат: " << a - b << endl;
            break;
        case '*':
            cout << "Результат: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
            {
                cout << "Результат: " << a / b << endl;
            }
            else
            {
                cout << "Ошибка: деление на ноль" << endl;
            }
            break;
        default:
            cout << "Неправильная операция" << endl;
    }
    return 0;
}