#include <iostream>        
#include <cmath>            
using namespace std;

double f(double x)
{         // функция f(x)
    return sin(x) - x;       // само уравнение sin(x) - x
}

int main()
{
    double a = 1.1, b = 1.2;
    double eps = 1e-4;         // переменные
    double c;

    while (b - a > eps)
    {
        c = (a + b) / 2;
        if (f(a) * f(c) <= 0)
            b = c;           // корень в левой половине
        else
            a = c;           // корень в правой
    }

    cout << "x = " << (a + b) / 2; // вывод результата
    return 0;
}





﻿#include <iostream>               
#include <cmath>                  
using namespace std;

double f(double x)
{              // функция
    return sin(x) - x;            // уравнение
}

int main()
{
    double a = 1.1, b = 1.2;      // переменные
    double eps = 1e-4;
    int N = (int)(log((b - a) / eps) / log(2)) + 1;

    double c;
    for (int i = 0; i < N; i++)
    { // делаем N шагов
        c = (a + b) / 2;
        if (f(a) * f(c) <= 0)
            b = c;
        else
            a = c;
    }

    cout << "x = " << c;          // выводим корень
    return 0;
}





﻿#include <iostream>           
#include <cmath>              
using namespace std;

double phi(double x)
{        // функция 
    return 0.4 * (1 - sin(x));  // уравнение
}

int main()
{
    double x = 1.1;
    double eps = 1e-6;        // точность 10^-6
    double xn;

    do
    {
        xn = phi(x);           // считаем новое x
        x = xn;                 // обновляем x
    } while (fabs(phi(x) - x) > eps);  // пока разница > eps

    cout << "x = " << x;   // вывод
    return 0;
}