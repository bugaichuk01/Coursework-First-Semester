#include "Price.h"

void Output(int gym, int sauna, int swimmingPool, int fitness) {

	system("cls");
	cout << "\t\t\t\t\t\t****************\n";
	cout << "\t\t\t\t\t\t* Виды занятий *\n";
	cout << "\t\t\t\t\t\t****************\n\n";
	cout << "\n\t\t\t\t\t        Спортзал " << gym << " руб.";
	cout << "\n\t\t\t\t\t        Сауна " << sauna << " руб.";
	cout << "\n\t\t\t\t\t        Бассейн " << swimmingPool << " руб.";
	cout << "\n\t\t\t\t\t        Фитнес зал " << fitness << " руб.";
	cout << "\n\n";
	system("pause");
}

void firstOutput() {

	cout << "\t\t\t\t\t\t**************\n";
	cout << "\t\t\t\t\t\t* Прайс лист *\n";
	cout << "\t\t\t\t\t\t**************\n\n";
	cout << "\t\t\t\t\t   Выберерите статус или интересующий вас пункт:" << "\n\n";
	cout << "\t\t\t\t\t   1 - Нет статуса\n";
	cout << "\t\t\t\t\t   2 - Бронза\n";
	cout << "\t\t\t\t\t   3 - Серебро\n";
	cout << "\t\t\t\t\t   4 - Золото\n";
	cout << "\t\t\t\t\t   5 - Стоимость комнат ( в месяц )\n";
	cout << "\t\t\t\t\t   6 - Выход\n\n";
	cout << "\t\t\t\t\t   Ваш выбор: ";
};

void OutputBronze(int gym, int sauna, int swimmingPool, int fitness) {

	system("cls");
	cout << "\t\t\t\t\t\t****************\n";
	cout << "\t\t\t\t\t\t* Виды занятий *\n";
	cout << "\t\t\t\t\t\t****************\n\n";
	cout << "\n\t\t\t\t\t        Спортзал " << gym - (gym * 15) / 100 << " руб.";
	cout << "\n\t\t\t\t\t        Сауна " << sauna - (sauna * 15) / 100 << " руб.";
	cout << "\n\t\t\t\t\t        Бассейн " << swimmingPool - (swimmingPool * 15) / 100 << " руб.";
	cout << "\n\t\t\t\t\t        Фитнес зал " << fitness - (fitness * 15) / 100 << " руб.";
	cout << "\n";
	system("pause");
};

void OutputSilver(int gym, int sauna, int swimmingPool, int fitness) {

	system("cls");
	cout << "\t\t\t\t\t\t****************\n";
	cout << "\t\t\t\t\t\t* Виды занятий *\n";
	cout << "\t\t\t\t\t\t****************\n\n";
	cout << "\n\t\t\t\t\t        Спортзал " << gym - (gym * 30) / 100 << " руб.";
	cout << "\n\t\t\t\t\t        Сауна " << sauna - (sauna * 30) / 100 << " руб.";
	cout << "\n\t\t\t\t\t        Бассейн " << swimmingPool - (swimmingPool * 30) / 100 << " руб.";
	cout << "\n\t\t\t\t\t        Фитнес зал " << fitness - (fitness * 30) / 100 << " руб.";
	cout << "\n";
	system("pause");
};

void OutputGold(int gym, int sauna, int swimmingPool, int fitness) {

	system("cls");
	cout << "\t\t\t\t\t\t****************\n";
	cout << "\t\t\t\t\t\t* Виды занятий *\n";
	cout << "\t\t\t\t\t\t****************\n\n";
	cout << "\n\t\t\t\t\t        Спортзал " << gym - (gym * 50) / 100 << " руб.";
	cout << "\n\t\t\t\t\t        Сауна " << sauna - (sauna * 50) / 100 << " руб.";
	cout << "\n\t\t\t\t\t        Бассейн " << swimmingPool - (swimmingPool * 50) / 100 << " руб.";
	cout << "\n\t\t\t\t\t        Фитнес зал " << fitness - (fitness * 50) / 100 << " руб.";
	cout << "\n";
	system("pause");
};

void priceRooms1(int oneRoom, int twoRoom, int luksRoom) {

	system("cls");
	cout << "\n\n\t\t\t\t\t  Однокомнатный номер - " << oneRoom << " руб.\n";
	cout << "\t\t\t\t\t  Двухкомнатный номер - " << twoRoom << " руб.\n";
	cout << "\t\t\t\t\t  Номер люкс - " << luksRoom << " руб.\n\n\n";
	system("pause");
};

void PriceFail(int ch) {
	while (cin.fail() || (ch < 1) || (ch > 6))
	{
		cin.clear(); cin.ignore();
		cout << "\n\t\t\t\t\t   Несуществубщий символ, попробуйте еще раз: "; cin >> ch;
	}
};