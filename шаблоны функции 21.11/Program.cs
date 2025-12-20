//1
#include <iostream>
#include <vector>

template<typename T>
T average(const std::vector<T>& arr) {
    T sum = 0;
for (const auto&value : arr) {
        sum += value;
    }
    return sum / arr.size();
}

int main()
{
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    std::cout << "Среднее арифметическое: " << average(arr) << std::endl;
    return 0;
}
//2
#include <iostream>
#include <cmath>

template<typename T>
void solve_linear(T a, T b) {
    if (a == 0) {
        if (b == 0) {
            std::cout << "Бесконечное количество решений" << std::endl;
        } else
{
    std::cout << "Нет решений" << std::endl;
}
    } else
{
    T x = -b / a;
    std::cout << "Корень: " << x << std::endl;
}
}

template<typename T>
void solve_quadratic(T a, T b, T c) {
    if (a == 0) {
        solve_linear(b, c);
    } else
{
    T discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        std::cout << "Нет действительных корней" << std::endl;
    }
    else if (discriminant == 0)
    {
        T x = -b / (2 * a);
        std::cout << "Один корень: " << x << std::endl;
    }
    else
    {
        T x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        T x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Два корня: " << x1 << " и " << x2 << std::endl;
    }
}
}

int main()
{
    solve_linear(2, -4); // Линейное уравнение
    solve_quadratic(1, -3, 2); // Квадратное уравнение
    return 0;
}
//3
#include <iostream>
#include <iomanip>
#include <cmath>

double round_to_precision(double value, int precision)
{
    double factor = std::pow(10.0, precision);
    return std::round(value * factor) / factor;
}

int main()
{
    double value = 3.14159265;
    int precision = 3;
    std::cout << "Округленное значение: " << round_to_precision(value, precision) << std::endl;
    return 0;
}
//4
//5
#include <iostream>
#include <iomanip>
#include <cmath>

double round_to_precision(double value, int precision)
{
    double factor = std::pow(10.0, precision);
    return std::round(value * factor) / factor;
}

int main()
{
    double value = 3.14159265;
    int precision = 3;
    std::cout << "Округленное значение: " << round_to_precision(value, precision) << std::endl;
    return 0;
}