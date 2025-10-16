//1
// #include <iostream>
//
//int main() {
//    int a, b, c;
//
//    // Ввод длин сторон треугольника
//    std::cout << "Введите длины сторон треугольника (a, b, c): ";
//    std::cin >> a >> b >> c;
//
//    // Проверка неравенства треугольника
//    if (a + b <= c || a + c <= b || b + c <= a) {
//        std::cout << "Не треугольник" << std::endl;
//    }
//    else {
//        // Определение типа треугольника
//        if (a == b && b == c) {
//            std::cout << "Равносторонний" << std::endl;
//        }
//        else if (a == b || a == c || b == c) {
//            std::cout << "Равнобедренный" << std::endl;
//        }
//        else {
//            std::cout << "Разносторонний" << std::endl;
//        }
//    }
//
//    return 0;
//}

//2
// #include <iostream>
//#include <cmath>
//
//int main() {
//    double a, b, c;
//    std::cin >> a >> b >> c;
//
//    double D = b * b - 4 * a * c;
//
//    if (D > 0) {
//        double x1 = (-b + sqrt(D)) / (2 * a);
//        double x2 = (-b - sqrt(D)) / (2 * a);
//        std::cout << "Два корня: " << x1 << ", " << x2 << std::endl;
//    }
//    else if (D == 0) {
//        double x = -b / (2 * a);
//        std::cout << "Один корень: " << x << std::endl;
//    }
//    else {
//        std::cout << "Нет корней" << std::endl;
//    }
//
//    return 0;
//}

//4
// #include <iostream>
//
//int main() {
//    int month, day;
//
//    // Ввод месяца и дня
//    std::cout << "Введите месяц (1-12) и день: ";
//    std::cin >> month >> day;
//
//    // Определение времени года
//    std::string season;
//    if (month == 12 || month == 1 || month == 2) {
//        season = "Зима";
//    }
//    else if (month >= 3 && month <= 5) {
//        season = "Весна";
//    }
//    else if (month >= 6 && month <= 8) {
//        season = "Лето";
//    }
//    else {
//        season = "Осень";
//    }
//
//    // Определение, является ли день последним днем месяца
//    bool isLastDay = false;
//    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {
//        isLastDay = true;
//    }
//    else if (month == 2 && day == 28) {
//        isLastDay = true;
//    }
//    else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day == 31) {
//        isLastDay = true;
//    }
//
//    // Вывод результата
//    std::cout << season << ". Это " << (isLastDay ? "" : "не ") << "последний день месяца." << std::endl;
//
//    return 0;
//}