//1
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int sumHuman = 0;
int sumRobot = 0;


int Brosok()
{
    return rand() % 6 + 1;
}

int Cube(int n)
{
    cout << "[" << n << "]";
    return n;
}

int GameHuman()
{
    int cube_1 = Brosok();
    int cube_2 = Brosok();
    cout << "Бросок человека: ";
    Cube(cube_1);
    Cube(cube_2);
    cout << "\n";
    sumHuman += cube_1 + cube_2;
    return cube_1 + cube_2;
}

int GameRobot()
{
    int cube_1 = Brosok();
    int cube_2 = Brosok();
    cout << "Бросок робота: ";
    Cube(cube_1);
    Cube(cube_2);
    sumRobot += cube_1 + cube_2;
    return cube_1 + cube_2;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int choose;
    cout << "Кто ходит первым:\n1.Человек\n2.Робот\nОтвет: ";
    cin >> choose;

    for (int i = 0; i < 5; i++)
    {
        if (choose == 1)
        {
            GameHuman();
            GameRobot();
        }
        if (choose == 2)
        {
            GameRobot();
            GameHuman();
        }
    }
    cout << "Счет человека: " << sumHuman << endl;
    cout << "Счет робота: " << sumRobot << endl;

    if (sumHuman > sumRobot)
    {
        cout << "Победил человек!" << endl;

    }
    else if (sumRobot > sumHuman)
    {
        cout << "Победил робот!" << endl;
    }
    else if (sumHuman == sumRobot)
    {
        cout << "Ничья!" << endl;
    }


    return 0;
}
//3
#include <iostream>
using namespace std;

void Square(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{

    Square(5, 10);
    return 0;
}
//4
#include <iostream>
using namespace std;

int Factorial(int a)
{
    int count = 1;
    for (int i = 1; i <= a; i++)
    {
        count *= i;
    }
    return count;
}

int main()
{
    setlocale(LC_ALL, "ru");

    cout << Factorial(3);

    return 0;
}
//5
#include <iostream>
using namespace std;

bool Simple(int a)
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

    if (Simple(6))
    {
        cout << "Простое";
    }
    else
    {
        cout << "Непростое";
    }
    return 0;
}
//6
#include <iostream>
#include <cstdlib>
using namespace std;

void MinAndMax()
{
    const int row = 5;
    const int col = 5;
    int array[row][col] ;

    int min = 10;
    int max = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 10;
            cout << array[i][j] << " ";
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
            if (array[i][j] < min)
            {
                min = array[i][j];
            }
        }
        cout << "\n";
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    MinAndMax();

    return 0;
}