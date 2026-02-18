#include <iostream>
#include <string>
#include <locale>

enum class months {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main() {
    std::setlocale(LC_ALL, "Russian");
    int month_number;
    const std::string names_of_months[12] = {
        "Январь",
        "Февраль",
        "Март",
        "Апрель",
        "Май",
        "Июнь",
        "Июль",
        "Август",
        "Сентябрь",
        "Октябрь",
        "Ноябрь",
        "Декабрь"
    };

    while (true) {
        std::cout << "Введите номер месяца. При вводе числа 0 происходит выход из консоли: ";
        std::cin >> month_number;

        // проверка на ввод числа из нужного диапазона
        if ((month_number < 1 || month_number > 12) && month_number != 0) {
            std::cout << "Неправильный номер. Нужно ввести число от 1 до 12\n";
            continue;
        }

        // вывод ошибки на консоль, если ввели не число
        if (!std::cin) {
            std::cout << "Ошибка: нужно ввести число\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        // выход из программы при вводе 0
        if (month_number == 0) {
            std::cout << "До свидания\n";
            break;
        }

        // преобразование к enum class
        months month = static_cast<months>(month_number);

        // индекс для массива, т.к. месяцы начинаются с 1
        int array_index = static_cast<int>(month) - 1;

        std::cout << names_of_months[array_index] << std::endl;
    }

    return 0;
}
