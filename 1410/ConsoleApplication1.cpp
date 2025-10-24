#include <iostream>
#include <algorithm>

// Задание 1: Сортировка по убыванию
void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Задание 2: Проверка упорядоченности по убыванию
bool isDescending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Задание 3: Пузырьковая сортировка
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Дополнительное задание 1: Сортировка нечетных и четных элементов
void sortOddEven(int arr[], int n) {
    // Сортируем нечетные элементы в возрастающем порядке
    for (int i = 1; i < n; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }

    // Сортируем четные элементы в убывающем порядке
    for (int i = 0; i < n; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (arr[i] < arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

// Дополнительное задание 2: Удаление дубликатов
int removeDuplicates(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1; // Возвращаем новый размер массива
}

// Дополнительное задание 3: Сортировка 0, 1, 2
void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        switch (arr[mid]) {
        case 0:
            std::swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            std::swap(arr[mid], arr[high--]);
            break;
        }
    }
}

int main() {
    int arr[] = { 5, 3, 8, 1, 2, 7, 4, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Задание 1: Сортировка по убыванию
    bubbleSortDescending(arr, n);
    std::cout << "Сортировка по убыванию: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Задание 2: Проверка упорядоченности по убыванию
    if (isDescending(arr, n)) {
        std::cout << "Массив упорядочен по убыванию." << std::endl;
    }
    else {
        std::cout << "Массив не упорядочен по убыванию." << std::endl;
    }

    // Задание 3: Пузырьковая сортировка
    bubbleSort(arr, n);
    std::cout << "Пузырьковая сортировка: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Дополнительное задание 1: Сортировка нечетных и четных элементов
    sortOddEven(arr, n);
    std::cout << "Сортировка нечетных и четных элементов: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Дополнительное задание 2: Удаление дубликатов
    int newSize = removeDuplicates(arr, n);
    std::cout << "Массив после удаления дубликатов: ";
    for (int i = 0; i < newSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Дополнительное задание 3: Сортировка 0, 1, 2
    int arr2[] = { 2, 0, 1, 2, 1, 0 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    sort012(arr2, n2);
    std::cout << "Сортировка 0, 1, 2: ";
    for (int i = 0; i < n2; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}