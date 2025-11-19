//1
#include <iostream>
using namespace std;

//Функция для вывода массива
void ShowMatrix(char matr[5][8], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

//Функция для значений массива (вывод "*")
void InitMatrix(char matr[5][8], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matr[i][j] = '*';
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    const int iRow = 5;
    const int iCol = 8;
    char iMatr[iRow][iCol] ;
    InitMatrix(iMatr, iRow, iCol);
    ShowMatrix(iMatr, iRow, iCol);
    return 0;
}
//2
#include <iostream>
using namespace std;

//Функция для нахождения факториала (перемножения на себя в цикле)
int Factorial(int number)
{
    int count = 1;
    for (int i = 1; i <= number; i++)
    {
        count *= i;
    }
    return count;
}


int main()
{
    setlocale(LC_ALL, "ru");

    int result = Factorial(5);
    cout << "Факториал числа: " << result;
    return 0;
}
//3
#include <iostream>
using namespace std;

//Функция для определения простого числа (через true и false)
bool SimpleNumber(int a)
{
    if (a <= 1)
    {
        return false;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    setlocale(LC_ALL, "ru");

    if (SimpleNumber(5))
    {
        cout << "Простое";
    }
    else
    {
        cout << "Непростое";
    }

    return 0;
}
//4
#include <iostream>
using namespace std;

//Функция для возведения числа в куб (умножение числа в цикле)
int Cube(int number)
{
    int count = 1;
    for (int i = 0; i < 3; i++)
    {
        count *= number;
    }
    return count;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int result = Cube(3);
    cout << "Результат: " << result;

    return 0;
}
//5
#include <iostream>
using namespace std;

//Функция нахождения максимального из двух чисел
int Max(int a, int b)
{
    return a > b ? a : b;
}
//Функция нахождения минимального из двух чисел
int Min(int a, int b)
{
    return a < b ? a : b;
}



int main()
{
    setlocale(LC_ALL, "ru");

    int max = Max(5, 15);
    int min = Min(5, 15);

    cout << "Max: " << max;
    cout << endl;
    cout << "Min: " << min;

    return 0;
}
//6
#include <iostream>
using namespace std;
//Функция для определения true или false
bool TruthAndLie(int a, int b)
{
    if (a > b)
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

    if (TruthAndLie(1, 5))
    {
        cout << "Ложь";
    }
    else
    {
        cout << "Правда";
    }

    return 0;
}