/*Задача 3. Вывод структуры
Описание:
Создайте структуру для хранения адреса.
Структура должна содержать название города, улицы, номер дома, номер квартиры и индекс.
Создайте функцию для вывода структуры на консоль.
Протестируйте созданную функцию.
Создайте в коде экземпляры структуры, передайте их в функцию и выведите на консоль получившиеся экземпляры структуры. */

#include<iostream>
#include<string>
#include<Windows.h>

// создание экземпляра структуры
struct address {
	std::string city;
	std::string street;
	int house_number;
	int flat_number;
	int house_index;
};

// функция вывода структуры на консоль через ссылку
void address_output(const address& address_data) {
	std::cout << "Город: " << address_data.city << std::endl;
	std::cout << "Улица: " << address_data.street << std::endl;
	std::cout << "Номер дома: " << address_data.house_number << std::endl;
	std::cout << "Номер квартиры: " << address_data.flat_number << std::endl;
	std::cout << "Индекс: " << address_data.house_index << std::endl;
	std::cout << std::endl;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	// поля первого экземпляра указаны вручную 
	address address1;
	address1.city = "Анадырь";
	address1.street = "Отке";
	address1.house_number = 56;
	address1.flat_number = 1;
	address1.house_index = 689743;

	// иницализация второго экземляра структуры списком
	address address2 = {"Калининград", "Герцена", 54, 15, 953421};

	// применение функции вывода экземпляра структры
	address_output(address1);
	address_output(address2);

	return 0;
}