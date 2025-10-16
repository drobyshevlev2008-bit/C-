#include <iostream>

int main() {
    int A = 10, B = 15;

    for (int i = A; i <= B; ++i) {
        int count = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                count++;
            }
        }
        std::cout << "Число " << i << " имеет " << count << " делителей." << std::endl;
    }

    return 0;
}


#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    for (int i = 2; i <= 1000; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}



#include <iostream>

int main() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if ((i + j) % 2 == 0) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}



#include <iostream>

int main() {
    int count = 0;
    for (int i = 100; i <= 999; ++i) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if (a != b && a != c && b != c) {
            std::cout << i << std::endl;
            count++;
        }
    }

    int total_time = count * 3;
    std::cout << "Всего комбинаций: " << count << std::endl;
    std::cout << "Время на открытие: " << total_time << " секунд" << std::endl;

    return 0;
}





#include <iostream>

int main() {
    int employees;
    std::cout << "Введите количество сотрудников: ";
    std::cin >> employees;

    double totalSalary = 0;
    for (int i = 1; i <= employees; ++i) {
        double salary;
        std::cout << "Введите зарплату сотрудника №" << i << " за квартал: ";
        std::cin >> salary;
        totalSalary += salary;
    }

    std::cout << "Общая зарплата за квартал: " << totalSalary << std::endl;

    return 0;
}