/*Задача 1. Месяцы
Напишите программу, которая спрашивает у пользователя номер месяца и выводит на экран название месяца, введённого пользователем.
Если пользователь ввёл некорректный номер месяца, сообщите ему об этом.
Спрашивайте пользователя до тех пор, пока он не введёт 0.
Для решения задачи воспользуйтесь перечислением.*/

#include<iostream>
#include<windows.h>
#include<string>

enum months {
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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int month_number;

	while (true) {
		std::cout << "Введите номер месяца. При вводе числа 0 происходит выход из консоли: ";
		std::cin >> month_number;

		if ((month_number < 1 || month_number > 12) && month_number != 0) {
			std::cout << "Неправильный номер. Нужно ввести число от 1 до 12" << std::endl;
			continue;
		}
		else {
			switch (static_cast<months>(month_number)) {      // преобразование к enum
			case january: std::cout << "Январь" << std::endl; break;
			case february: std::cout << "Февраль" << std::endl; break;
			case march: std::cout << "Март" << std::endl; break;
			case april: std::cout << "Апрель" << std::endl; break;
			case may: std::cout << "Май" << std::endl; break;
			case june: std::cout << "Июнь" << std::endl; break;
			case july: std::cout << "Июль" << std::endl; break;
			case august: std::cout << "Август" << std::endl; break;
			case september: std::cout << "Сентябрь" << std::endl; break;
			case october: std::cout << "Октябрь" << std::endl; break;
			case november: std::cout << "Ноябрь" << std::endl; break;
			case december: std::cout << "Декабрь" << std::endl; break;
			}
		}

		// вывод ошибки на консоль, если ввели не число
		if (!std::cin) {
			std::cout << "Ошибка, нужно ввести число" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		// выход из программы при вводе 0
		if (month_number == 0) {
			std::cout << "До свидания" << std::endl;
			break;
		}
	}
	return 0;
}