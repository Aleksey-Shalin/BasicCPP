/*Задача 2. Счета
Описание:
Создайте структуру для хранения информации о банковском счёте. Она должна хранить номер счёта(целое число), 
имя владельца(строка) и количество денег на счету (дробное число).
Создайте функцию для изменения баланса счёта. Функция должна принимать экземпляр структуры банковского счёта и новую сумму.
Попросите пользователя заполнить поля экземпляра структуры, сообщить новый баланс счёта 
и выведите обновлённый экземпляр структуры на консоль. */

#include<iostream>
#include<string>
#include<Windows.h>

// создание структуры счёта
struct bank_account
{
	int account_number;
	std::string name;
	double money_balance;
};

// функция для изменения баланса счёта через указатель
void update_money_balance(bank_account* bank_account, double updated_balance) {
	bank_account->money_balance = updated_balance;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	double updated_balance;
	bank_account personal_account;

	// ввод первоначальных данных
	std::cout << "Введите номер счёта: ";
	std::cin >> personal_account.account_number;
	std::cout << "Введите имя владельца: ";
	std::getline(std::cin >> std::ws, personal_account.name);
	std::cout << "Введите баланс: ";
	std::cin >> personal_account.money_balance;

	// ввод обновлённого баланса и применение функции для изменения баланса
	std::cout << "Введите новый баланс: ";
	std::cin >> updated_balance;
	update_money_balance(&personal_account, updated_balance);

	// вывод на консоль обновлённых данных счёта
	std::cout << "Ваш счёт: "
		<< personal_account.account_number << ", " << personal_account.name << ", " << personal_account.money_balance << std::endl;

	return 0;
}