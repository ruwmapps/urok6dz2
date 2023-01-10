// urok6dz2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include "Counter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter counter;

    std::string is_start_num;
    int start_num = 0;
    std::string command = "x";
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    while (std::cin >> is_start_num) {
        if (is_start_num == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> start_num;
            counter = Counter(start_num);
            break;
        }
        else if (is_start_num == "нет") {
            break;
        }
    }
    std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
    while (std::cin >> command) {

        if (command == "+") {
            counter.set_plus();
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        }
        else if (command == "-") {
            counter.set_minus();
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        }
        else if (command == "=") {
            std::cout << counter.get_result() << "\n";
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        }
        else if (command == "x") {
            std::cout << "До свидания!" << std::endl;
            break;
        }
    }
}
