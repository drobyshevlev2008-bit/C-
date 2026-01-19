//1
#include <iostream>

enum class ErrorCode {
    SUCCESS,
    FILE_NOT_FOUND,
    ACCESS_DENIED,
    OUT_OF_MEMORY,
    INVALID_PARAMETER
};

std::string getErrorMessage(ErrorCode error) {
    switch (error) {
    case ErrorCode::SUCCESS: return "Успешное выполнение";
    case ErrorCode::FILE_NOT_FOUND: return "Файл не найден";
    case ErrorCode::ACCESS_DENIED: return "Отказ в доступе";
    case ErrorCode::OUT_OF_MEMORY: return "Недостаточно памяти";
    case ErrorCode::INVALID_PARAMETER: return "Неверный параметр";
    default: return "Неизвестная ошибка";
    }
}

int main() {
    ErrorCode error = ErrorCode::FILE_NOT_FOUND;
    std::cout << getErrorMessage(error) << std::endl;
    return 0;
}


//2
#include <iostream>

enum class Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

std::string getDayName(Day day) {
    switch (day) {
    case Day::MONDAY: return "Понедельник";
    case Day::TUESDAY: return "Вторник";
    case Day::WEDNESDAY: return "Среда";
    case Day::THURSDAY: return "Четверг";
    case Day::FRIDAY: return "Пятница";
    case Day::SATURDAY: return "Суббота";
    case Day::SUNDAY: return "Воскресенье";
    default: return "Неизвестный день";
    }
}

bool isWeekend(Day day) {
    return day == Day::SATURDAY || day == Day::SUNDAY;
}

int main() {
    Day day = Day::SATURDAY;
    std::cout << getDayName(day) << std::endl;
    std::cout << "Является ли выходной: " << (isWeekend(day) ? "Да" : "Нет") << std::endl;
    return 0;
}

//3
#include <iostream>

enum class TrafficLight {
    RED,
    YELLOW,
    GREEN
};

TrafficLight nextState(TrafficLight current) {
    switch (current) {
    case TrafficLight::RED: return TrafficLight::GREEN;
    case TrafficLight::GREEN: return TrafficLight::YELLOW;
    case TrafficLight::YELLOW: return TrafficLight::RED;
    default: return TrafficLight::RED;
    }
}

int main() {
    TrafficLight current = TrafficLight::RED;
    std::cout << "Текущее состояние: " << static_cast<int>(current) << std::endl;
    current = nextState(current);
    std::cout << "Следующее состояние: " << static_cast<int>(current) << std::endl;
    return 0;
}

//4
#include <iostream>

enum DisplayFlags {
    SHOW_BORDER = 1 << 0,
    SHOW_GRID = 1 << 1,
    SHOW_NETWORK = 1 << 2,
    SHOW_LEGEND = 1 << 3
};

void displayOptions(int flags) {
    if (flags & SHOW_BORDER) std::cout << "Показать границу" << std::endl;
    if (flags & SHOW_GRID) std::cout << "Показать сетку" << std::endl;
    if (flags & SHOW_NETWORK) std::cout << "Показать сеть" << std::endl;
    if (flags & SHOW_LEGEND) std::cout << "Показать легенду" << std::endl;
}

int main() {
    int flags = SHOW_BORDER | SHOW_GRID;
    displayOptions(flags);
    return 0;
}


//5
#include <iostream>
#include <ctime>

enum class LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

void logMessage(LogLevel level, const std::string& message) {
    std::time_t now = std::time(nullptr);
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
    std::string levelName;
    switch (level) {
    case LogLevel::DEBUG: levelName = "DEBUG"; break;
    case LogLevel::INFO: levelName = "INFO"; break;
    case LogLevel::WARNING: levelName = "WARNING"; break;
    case LogLevel::ERROR: levelName = "ERROR"; break;
    }
    std::cout << buffer << " [" << levelName << "] " << message << std::endl;
}

int main() {
    logMessage(LogLevel::INFO, "Приложение запущено");
    return 0;
}