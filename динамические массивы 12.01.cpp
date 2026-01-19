//1
#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;
    std::cout << "Сумма: " << a + b << std::endl;
    return 0;
}
//1.2
#include <iostream>

int main() {
    double celsius;
    std::cout << "Введите температуру в градусах Цельсия: ";
    std::cin >> celsius;
    double fahrenheit = celsius * 9.0 / 5.0 + 32;
    std::cout << celsius << "°C = " << fahrenheit << "°F" << std::endl;
    return 0;
}
//2
#include <iostream>

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << number << " - чётное число." << std::endl;
    }
    else {
        std::cout << number << " - нечётное число." << std::endl;
    }
    return 0;
}
//2.2
#include <iostream>

int main() {
    int year;
    std::cout << "Введите год: ";
    std::cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        std::cout << year << " - високосный год." << std::endl;
    }
    else {
        std::cout << year << " - не високосный год." << std::endl;
    }
    return 0;
}
//3
#include <iostream>

int main() {
    int n;
    std::cout << "Введите число N: ";
    std::cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    std::cout << "Сумма чисел от 1 до " << n << " равна " << sum << "." << std::endl;
    return 0;
}
//3.2
#include <iostream>

int main() {
    int n;
    std::cout << "Введите число N (от 1 до 10): ";
    std::cin >> n;
    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }
    return 0;
}
//4
#include <iostream>
#include <climits>

int main() {
    int arr[10];
    std::cout << "Введите 10 целых чисел: ";
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
    }
    int min = INT_MAX;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    std::cout << "Минимальный элемент: " << min << std::endl;
    return 0;
}
//4.2
#include <iostream>

int main() {
    int matrix[3][3];
    std::cout << "Введите элементы матрицы 3x3: " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += matrix[i][j];
        }
        std::cout << "Сумма строки " << i + 1 << ": " << sum << std::endl;
    }
    return 0;
}
//5
#include <iostream>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;
    std::cout << "Наибольшее число: " << max(a, b) << std::endl;
    return 0;
}
//5.2
#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;
    if (isPrime(n)) {
        std::cout << n << " - простое число." << std::endl;
    }
    else {
        std::cout << n << " - не простое число." << std::endl;
    }
    return 0;
}
//6
#include <iostream>

int main() {
    int a = 10, b = 20;
    std::cout << "До: a = " << a << ", b = " << b << std::endl;
    int* pa = &a;
    int* pb = &b;
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    std::cout << "После: a = " << a << ", b = " << b << std::endl;
    return 0;
}
//6.2
#include <iostream>

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int sum = 0;
    int* p = arr;
    for (int i = 0; i < 5; ++i) {
        sum += *p;
        p++;
    }
    std::cout << "Сумма элементов: " << sum << std::endl;
    return 0;
}
//7
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Введите строку: ";
    std::getline(std::cin, str);
    std::cout << "Длина строки \"" << str << "\" равна " << str.length() << " символов." << std::endl;
    return 0;
}
//7.2
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Введите строку: ";
    std::getline(std::cin, str);
    int count = 0;
    for (char c : str) {
        if (std::isalpha(c)) {
            c = std::tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            }
        }
    }
    std::cout << "Количество гласных: " << count << std::endl;
    return 0;
}
//8
#include <iostream>

int main() {
    int arr[] = { 4, 6, 2, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / size;
    std::cout << "Среднее арифметическое: " << average << std::endl;
    return 0;
}
//8.2
#include <iostream>

bool isPalindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = { 1, 2, 3, 2, 1 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    if (isPalindrome(arr1, size1)) {
        std::cout << "Массив является палиндромом" << std::endl;
    }
    else {
        std::cout << "Массив не является палиндромом" << std::endl;
    }

    int arr2[] = { 1, 2, 3, 4, 5 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    if (isPalindrome(arr2, size2)) {
        std::cout << "Массив является палиндромом" << std::endl;
    }
    else {
        std::cout << "Массив не является палиндромом" << std::endl;
    }
    return 0;
}