//1
#include <iostream>
using namespace std;

void copyArray(int* src, int* dest, int size)
{
    for (int i = 0; i < size; ++i)
    {
        *(dest + i) = *(src + i);
    }
}

int main()
{
    int src[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(src) / sizeof(src[0]);
    int* dest = new int[size];

    copyArray(src, dest, size);

    cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i)
    {
        cout << src[i] << " ";
    }
    cout << endl;

    cout << "Скопированный массив: ";
    for (int i = 0; i < size; ++i)
    {
        cout << dest[i] << " ";
    }
    cout << endl;

    delete[] dest;
    return 0;
}
//2
#include <iostream>
using namespace std;

void reverseArray(int* arr, int size)
{
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    cout << "Массив после изменения порядка: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//3
#include <iostream>
using namespace std;

void reverseCopy(int* src, int* dest, int size)
{
    for (int i = 0; i < size; ++i)
    {
        *(dest + i) = *(src + size - 1 - i);
    }
}

int main()
{
    int src[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(src) / sizeof(src[0]);
    int* dest = new int[size];

    reverseCopy(src, dest, size);

    cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i)
    {
        cout << src[i] << " ";
    }
    cout << endl;

    cout << "Скопированный массив в обратном порядке: ";
    for (int i = 0; i < size; ++i)
    {
        cout << dest[i] << " ";
    }
    cout << endl;

    delete[] dest;
    return 0;
}