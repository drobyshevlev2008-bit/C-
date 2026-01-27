#include <iostream>
#include <string>
// Двухмерный массив строк
std::string array[3][3] = {
    {"строка1", "строка2", "строка3"},
    {"строка4", "строка5", "строка6"},
    {"строка7", "строка8", "строка9"}
};
// Задание 1: Добавить строку в конец двухмерного массива
void addToEnd() {
    std::string newString;
    std::cout << "Введите строку для добавления в конец массива: ";
    std::cin >> newString;
    array[2][2] = newString; // Добавляем в последнюю ячейку
    std::cout << "Строка добавлена в конец массива." << std::endl;
}
// Задание 2: Добавить строку в начало двухмерного массива
void addToStart() {
    std::string newString;
    std::cout << "Введите строку для добавления в начало массива: ";
    std::cin >> newString;
    // Сдвигаем все строки на одну позицию вправо
    for (int i = 2; i > 0; --i) {
        for (int j = 2; j >= 0; --j) {
            array[i][j] = array[i-1][j];
        }
    }
    array[0][0] = newString; // Добавляем в первую ячейку
    std::cout << "Строка добавлена в начало массива." << std::endl;
}
// Задание 3: Добавить строку в указанную позицию двухмерного массива
void addToPosition() {
    std::string newString;
    int row, col;
    std::cout << "Введите строку для добавления: ";
    std::cin >> newString;
    std::cout << "Введите номер строки (0-2): ";
    std::cin >> row;
    std::cout << "Введите номер столбца (0-2): ";
    std::cin >> col;
    array[row][col] = newString;
    std::cout << "Строка добавлена в указанную позицию." << std::endl;
}
// Задание 4: Удалить строку по указанному номеру
void removeByNumber() {
    int row, col;
    std::cout << "Введите номер строки (0-2): ";
    std::cin >> row;
    std::cout << "Введите номер столбца (0-2): ";
    std::cin >> col;
    array[row][col].clear(); // Очищаем строку
    std::cout << "Строка удалена." << std::endl;
}

int main() {
    int choice;
    std::cout << "Выберите задание (1-4): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            addToEnd();
            break;
        case 2:
            addToStart();
            break;
        case 3:
            addToPosition();
            break;
        case 4:
            removeByNumber();
            break;
        default:
            std::cout << "Неверный выбор." << std::endl;
            break;
    }

    return 0;
}