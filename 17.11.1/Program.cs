//1
#include <iostream>
using namespace std;

//Функция для возведения числа в конкретную степень
int Degree(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int result = Degree(5, 5);
    cout << "Результат: " << result;

    return 0;
}
//2
#include <iostream>
using namespace std;
//Функция для сложения чисел в определенном диапазоне
int SumNumber(int a, int b)
{
    int count = 0;
    for (int i = a + 1; i < b; i++)
    {
        count += i;
    }
    return count;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int result = SumNumber(1, 4);
    cout << "Сумма: " << result;

    return 0;
}
//3
#include <iostream>
using namespace std;
//Функция для нахождения совершенного числа
bool Perfect(int a)
{
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    if (a == sum)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    setlocale(LC_ALL, "ru");

    int start = 1;
    int end = 234;

    for (int i = start; i < end; i++)
    {
        if (Perfect(i) == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}
//4
#include <iostream>
using namespace std;
//Функция для определения масти и номера карты
void ShowCard(int a, int b)
{
    switch (a)
    {
        case 6:
            cout << "6";
            break;
        case 7:
            cout << "7";
            break;
        case 8:
            cout << "8";
            break;
        case 9:
            cout << "9";
            break;
        case 10:
            cout << "10";
            break;
        case 11:
            cout << "Валет";
            break;
        case 12:
            cout << "Дама";
            break;
        case 13:
            cout << "Король";
            break;
        case 14:
            cout << "Туз";
            break;
    }

    cout << "  ";

    switch (b)
    {
        case 1:
            cout << "Пики";
            break;
        case 2:
            cout << "Крести";
            break;
        case 3:
            cout << "Черви";
            break;
        case 4:
            cout << "Бубни";
            break;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    ShowCard(12, 4);

    return 0;
}
//5
#include <iostream>
using namespace std;
//Функция для определения счастливого числа
bool HappyNumber(int a)
{
    int one = a / 100000;
    int two = a / 10000 % 10;
    int three = a / 1000 % 10;
    int four = a / 100 % 10;
    int five = a / 10 % 10;
    int six = a % 10;

    if (one + two + three == four + five + six)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    if (HappyNumber(123321))
    {
        cout << "Счастливое число!";
    }
    else
    {
        cout << "Несчастливое число!";
    }

    return 0;
}