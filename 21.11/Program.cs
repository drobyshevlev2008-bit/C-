//1
//Написать рекурсивную функцию нахождения степени числа
#include <iostream>
//#define Stepen(X, Y) (((X) * (X)) * Y - 1)
using namespace std;

int Stepen(int x, int y)
{
    if (y == 0)
    {
        int result = 1;
        return result;
    }
    else
    {
        int result = x * Stepen(x, y - 1);
        return result;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    int x = 2;
    int y = 5;

    cout << "Возведение " << x << " в " << y << " = " << Stepen(x, y);

    return 0;
}
//2\
#include <iostream>
using namespace std;

void Massiv(int a)
{
    if (a == 0)
    {
        return;
    }
    cout << " * ";
    Massiv(a - 1);
}

int main()
{
    setlocale(LC_ALL, "ru");

    int n;
    cout << "Введите значение N: ";
    cin >> n;

    Massiv(n);

    return 0;
}
//3\
#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    if (a > b)
    {
        return 0;
    }
    return a + Sum(a + 1, b);
}

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b;

    cout << "Введите a: ";
    cin >> a;
    cout << endl;
    cout << "Введите b: ";
    cin >> b;
    cout << endl;

    cout << "Сумма: " << Sum(a, b);

    return 0;
}
//4
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;




void Arr(int array[])
{
    for (int i = 0; i < 100; i++)
    {
        array[i] = rand() % 10;
    }
}

void MinArr()
{

}



int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int array[100];
    Arr(array);


    cout << "Минимальное: ";
    cout << "Начинается с: ";

    return 0;
}
//5
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));


    return 0;
}