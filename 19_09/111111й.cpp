//Задание 1 
// #include <iostream>
//
//int main() {
//    int num;
//    std::cout << "Введите число: ";
//    std::cin >> num;
//    std::cout << (num % 2 ? "Нечётное" : "Четное") << std::endl;
//    return 0;
//}


//Задание 2
// #include <iostream>
//
//int main() {
//    int x, y;
//    std::cin >> x >> y;
//    std::cout << (x < y ? x : y) << std::endl;
//    return 0;
//}


//Задание 3 
// #include <iostream>
//
//int main() {
//    double number;
//
//    // Запрашиваем у пользователя число
//    std::cout << "Введите число: ";
//    std::cin >> number;
//
//    // Проверяем знак числа
//    if (number > 0) {
//        std::cout << "Число положительное." << std::endl;
//    }
//    else if (number < 0) {
//        std::cout << "Число отрицательное." << std::endl;
//    }
//    else {
//        std::cout << "Число равно нулю." << std::endl;
//    }
//
//    return 0;
//}

//Задание 4
// #include <iostream>
//
//int main() {
//    int a, b;
//
//    // Ввод двух чисел
//    std::cout << "Введите первое число: ";
//    std::cin >> a;
//    std::cout << "Введите второе число: ";
//    std::cin >> b;
//
//    // Проверка равенства чисел
//    if (a == b) {
//        std::cout << "Числа равны." << std::endl;
//    }
//    else {
//        // Если числа не равны, выводим их в порядке возрастания
//        if (a < b) {
//            std::cout << a << " " << b << std::endl;
//        }
//        else {
//            std::cout << b << " " << a << std::endl;
//        }
//    }
//
//    return 0;
//}