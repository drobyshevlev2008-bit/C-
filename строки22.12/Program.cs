//1
#include <iostream>
#include <string>
#include <algorithm>

using System.IO;

std::string reverse_string(const std::string& str)
{
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main()
{
    std::string input = "Hello World!";
    std::string output = reverse_string(input);
    std::cout << "Вход: " << input << std::endl;
    std::cout << "Выход: " << output << std::endl;
    return 0;
}
//2
#include <iostream>
#include <string>
#include <map>

struct SymbolCount
{
    int letters;
    int digits;
    int spaces;
    int others;
};

SymbolCount count_symbols(const std::string& str)
{
    SymbolCount result = { 0, 0, 0, 0 };
    for (char c : str) {
        if (isalpha(c)) {
            result.letters++;
        } else if (isdigit(c))
{
    result.digits++;
}
else if (isspace(c))
{
    result.spaces++;
}
else
{
    result.others++;
}
    }
    return result;
}

int main()
{
    std::string input = "Hello World 123!";
    SymbolCount output = count_symbols(input);
    std::cout << "Вход: " << input << std::endl;
    std::cout << "Выход: буквы " << output.letters << ", цифры " << output.digits << ", пробелы " << output.spaces << ", другие " << output.others << std::endl;
    return 0;
}
//3
#include <iostream>
#include <string>
#include <unordered_set>

std::string remove_duplicates(const std::string& str)
{
    std::unordered_set<char> seen;
    std::string result;
    for (char c : str) {
        if (seen.find(c) == seen.end()) {
            result += c;
seen.insert(c);
        }
    }
    return result;
}

int main()
{
    std::string input = "programming";
    std::string output = remove_duplicates(input);
    std::cout << "Вход: " << input << std::endl;
    std::cout << "Выход: " << output << std::endl;
    return 0;
}
//4
#include <iostream>
#include <string>

bool startsWith(const std::string& str, const std::string& prefix)
{
    return str.find(prefix) == 0;
}

bool endsWith(const std::string& str, const std::string& suffix)
{
    if (suffix.size() > str.size()) return false;
    return std::equal(suffix.rbegin(), suffix.rend(), str.rbegin());
}

int main()
{
    std::string str = "document.pdf";
    std::cout << "Строка: " << str << std::endl;
    std::cout << "startsWith(\"doc\"): " << (startsWith(str, "doc") ? "true" : "false") << std::endl;
    std::cout << "endsWith(\".pdf\"): " << (endsWith(str, ".pdf") ? "true" : "false") << std::endl;
    std::cout << "endsWith(\".txt\"): " << (endsWith(str, ".txt") ? "true" : "false") << std::endl;
    return 0;
}
//5
#include <iostream>
#include <string>
#include <vector>

std::string formatName(const std::string& fullName)
{
    std::vector < std::string> parts;
    std::string part;
    for (char c : fullName) {
        if (c == ' ') {
            parts.push_back(part);
part.clear();
        } else
{
    part += c;
}
    }
    if (!part.empty())
{
    parts.push_back(part);
}

if (parts.size() == 1)
{
    return parts[0];
}
else if (parts.size() == 2)
{
    return parts[1] + " " + parts[0];
}
else if (parts.size() == 3)
{
    return parts[2] + " " + parts[0].substr(0, 1) + "." + parts[1].substr(0, 1) + ".";
}
else
{
    return fullName;
}
}

int main()
{
    std::string input = "Иванов Иван Петрович";
    std::string output = formatName(input);
    std::cout << "Вход: " << input << std::endl;
    std::cout << "Выход: " << output << std::endl;
    return 0;
}