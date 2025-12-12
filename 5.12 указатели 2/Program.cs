//3
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int M, N;
    cout << "Введите размер массива A (M): ";
    cin >> M;
    cout << "Введите размер массива B (N): ";
    cin >> N;

    vector<int> A(M);
    vector<int> B(N);

    cout << "Введите элементы массива A: ";
    for (int i = 0; i < M; ++i)
    {
        cin >> A[i];
    }

    cout << "Введите элементы массива B: ";
    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
    }

    set<int> result;

    // Добавляем элементы из A
    for (int i = 0; i < M; ++i)
    {
        result.insert(A[i]);
    }

    // Добавляем элементы из B
    for (int i = 0; i < N; ++i)
    {
        result.insert(B[i]);
    }

    // Выводим результат
    cout << "Результат: ";
    for (const auto&elem : result) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
//4
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int M;
    cout << "Введите размер массива A (M): ";
    cin >> M;

    vector<int> A(M);

    cout << "Введите элементы массива A: ";
    for (int i = 0; i < M; ++i)
    {
        cin >> A[i];
    }

    int choice;
    cout << "Выберите, что удалить (1 - четные, 2 - нечетные): ";
    cin >> choice;

    vector<int> result;

    if (choice == 1)
    {
        // Удаляем четные элементы
        for (int i = 0; i < M; ++i)
        {
            if (A[i] % 2 != 0)
            {
                result.push_back(A[i]);
            }
        }
    }
    else if (choice == 2)
    {
        // Удаляем нечетные элементы
        for (int i = 0; i < M; ++i)
        {
            if (A[i] % 2 == 0)
            {
                result.push_back(A[i]);
            }
        }
    }
    else
    {
        cout << "Неверный выбор." << endl;
        return 1;
    }

    // Выводим результат
    cout << "Результат: ";
    for (const auto&elem : result) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}