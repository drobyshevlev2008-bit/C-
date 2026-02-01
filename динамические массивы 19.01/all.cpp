//1 
#include <iostream>

// Объявление функций
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return b != 0 ? a / b : 0; }

int main() {
    int (*operation)(int, int);
    char op;
    int a, b;

    std::cout << "Введите два числа: ";
    std::cin >> a >> b;
    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
        case '+': operation = add; break;
        case '-': operation = sub; break;
        case '*': operation = mul; break;
        case '/': operation = div; break;
        default: std::cout << "Неправильная операция"; return 1;
    }

    std::cout << "Результат: " << operation(a, b) << std::endl;
    return 0;
}
//1.2 
#include <iostream>
#include <cstring>

int compareStrings(const char* a, const char* b) {
    return strcmp(a, b);
}

int main() {
    const char* str1 = "Первая";
    const char* str2 = "Вторая";

    int result = compareStrings(str1, str2);

    if (result < 0) {
        std::cout << "Первая меньше" << std::endl;
    } else if (result > 0) {
        std::cout << "Первая больше" << std::endl;
    } else {
        std::cout << "Равны" << std::endl;
    }

    return 0;
}
//2 
#include <iostream>

// Функция пузырьковой сортировки
void bubbleSort(int arr[], int n, bool (*comp)(int, int)) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (comp(arr[j], arr[j + 1])) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Компараторы
bool ascending(int a, int b) { return a > b; }
bool descending(int a, int b) { return a < b; }

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Исходный массив: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr, n, ascending);
    std::cout << "Отсортированный по возрастанию: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr, n, descending);
    std::cout << "Отсортированный по убыванию: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
//2.2 
#include <iostream>
#include <cmath>

// Функция интегрирования методом прямоугольников
double integrate(double a, double b, int n, double (*func)(double)) {
    double h = (b - a) / n;
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += func(a + i * h);
    }
    return sum * h;
}

// Тестовые функции
double sinFunc(double x) { return sin(x); }
double squareFunc(double x) { return x * x; }

int main() {
    double a = 0.0;
    double b = M_PI;
    int n = 1000;

    double resultSin = integrate(a, b, n, sinFunc);
    double resultSquare = integrate(a, b, n, squareFunc);

    std::cout << "Интеграл sin(x) от " << a << " до " << b << ": " << resultSin << std::endl;
    std::cout << "Интеграл x^2 от " << a << " до " << b << ": " << resultSquare << std::endl;

    return 0;
}
//4 
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
//4.2 
#include <iostream>
#include <typeinfo>

int main() {
    int a = 5;
    double b = 3.14;

    // Способ 1: decltype
    decltype(a + b) result1 = a + b;
    std::cout << "Тип result1: " << typeid(result1).name() << std::endl;

    // Способ 2: auto
    auto result2 = a + b;
    std::cout << "Тип result2: " << typeid(result2).name() << std::endl;

    return 0;
}
//5 
#include <iostream>

template <typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

int main() {
    int a = 5;
    double b = 3.14;

    auto result = add(a, b);
    std::cout << "Результат: " << result << std::endl;

    return 0;
}
//5.2 
#include <iostream>

double add(int a, double b) {
    return a + b;
}

int main() {
    // Обычный способ
    double (*func1)(int, double) = add;
    std::cout << "Результат func1: " << func1(5, 3.14) << std::endl;

    // Альтернативный синтаксис с авто и ->
    auto func2 = [](int a, double b) -> decltype(a + b) { return a + b; };
    std::cout << "Результат func2: " << func2(5, 3.14) << std::endl;

    return 0;
}