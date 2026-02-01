//1 
#include <iostream>
#include <cmath>

struct Complex {
    double real;
    double imag;

    // Конструктор
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Перегрузка операторов
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
                     real * other.imag + imag * other.real);
    }

    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
                     (imag * other.real - real * other.imag) / denominator);
    }

    // Вывод комплексного числа
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << (c.imag >= 0 ? " + " : " - ") << std::abs(c.imag) << "i";
        return os;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    Complex quot = c1 / c2;

    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Разность: " << diff << std::endl;
    std::cout << "Произведение: " << prod << std::endl;
    std::cout << "Частное: " << quot << std::endl;

    return 0;
}
//2 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Car {
    std::string brand;
    std::string model;
    double length;
    double height;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    std::string color;
    std::string bodyType;

    // Конструктор
    Car(const std::string& b, const std::string& m, double l, double h, double ev, double ep, double wd, const std::string& c, const std::string& bt)
        : brand(b), model(m), length(l), height(h), engineVolume(ev), enginePower(ep), wheelDiameter(wd), color(c), bodyType(bt) {}
};

// Функция для задания значений
void setValues(Car& car) {
    std::cout << "Введите марку автомобиля: ";
    std::cin >> car.brand;
    std::cout << "Введите модель автомобиля: ";
    std::cin >> car.model;
    std::cout << "Введите длину автомобиля: ";
    std::cin >> car.length;
    std::cout << "Введите высоту автомобиля: ";
    std::cin >> car.height;
    std::cout << "Введите объем двигателя: ";
    std::cin >> car.engineVolume;
    std::cout << "Введите мощность двигателя: ";
    std::cin >> car.enginePower;
    std::cout << "Введите диаметр колес: ";
    std::cin >> car.wheelDiameter;
    std::cout << "Введите цвет автомобиля: ";
    std::cin >> car.color;
    std::cout << "Введите тип кузова: ";
    std::cin >> car.bodyType;
}

// Функция для отображения значений
void displayValues(const Car& car) {
    std::cout << "Марка: " << car.brand << std::endl;
    std::cout << "Модель: " << car.model << std::endl;
    std::cout << "Длина: " << car.length << std::endl;
    std::cout << "Высота: " << car.height << std::endl;
    std::cout << "Объем двигателя: " << car.engineVolume << std::endl;
    std::cout << "Мощность двигателя: " << car.enginePower << std::endl;
    std::cout << "Диаметр колес: " << car.wheelDiameter << std::endl;
    std::cout << "Цвет: " << car.color << std::endl;
    std::cout << "Тип кузова: " << car.bodyType << std::endl;
}

// Функция для поиска значений
void findValues(const std::vector<Car>& cars, const std::string& brand) {
    for (const auto& car : cars) {
        if (car.brand == brand) {
            displayValues(car);
        }
    }
}

int main() {
    std::vector<Car> cars;

    // Добавление автомобилей
    cars.push_back(Car("Toyota", "Camry", 4.87, 1.47, 2.5, 203, 17, "White", "Sedan"));
    cars.push_back(Car("BMW", "X5", 4.92, 1.77, 3.0, 340, 19, "Black", "SUV"));

    // Задание значений для нового автомобиля
    Car newCar;
    setValues(newCar);
    cars.push_back(newCar);

    // Отображение значений всех автомобилей
    for (const auto& car : cars) {
        displayValues(car);
        std::cout << std::endl;
    }

    // Поиск автомобиля по марке
    std::string searchBrand;
    std::cout << "Введите марку для поиска: ";
    std::cin >> searchBrand;
    findValues(cars, searchBrand);

    return 0;
}