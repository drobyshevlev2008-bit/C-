//#include <iostream>
//
//int main() {
//    int grades[5];
//    int sum = 0;
//
//    // Ввод оценок
//    std::cout << "Введите 5 оценок студента: ";
//    for (int i = 0; i < 5; ++i) {
//        std::cin >> grades[i];
//        sum += grades[i];
//    }
//
//    // Вычисление среднего балла
//    double average = static_cast<double>(sum) / 5;
//
//    // Проверка допуска к экзамену
//    if (average >= 4) {
//        std::cout << "Студент допущен к экзамену." << std::endl;
//    }
//    else {
//        std::cout << "Студент не допущен к экзамену." << std::endl;
//    }
//
//    return 0;
//}
//
//#include <iostream>
//
//int main() {
//    int number;
//
//    // Ввод числа
//    std::cout << "Введите число: ";
//    std::cin >> number;
//
//    // Проверка четности и выполнение операции
//    if (number % 2 == 0) {
//        number *= 3;
//    }
//    else {
//        number /= 2;
//    }
//
//    // Вывод результата
//    std::cout << "Результат: " << number << std::endl;
//
//    return 0;
//}
//
//#include <iostream>
//
//int main() {
//    double a, b;
//    char op;
//    std::cin >> a >> b >> op;
//
//    switch (op) {
//    case '+': std::cout << a + b << std::endl; break;
//    case '-': std::cout << a - b << std::endl; break;
//    case '*': std::cout << a * b << std::endl; break;
//    case '/': std::cout << a / b << std::endl; break;
//    default: std::cout << "Ошибка" << std::endl;
//    }
//
//    return 0;
//}