//1 MM
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    const int row = 5;
    const int col = 5;
    int array[row][col] ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 11;
            cout << array[i][j] << " ";
        }
        cout << "\n\n";
    }
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        cout << array[i][i] << " ";
    }

    return 0;
}

//1.2
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    const int row = 4;
    const int col = 4;
    int array[row][col] ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 101;
            cout << array[i][j] << " ";
        }
        cout << "\n\n";
    }

    int sum = 0;
    for (int j = 0; j < col; j++)
    {
        sum += array[0][j];
    }
    cout << endl;
    cout << "Sum: " << sum;
    return 0;
}
//1.3
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    int a;
    cout << "Введите число: ";
    cin >> a;

    int array[a][a] ;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            array[i][j] = i + j;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
//1.4
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    const int row = 6;
    const int col = 6;
    int array[row][col] ;

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            array[i][j] = rand() % 21;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            array[i][j] = array[j][i];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
//1.5
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    const int row = 3;
    const int col = 3;
    int array[row][col] ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 10;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    int min = 10;
    int count = 0;
    int min_row = 0;
    int min_col = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] < min)
            {
                min = array[i][j];
                min_row = i;
                min_col = j;
            }
        }
    }
    cout << endl;
    cout << "Min: " << min << endl;
    cout << "Строка: " << min_row << " Столбец: " << col;
    return 0;
}

//2
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    const int row = 5;
    const int col = 5;
    int array[row][col] ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 100;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
//2.2
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    const int row = 4;
    const int col = 4;
    int array[row][col] ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 10;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < row; i++)
    {  // перебираем столбцы
        int sum = 0;
        for (int j = 0; j < col; j++)
        {  // перебираем строки в столбце
            sum += array[i][j];
        }
        cout << "Строка " << i << ": " << sum << endl;
    }

    return 0;
}
//2.3
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    const int row = 5;
    const int col = 5;
    int array[row][col] ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 10;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    bool symmetric = true;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] != array[j][i])
            {
                symmetric = false;
            }
        }
    }
    cout << endl;
    if (symmetric == true)
    {
        cout << "Симметрична";
    }
    else
    {
        cout << "Не симметрична";
    }
    return 0;
}

//1 OM
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    const int a = 10;
    int array[10];
    int average;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << " ";
        count += array[i];
    }
    cout << endl;
    cout << "Average: " << (count) / 10;
    return 0;
}
//1.2
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    srand(time(NULL));
    char array[15];
    for (int i = 0; i < 15; i++)
    {
        int random = rand() % 3;
        array[i] = 'A' + random;
        cout << array[i] << " ";
    }

    int A;
    int B;
    int C;

    for (int j = 0; j < 15; j++)
    {
        if (array[j] == 'A')
        {
            A++;
        }
        else if (array[j] == 'B')
        {
            B++;
        }
        else if (array[j] == 'C')
        {
            C++;
        }
    }
    cout << endl;
    cout << "Подсчет" << endl;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;



    return 0;
}
//1.3
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    srand(time(NULL));
    int array[15];

    for (int i = 0; i < 15; i++)
    {
        array[i] = rand() % 2 - 1;
        cout << array[i] << " ";
    }

    int minus = 0;
    int plus = 14;

    for (int j = 0; j < 15; j++)
    {
        if (array[j] == -1)
        {
            array[minus] = -1;
            minus++;
        }
        else if (array[j] == 1)
        {
            array[plus] = 1;
            plus--;
        }
    }
    cout << endl;
    cout << "Сортированный список: " << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
//1.4
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    srand(time(NULL));
    int array[20];

    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 50;
        cout << array[i] << " ";
    }
    cout << endl;
    int chet = 0;

    for (int i = 0; i < 20; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
        }
    }


    return 0;
}
//1.5
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    srand(time(NULL));
    char array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = 'A' + rand() % 25;
    }
    cout << array;

    return 0;
}
//2
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    const int a = 10;
    int array[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 100 + 1;
        cout << array[i] << " ";
    }

    return 0;
}
//2.2
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    srand(time(NULL));
    int array[15];

    for (int i = 0; i < 15; i++)
    {
        array[i] = rand() % 50 + 1;
        cout << array[i] << " ";
    }
    int max = 1;
    int max_row;
    for (int i = 0; i < 15; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_row = i;
        }
    }
    cout << endl;
    cout << "Max: " << max << endl;
    cout << "Index: " << max_row + 1;
    return 0;
}
//2.3
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    srand(time(NULL));
    int array[20];

    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 101 - 50;
        cout << array[i] << "  ";
    }
    cout << endl;
    for (int i = 0; i < 20; i++)
    {
        if (array[i] > 0)
        {
            cout << array[i] << " ";
        }
    }
    return 0;
}
//2.4
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    srand(time(NULL));
    int array[15];

    for (int i = 0; i < 15; i++)
    {
        array[i] = rand() % 100 - 1;
        cout << array[i] << "  ";
    }

    for (int i = 0; i < 15; i++)
    {
        if (array[i] < 2)
        {
            continue;
        }
        if (array[i] == 2)
        {
            cout << array[i];
            continue;
        }
        if (array[i] % 3 == 0)
        {
            continue;
        }
    }
    return 0;
}