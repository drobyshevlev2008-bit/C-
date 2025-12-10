//1
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int mobileNumbers[] = { 1234567890, 9876543210, 5555555555 };
    int homeNumbers[] = { 1112223333, 4445556666, 7778889999 };
    int n = sizeof(mobileNumbers) / sizeof(mobileNumbers[0]);

    while (true)
    {
        cout << "Menu:\n";
        cout << "1. Sort by mobile numbers\n";
        cout << "2. Sort by home numbers\n";
        cout << "3. Display data\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice)
        {
            case 1:
                sort(mobileNumbers, mobileNumbers + n);
                cout << "Sorted by mobile numbers.\n";
                break;
            case 2:
                sort(homeNumbers, homeNumbers + n);
                cout << "Sorted by home numbers.\n";
                break;
            case 3:
                cout << "Mobile Numbers: ";
                for (int i = 0; i < n; i++)
                {
                    cout << mobileNumbers[i] << " ";
                }
                cout << "\nHome Numbers: ";
                for (int i = 0; i < n; i++)
                {
                    cout << homeNumbers[i] << " ";
                }
                cout << endl;
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
//2
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//3
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//4
//не получилось 
