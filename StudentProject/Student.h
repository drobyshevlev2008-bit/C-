#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string fullName;          // ФИО
    std::string birthDate;          // дата рождения (можно хранить как строку)
    std::string phone;              // контактный телефон
    std::string city;               // город проживания
    std::string country;            // страна проживания
    std::string uniName;            // название учебного заведения
    std::string uniCity;            // город, где находится учебное заведение
    std::string uniCountry;         // страна учебного заведения
    std::string groupNumber;        // номер группы

public:
    // Конструкторы
    Student();                                          // по умолчанию
    Student(const std::string& fName, const std::string& bDate,
        const std::string& ph, const std::string& c, const std::string& cntr,
        const std::string& uName, const std::string& uCity,
        const std::string& uCntr, const std::string& group);

    // Методы ввода/вывода
    void inputData();           // ввод всех данных с клавиатуры
    void outputData() const;    // вывод всех данных на экран

    // Аксессоры (геттеры) – объявлены как inline
    std::string getFullName() const { return fullName; }
    std::string getBirthDate() const { return birthDate; }
    std::string getPhone() const { return phone; }
    std::string getCity() const { return city; }
    std::string getCountry() const { return country; }
    std::string getUniName() const { return uniName; }
    std::string getUniCity() const { return uniCity; }
    std::string getUniCountry() const { return uniCountry; }
    std::string getGroupNumber() const { return groupNumber; }

    // Аксессоры (сеттеры)
    void setFullName(const std::string& fName);
    void setBirthDate(const std::string& bDate);
    void setPhone(const std::string& ph);
    void setCity(const std::string& c);
    void setCountry(const std::string& cntr);
    void setUniName(const std::string& uName);
    void setUniCity(const std::string& uCity);
    void setUniCountry(const std::string& uCntr);
    void setGroupNumber(const std::string& group);
};

#endif