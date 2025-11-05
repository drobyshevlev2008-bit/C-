//1
#include <iostream>
using namespace std;

int main()
{
    char x = 'A';
    cout << x << endl;
    return 0;
}

//2
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a;
    cout << "Введите число: ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "Число четное";
    }
    else
    {
        cout << "Число нечетное";
    }
    return 0;

}

//3
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}
//4.2
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int array[8];
    int max = 0;

    for (int i = 0; i < 8; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << " ";

        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << endl;
    cout << "Максимальное значение: " << max;

    return 0;
}
//5
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int const row = 3;
    int const col = 3;
    int array[row][col] ;
    int count = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = count;
            cout << array[i][j] << " ";
            count++;
        }
        cout << "\n";
    }
    return 0;
}