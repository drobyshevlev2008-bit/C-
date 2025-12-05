//1
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double A[3][3] = {
        { 8.39, -8.99, -1.29},
		{ -1.05, 1.89, 4.91},      // матрица
		{ 6.38, 8.36, 0.48}
    }
    ;
    double b[3] = { 8.86, 4.20, -5.06 };
    double x[3];

    for (int i = 0; i < 3; i++)
    {
        int maxRow = i;
        for (int k = i + 1; k < 3; k++)                // поиск ведущего элемента
            if (fabs(A[k][i]) > fabs(A[maxRow][i]))
                maxRow = k;

        if (maxRow != i)
        {
            for (int j = 0; j < 3; j++)
                swap(A[i][j], A[maxRow][j]);    // перестановка строк
            swap(b[i], b[maxRow]);
        }

        for (int k = i + 1; k < 3; k++)
        {
            double factor = A[k][i] / A[i][i];
            for (int j = i; j < 3; j++)              // обнуление элементов ниже диагонали
                A[k][j] -= factor * A[i][j];
            b[k] -= factor * b[i];
        }
    }

    for (int i = 2; i >= 0; i--)
    {
        x[i] = b[i];
        for (int j = i + 1; j < 3; j++)  // Обратный ход
            x[i] -= A[i][j] * x[j];
        x[i] /= A[i][i];
    }

    cout << "Задание 1: Решение системы 3х3" << endl;
    cout << "x1 = " << x[0] << endl;
    cout << "x2 = " << x[1] << endl;
    cout << "x3 = " << x[2] << endl;

    return 0;

}
//2
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double A[3][3] = {
        { 6.44, 1.90, 0.35},
        { 6.64, 5.24, -8.02},
        { 1.39, -1.00, -0.20}
    }
    ;
    double det = 1.0;

    for (int i = 0; i < 3; i++)
    {
        // 1. Ищем максимальный элемент в столбце
        int maxRow = i;
        for (int k = i + 1; k < 3; k++)
            if (fabs(A[k][i]) > fabs(A[maxRow][i]))
                maxRow = k;

        // 2. Переставляем строки (меняем знак определителя)
        if (maxRow != i)
        {
            for (int j = 0; j < 3; j++)
                swap(A[i][j], A[maxRow][j]);
            det *= -1; // при перестановке строк определитель меняет знак
        }

        // 3. Если ведущий элемент 0 — определитель = 0
        if (fabs(A[i][i]) < 1e-12)
        {
            det = 0;
            break;
        }

        // 4. Умножаем определитель на диагональный элемент
        det *= A[i][i];

        // 5. Обнуляем элементы ниже диагонали
        for (int k = i + 1; k < 3; k++)
        {
            double factor = A[k][i] / A[i][i];
            for (int j = i + 1; j < 3; j++)
                A[k][j] -= factor * A[i][j];
        }
    }

    cout << "ЗАДАНИЕ 2: Определитель матрицы" << endl;
    cout << "det = " << det << endl;

    return 0;
}
//3
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double A[3][3] = {
        { 8.47, 4.22, 4.07},
        { 1.49, 6.92, 5.82},
        { 2.42, -0.88, -5.24}
    }
    ;

    double Aug[3][6];

    // 1. Заполняем левую часть — исходная матрица A
    // 2. Заполняем правую часть — единичная матрица
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            Aug[i][j] = A[i][j];
        for (int j = 3; j < 6; j++)
            Aug[i][j] = (j - 3 == i) ? 1.0 : 0.0;
    }

    for (int i = 0; i < 3; i++)
    {
        // Делаем диагональный элемент = 1
        double pivot = Aug[i][i];
        for (int j = 0; j < 6; j++)
            Aug[i][j] /= pivot;

        // Обнуляем столбец в других строках
        for (int k = 0; k < 3; k++)
        {
            if (k != i)
            {
                double factor = Aug[k][i];
                for (int j = 0; j < 6; j++)
                    Aug[k][j] -= factor * Aug[i][j];
            }
        }
    }

    // 4. Выводим обратную матрицу (правая часть)
    cout << "Задание 3: Обратная матрица" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j < 6; j++)
            cout << Aug[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
//6
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Задание 6: Решение системы 5x5" << endl;

    // Система 5x5
    double A[5][5] = {
        { 5.38, 7.33, -0.24, -0.49, -8.41},
        { 2.81, -4.69, -6.13, -3.05, -5.19},
        { 7.60, 4.78, 8.59, 0.98, 6.72},
        { -8.44, -8.53, 5.76, -8.34, 4.96},
        { 0.61, 4.63, -4.04, 1.72, 3.61}
    }
    ;
    double b[5] = { 4.27, 5.77, 3.70, 5.95, -6.77 };
    double x[5];

    for (int i = 0; i < 5; i++)
    {
        for (int k = i + 1; k < 5; k++)
        {
            double f = A[k][i] / A[i][i];
            for (int j = i; j < 5; j++) A[k][j] -= f * A[i][j];
            b[k] -= f * b[i];
        }
    }

    for (int i = 4; i >= 0; i--)
    {
        x[i] = b[i];
        for (int j = i + 1; j < 5; j++) x[i] -= A[i][j] * x[j];
        x[i] /= A[i][i];
    }

    cout << "Решение: ";
    for (int i = 0; i < 5; i++) cout << x[i] << " ";
    cout << endl;

    return 0;
}