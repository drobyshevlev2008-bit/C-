//1
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

template<typename T>
T average(T arr[], T size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int arr[] = { 1, 2, 3, 4, 5 };

    cout << "Среднее арифмитическое: " << average(arr, 5);

    return 0;
}
//3
#include <iostream>
using namespace std;

double number(double value, int n)
{
    double k = 1;
    for (int i = 0; i < n; i++)
        k *= 10;
    double result = (value * k + 0.5) / k;
    return result;
}

int main()
{
    double x = 3.1415926;
    cout << number(x, 2) << endl;
    cout << number(x, 4) << endl;
    cout << number(5.6789, 1) << endl;

    return 0;
}
//4
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

template<typename T>
T MinNumber(T arr[], int size)
{
    T min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int arr[] = { 1, 2, 3, 4, 5 };

    cout << "Минимальное: " << MinNumber(arr, 5) << endl;

    return 0;
}
//5
#include <iostream>
using namespace std;

int Max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int Max(int a, int b, int c)
{
    if (a > b & a > c)
    {
        return a;
    }
    if (b > a & b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}



int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Максимальное из двух: " << Max(5, 7) << endl;
    cout << "Максимальное из трех: " << Max(6, 3, 8) << endl;


    return 0;
}