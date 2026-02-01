#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

struct Employee {
    std::string firstName;
    std::string lastName;
    int age;
    std::string position;
};

// Ввод данных о сотруднике
void inputEmployee(Employee& emp) {
    std::cout << "Введите имя: ";
    std::cin >> emp.firstName;
    std::cout << "Введите фамилию: ";
    std::cin >> emp.lastName;
    std::cout << "Введите возраст: ";
    std::cin >> emp.age;
    std::cout << "Введите должность: ";
    std::cin >> emp.position;
}

// Редактирование данных о сотруднике
void editEmployee(Employee& emp) {
    std::cout << "Редактирование данных о сотруднике:\n";
    inputEmployee(emp);
}

// Удаление сотрудника
void deleteEmployee(std::vector<Employee>& employees, const std::string& lastName) {
    employees.erase(std::remove_if(employees.begin(), employees.end(),
        [&lastName](const Employee& emp) {
            return emp.lastName == lastName;
        }), employees.end());
}

// Поиск сотрудника по фамилии
void searchByLastName(const std::vector<Employee>& employees, const std::string& lastName) {
    std::cout << "Результаты поиска:\n";
    for (const auto& emp : employees) {
        if (emp.lastName == lastName) {
            std::cout << "Имя: " << emp.firstName << ", Фамилия: " << emp.lastName
                     << ", Возраст: " << emp.age << ", Должность: " << emp.position << "\n";
        }
    }
}

// Сохранение данных в файл
void saveToFile(const std::vector<Employee>& employees, const std::string& filename) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Ошибка при открытии файла для записи.\n";
        return;
    }
    for (const auto& emp : employees) {
        file << emp.firstName << " " << emp.lastName << " " << emp.age << " " << emp.position << "\n";
    }
    file.close();
}

// Загрузка данных из файла
void loadFromFile(std::vector<Employee>& employees, const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Ошибка при открытии файла для чтения.\n";
        return;
    }
    Employee emp;
    while (file >> emp.firstName >> emp.lastName >> emp.age >> emp.position) {
        employees.push_back(emp);
    }
    file.close();
}

int main() {
    std::vector<Employee> employees;
    std::string filename = "employees.txt";

    // Загрузка данных при старте программы
    loadFromFile(employees, filename);

    // Пример работы с данными
    Employee newEmployee;
    inputEmployee(newEmployee);
    employees.push_back(newEmployee);

    // Поиск сотрудника по фамилии
    std::string searchLastName;
    std::cout << "Введите фамилию для поиска: ";
    std::cin >> searchLastName;
    searchByLastName(employees, searchLastName);

    // Редактирование данных
    std::string editLastName;
    std::cout << "Введите фамилию сотрудника для редактирования: ";
    std::cin >> editLastName;
    for (auto& emp : employees) {
        if (emp.lastName == editLastName) {
            editEmployee(emp);
            break;
        }
    }

    // Удаление сотрудника
    std::string deleteLastName;
    std::cout << "Введите фамилию сотрудника для удаления: ";
    std::cin >> deleteLastName;
    deleteEmployee(employees, deleteLastName);

    // Сохранение данных при выходе из программы
    saveToFile(employees, filename);

    return 0;
}