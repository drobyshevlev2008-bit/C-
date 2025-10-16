#include <iostream>
#include <cstdlib> // Для функции system("cls") для очистки экрана

int main() {
    int num1, num2, answer, correctAnswer;
    int score = 0;
    int totalQuestions = 10;

    std::cout << "Добро пожаловать в игру 'Таблица умножения'!\n";
    std::cout << "Введите два числа от 1 до 10:\n";
    std::cin >> num1 >> num2;

    for (int i = 1; i <= totalQuestions; ++i) {
        correctAnswer = num1 * num2;
        std::cout << "Вопрос " << i << ": " << num1 << " * " << num2 << " = ";
        std::cin >> answer;

        if (answer == correctAnswer) {
            std::cout << "Правильно!\n";
            score++;
        }
        else {
            std::cout << "Неправильно. Правильный ответ: " << correctAnswer << "\n";
        }

        // Очистка экрана для следующего вопроса
        system("cls");
    }

    std::cout << "Игра окончена!\n";
    std::cout << "Ваш результат: " << score << " из " << totalQuestions << "\n";

    return 0;
}


#include <iostream>

int main() {
    int size = 5; // Размер ромба (количество строк в верхней половине)

    // Верхняя половина ромба
    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= size - i; ++j) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    // Нижняя половина ромба
    for (int i = size - 1; i >= 1; --i) {
        for (int j = 1; j <= size - i; ++j) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}

