//1
#include <iostream>
using namespace std;

int main() {
    double size = 8;
    double arr[size] = { -5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4 };

    int positive = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive = arr[i];
            break;
        }
    }

    int negative = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negative = arr[i];
            break;
        }
    }

    cout << "Last positive number: " << positive << endl;
    cout << "First negative number: " << negative << endl;

    return 0;
}

//2
#include <iostream>
using namespace std;

int main() {
    int residents[40] = { /* массив с количеством жильцов в каждой квартире */ };
    int apartmentNumber;
    cout << "Введите номер квартиры: ";
    cin >> apartmentNumber;

    // Определение количества жильцов
    int index = apartmentNumber - 1;
    int residentsInApartment = residents[index];
    cout << "Количество жильцов в квартире " << apartmentNumber << ": " << residentsInApartment << endl;

    // Определение соседей
    int leftNeighbor = apartmentNumber - 1;
    int rightNeighbor = apartmentNumber + 1;
    if (leftNeighbor > 0) {
        cout << "Сосед слева (квартира " << leftNeighbor << "): " << residents[leftNeighbor - 1] << endl;
    }
    if (rightNeighbor <= 40) {
        cout << "Сосед справа (квартира " << rightNeighbor << "): " << residents[rightNeighbor - 1] << endl;
    }

    return 0;
}

//3
#include <iostream>
using namespace std;

int main() {
    int temperatures[31] = { /* массив с температурами за каждый день января */ };
    int threshold;
    cout << "Введите метку температуры: ";
    cin >> threshold;

    // Средняя температура
    double sum = 0;
    for (int i = 0; i < 31; i++) {
        sum += temperatures[i];
    }
    double average = sum / 31;
    cout << "Средняя температура за месяц: " << average << endl;

    // Количество дней с температурой ниже метки
    int count = 0;
    for (int i = 0; i < 31; i++) {
        if (temperatures[i] < threshold) {
            count++;
        }
    }
    cout << "Количество дней с температурой ниже " << threshold << ": " << count << endl;

    return 0;
}

//4
#include <iostream>
using namespace std;

int main() {
    int prices[10] = { /* массив с ценами автомобилей */ };

    // Поиск максимального значения
    int maxPrice = prices[0];
    int firstIndex = 0;
    int lastIndex = 0;
    for (int i = 1; i < 10; i++) {
        if (prices[i] > maxPrice) {
            maxPrice = prices[i];
            firstIndex = i;
            lastIndex = i;
        }
        else if (prices[i] == maxPrice) {
            lastIndex = i;
        }
    }

    // Сумма наиболее дорогого автомобиля
    int sum = maxPrice;
    cout << "Сумма наиболее дорогого автомобиля: " << sum << endl;

    // Номер первого и последнего такого автомобиля
    cout << "Номер первого такого автомобиля: " << firstIndex + 1 << endl;
    cout << "Номер последнего такого автомобиля: " << lastIndex + 1 << endl;

    return 0;
}

//5
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[10] = { /* массив с числами */ };
    unordered_map<int, int> frequency;

    // Подсчет частоты каждого элемента
    for (int i = 0; i < 10; i++) {
        frequency[arr[i]]++;
    }

    // Вывод повторяющихся значений
    for (auto& pair : frequency) {
        if (pair.second > 1) {
            cout << "Значение " << pair.first << " повторяется " << pair.second << " раз." << endl;
        }
    }

    return 0;
}

//6
#include <iostream>
using namespace std;

int main() {
    int A[10] = { /* массив A */ };
    int B[10] = { /* массив B */ };
    int X[20];

    // Чередование
    for (int i = 0; i < 10; i++) {
        X[2 * i] = A[i];
        X[2 * i + 1] = B[i];
    }
    cout << "Чередование: ";
    for (int i = 0; i < 20; i++) {
        cout << X[i] << " ";
    }
    cout << endl;

    // Следование
    for (int i = 0; i < 10; i++) {
        X[i] = A[i];
    }
    for (int i = 0; i < 10; i++) {
        X[i + 10] = B[i];
    }
    cout << "Следование: ";
    for (int i = 0; i < 20; i++) {
        cout << X[i] << " ";
    }
    cout << endl;

    return 0;
}

//7
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[10] = { /* массив с числами */ };
    unordered_map<int, int> frequency;

    // Подсчет частоты каждого элемента
    for (int i = 0; i < 10; i++) {
        frequency[arr[i]]++;
    }

    // Вывод повторяющихся значений
    for (auto& pair : frequency) {
        if (pair.second > 1) {
            cout << "Значение " << pair.first << " повторяется " << pair.second << " раз." << endl;
        }
    }

    return 0;
}