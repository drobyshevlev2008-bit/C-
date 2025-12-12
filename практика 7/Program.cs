//1
#include <iostream>
#include <string>
using namespace std;

string removeCharAt(string str, int pos)
{
    if (pos < 0 || pos >= str.length())
    {
        return str;
    }
    return str.erase(pos, 1);
}

int main()
{
    string str = "Hello, World!";
    int pos = 7;
    string result = removeCharAt(str, pos);
    cout << "Исходная строка: " << str << endl;
    cout << "Строка после удаления символа: " << result << endl;
    return 0;
}
//2
#include <iostream>
#include <string>
using namespace std;

string removeAllOccurrences(string str, char ch)
{
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return str;
}

int main()
{
    string str = "Hello, World!";
    char ch = 'o';
    string result = removeAllOccurrences(str, ch);
    cout << "Исходная строка: " << str << endl;
    cout << "Строка после удаления всех вхождений символа: " << result << endl;
    return 0;
}
//3
#include <iostream>
#include <string>
using namespace std;

string insertCharAt(string str, char ch, int pos)
{
    if (pos < 0 || pos > str.length())
    {
        return str;
    }
    return str.insert(pos, 1, ch);
}

int main()
{
    string str = "Hello, World!";
    char ch = 'X';
    int pos = 7;
    string result = insertCharAt(str, ch, pos);
    cout << "Исходная строка: " << str << endl;
    cout << "Строка после вставки символа: " << result << endl;
    return 0;
}
//4
#include <iostream>
#include <string>
using namespace std;

string replaceDotsWithExclamation(string str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (str[i] == '.')
        {
            str[i] = '!';
        }
    }
    return str;
}

int main()
{
    string str = "Hello, World. How are you?";
    string result = replaceDotsWithExclamation(str);
    cout << "Исходная строка: " << str << endl;
    cout << "Строка после замены точек: " << result << endl;
    return 0;
}
//5
#include <iostream>
#include <string>
using namespace std;

int countOccurrences(string str, char ch)
{
    int count = 0;
    for (char c : str)
    {
        if (c == ch)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    string str = "Hello, World!";
    char ch = 'l';
    int result = countOccurrences(str, ch);
    cout << "Символ '" << ch << "' встречается " << result << " раз." << endl;
    return 0;
}
//6
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void countLettersAndDigits(string str)
{
    int letters = 0, digits = 0;
    for (char c : str)
    {
        if (isalpha(c))
        {
            ++letters;
        }
        else if (isdigit(c))
        {
            ++digits;
        }
    }
    cout << "Количество букв: " << letters << endl;
    cout << "Количество цифр: " << digits << endl;
}

int main()
{
    string str = "Hello123World456";
    countLettersAndDigits(str);
    return 0;
}