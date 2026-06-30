#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>

int function(const std::string& str, const int& forbidden_length) {
    if (str.length() == forbidden_length) {
        throw "Вы ввели слово запретной длины! До свидания";
    }

    return str.length();
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int forbidden_length{};
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    std::string str{};
    do {
        std::cout << "Введите слово: ";
        std::cin >> str;

        try {
            std::cout << "Длина слова \"" << str << "\" равна " << function(str, forbidden_length) << std::endl;
        }
        catch (const char* err) {
            std::cout << err << std::endl;
            break;
        }
    } while (true);

    return EXIT_SUCCESS;
}