#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

// Конструктор по умолчанию – заполняем всё пустыми строками
Student::Student()
    : fullName(""), birthDate(""), phone(""), city(""), country(""),
    uniName(""), uniCity(""), uniCountry(""), groupNumber("") {
}

// Конструктор с параметрами – используем список инициализации
Student::Student(const string& fName, const string& bDate,
    const string& ph, const string& c, const string& cntr,
    const string& uName, const string& uCity,
    const string& uCntr, const string& group)
    : fullName(fName), birthDate(bDate), phone(ph), city(c), country(cntr),
    uniName(uName), uniCity(uCity), uniCountry(uCntr), groupNumber(group) {
}

// Ввод данных с клавиатуры
void Student::inputData() {
    cout << "Введите ФИО студента: ";
    getline(cin, fullName);
    cout << "Введите дату рождения (например, 01.01.2000): ";
    getline(cin, birthDate);
    cout << "Введите контактный телефон: ";
    getline(cin, phone);
    cout << "Введите город проживания: ";
    getline(cin, city);
    cout << "Введите страну проживания: ";
    getline(cin, country);
    cout << "Введите название учебного заведения: ";
    getline(cin, uniName);
    cout << "Введите город учебного заведения: ";
    getline(cin, uniCity);
    cout << "Введите страну учебного заведения: ";
    getline(cin, uniCountry);
    cout << "Введите номер группы: ";
    getline(cin, groupNumber);
}

// Вывод данных на экран
void Student::outputData() const {
    cout << "ФИО: " << fullName << endl;
    cout << "Дата рождения: " << birthDate << endl;
    cout << "Телефон: " << phone << endl;
    cout << "Город проживания: " << city << endl;
    cout << "Страна проживания: " << country << endl;
    cout << "Учебное заведение: " << uniName << endl;
    cout << "Город уч. заведения: " << uniCity << endl;
    cout << "Страна уч. заведения: " << uniCountry << endl;
    cout << "Номер группы: " << groupNumber << endl;
}

// Реализация сеттеров
void Student::setFullName(const string& fName) {
    fullName = fName;
}

void Student::setBirthDate(const string& bDate) {
    birthDate = bDate;
}

void Student::setPhone(const string& ph) {
    phone = ph;
}

void Student::setCity(const string& c) {
    city = c;
}

void Student::setCountry(const string& cntr) {
    country = cntr;
}

void Student::setUniName(const string& uName) {
    uniName = uName;
}

void Student::setUniCity(const string& uCity) {
    uniCity = uCity;
}

void Student::setUniCountry(const string& uCntr) {
    uniCountry = uCntr;
}

void Student::setGroupNumber(const string& group) {
    groupNumber = group;
}