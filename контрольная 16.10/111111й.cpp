
﻿/*#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c;

    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    cout << "Наибольшее число: " << max << endl;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n;

    cout << "Введите размер таблицы: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int x;
    cout << "Введите число: ";
    cin >> x;

    if (x % 15 == 0) cout << "FizzBuzz";
    else if (x % 3 == 0) cout << "Fizz";
    else if (x % 5 == 0) cout << "Buzz";
    else cout << x;

    return 0;
}
*/
#include <iostream>
 using namespace std;
 
 int main() {
    setlocale(LC_ALL, "ru");
    int n, f = 1;
    cout << "Введите число: ";
    cin >> n;
     
     for (int i = 1; i <= n; i++) {
         f = f * i;
     }
 
     cout << f;
     return 0;
 }

