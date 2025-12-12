//1
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

    // Добавляем элементы из A, которые не входят в B
    for (int i = 0; i < M; ++i)
    {
        if (find(B.begin(), B.end(), A[i]) == B.end())
        {
            result.insert(A[i]);
        }
    }

    // Выводим результат
    cout << "Результат: ";
    for (const auto&elem : result) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
//2
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

    // Добавляем элементы из A, которые не входят в B
    for (int i = 0; i < M; ++i)
    {
        if (find(B.begin(), B.end(), A[i]) == B.end())
        {
            result.insert(A[i]);
        }
    }

    // Добавляем элементы из B, которые не входят в A
    for (int i = 0; i < N; ++i)
    {
        if (find(A.begin(), A.end(), B[i]) == A.end())
        {
            result.insert(B[i]);
        }
    }

    // Выводим результат
    cout << "Результат: ";
    for (const auto&elem : result) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}