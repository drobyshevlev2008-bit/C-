#include <iostream>

int main() {
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
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
    int N;
    std::cout << "Введите число N: ";
    std::cin >> N;

    std::cout << "Простые числа до " << N << ": ";
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}



#include <iostream>

int main() {
    int M, N;
    std::cout << "Введите размер матрицы M и N: ";
    std::cin >> M >> N;

    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            if ((i + j) % 2 == 0) {
                std::cout << i * j << "\t";
            }
            else {
                std::cout << i + j << "\t";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}





#include <iostream>
#include <vector>
#include <algorithm>

void printPermutations(int N) {
    std::vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        numbers[i] = i + 1;
    }

    do {
        for (int num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(numbers.begin(), numbers.end()));
}

int main() {
    int N;
    std::cout << "Введите число N: ";
    std::cin >> N;

    printPermutations(N);

    return 0;
}