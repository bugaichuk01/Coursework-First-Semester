#include <iostream>
#include "EnterAndExitProg.h"


void exit(bool x) {
	x = false;
	system("cls");
	exit(0);

};

void adminLog(std::string login, int logCount) {

	std::cout << "\t����� ���������� � ��������� ���������� ������ � ����������! ����� ���������� ������� ����� � ������.\n\n";
	std::cout << "\t\t\t\t\t\t*****************\n";
	std::cout << "\t\t\t\t\t\t* ������� ����� *\n";
	std::cout << "\t\t\t\t\t\t*****************\n";
	std::cout << "\t\t\t\t\t\t>";
	std::cin >> login;


	while (login != "nazar")
	{
		logCount++;
		std::cout << "\n\t\t\t\t\t\t����� ������ �����������!\n";
		std::cout << "\t\t\t\t\t________________________________________\n\n";
		if (logCount >= 3)                         // 3 ������� �� ���� ������
		{
			std::cout << "\t\t\t\t\t\t������ �����!";
			exit(0);
		};
		std::cout << "\t\t\t\t\t\t���������� ��� ���:\n\t\t\t\t\t\t>";
		std::cin >> login;

	};
};
	void adminPass(std::string password, int passCount) {

	std::cout << "\n";
	std::cout << "\t\t\t\t\t________________________________________\n\n\n";
	std::cout << "\t\t\t\t\t\t******************\n";
	std::cout << "\t\t\t\t\t\t* ������� ������ *\n";
	std::cout << "\t\t\t\t\t\t******************\n";
	std::cout << "\t\t\t\t\t\t>";
	std::cin >> password;

	while (password != "1")
	{
		passCount++;
		std::cout << "\n\t\t\t\t\t\t������ ������ �����������!\n";
		std::cout << "\t\t\t\t\t________________________________________\n\n";
		if (passCount >= 3)                         // 3 ������� �� ���� ������
		{
			std::cout << "������ �����!";
			exit(0);
		};
		std::cout << "\t\t\t\t\t\t���������� ��� ���:\n\t\t\t\t\t\t>";
		std::cin >> password;

	};
	std::cout << "\n\t\t\t\t\t\t���� ��������!\n\t\t\t\t\t\t������� Enter, ����� ����������..";
	std::cin.ignore();
	std::cin.get();
}