#include <iostream>
#include "EnterAndExitProg.h"


void exit(bool x) {
	x = false;
	system("cls");
	exit(0);

};

void adminLog(std::string login, int logCount) {

	std::cout << "\tДобро пожаловать в программу бронировки номера в гостиннице! Чтобы продолжить введите логин и пароль.\n\n";
	std::cout << "\t\t\t\t\t\t*****************\n";
	std::cout << "\t\t\t\t\t\t* Введите логин *\n";
	std::cout << "\t\t\t\t\t\t*****************\n";
	std::cout << "\t\t\t\t\t\t>";
	std::cin >> login;


	while (login != "nazar")
	{
		logCount++;
		std::cout << "\n\t\t\t\t\t\tЛогин введен некорректно!\n";
		std::cout << "\t\t\t\t\t________________________________________\n\n";
		if (logCount >= 3)                         // 3 попытки на ввод пароля
		{
			std::cout << "\t\t\t\t\t\tОШИБКА ВХОДА!";
			exit(0);
		};
		std::cout << "\t\t\t\t\t\tПопробуйте еще раз:\n\t\t\t\t\t\t>";
		std::cin >> login;

	};
};
	void adminPass(std::string password, int passCount) {

	std::cout << "\n";
	std::cout << "\t\t\t\t\t________________________________________\n\n\n";
	std::cout << "\t\t\t\t\t\t******************\n";
	std::cout << "\t\t\t\t\t\t* Введите пароль *\n";
	std::cout << "\t\t\t\t\t\t******************\n";
	std::cout << "\t\t\t\t\t\t>";
	std::cin >> password;

	while (password != "1")
	{
		passCount++;
		std::cout << "\n\t\t\t\t\t\tПароль введен некорректно!\n";
		std::cout << "\t\t\t\t\t________________________________________\n\n";
		if (passCount >= 3)                         // 3 попытки на ввод пароля
		{
			std::cout << "ОШИБКА ВХОДА!";
			exit(0);
		};
		std::cout << "\t\t\t\t\t\tПопробуйте еще раз:\n\t\t\t\t\t\t>";
		std::cin >> password;

	};
	std::cout << "\n\t\t\t\t\t\tВход выполнен!\n\t\t\t\t\t\tНажмите Enter, чтобы продолжить..";
	std::cin.ignore();
	std::cin.get();
}