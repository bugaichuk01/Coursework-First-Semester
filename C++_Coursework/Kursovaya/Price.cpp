#include "Price.h"

void Output(int gym, int sauna, int swimmingPool, int fitness) {

	system("cls");
	cout << "\t\t\t\t\t\t****************\n";
	cout << "\t\t\t\t\t\t* ���� ������� *\n";
	cout << "\t\t\t\t\t\t****************\n\n";
	cout << "\n\t\t\t\t\t        �������� " << gym << " ���.";
	cout << "\n\t\t\t\t\t        ����� " << sauna << " ���.";
	cout << "\n\t\t\t\t\t        ������� " << swimmingPool << " ���.";
	cout << "\n\t\t\t\t\t        ������ ��� " << fitness << " ���.";
	cout << "\n\n";
	system("pause");
}

void firstOutput() {

	cout << "\t\t\t\t\t\t**************\n";
	cout << "\t\t\t\t\t\t* ����� ���� *\n";
	cout << "\t\t\t\t\t\t**************\n\n";
	cout << "\t\t\t\t\t   ���������� ������ ��� ������������ ��� �����:" << "\n\n";
	cout << "\t\t\t\t\t   1 - ��� �������\n";
	cout << "\t\t\t\t\t   2 - ������\n";
	cout << "\t\t\t\t\t   3 - �������\n";
	cout << "\t\t\t\t\t   4 - ������\n";
	cout << "\t\t\t\t\t   5 - ��������� ������ ( � ����� )\n";
	cout << "\t\t\t\t\t   6 - �����\n\n";
	cout << "\t\t\t\t\t   ��� �����: ";
};

void OutputBronze(int gym, int sauna, int swimmingPool, int fitness) {

	system("cls");
	cout << "\t\t\t\t\t\t****************\n";
	cout << "\t\t\t\t\t\t* ���� ������� *\n";
	cout << "\t\t\t\t\t\t****************\n\n";
	cout << "\n\t\t\t\t\t        �������� " << gym - (gym * 15) / 100 << " ���.";
	cout << "\n\t\t\t\t\t        ����� " << sauna - (sauna * 15) / 100 << " ���.";
	cout << "\n\t\t\t\t\t        ������� " << swimmingPool - (swimmingPool * 15) / 100 << " ���.";
	cout << "\n\t\t\t\t\t        ������ ��� " << fitness - (fitness * 15) / 100 << " ���.";
	cout << "\n";
	system("pause");
};

void OutputSilver(int gym, int sauna, int swimmingPool, int fitness) {

	system("cls");
	cout << "\t\t\t\t\t\t****************\n";
	cout << "\t\t\t\t\t\t* ���� ������� *\n";
	cout << "\t\t\t\t\t\t****************\n\n";
	cout << "\n\t\t\t\t\t        �������� " << gym - (gym * 30) / 100 << " ���.";
	cout << "\n\t\t\t\t\t        ����� " << sauna - (sauna * 30) / 100 << " ���.";
	cout << "\n\t\t\t\t\t        ������� " << swimmingPool - (swimmingPool * 30) / 100 << " ���.";
	cout << "\n\t\t\t\t\t        ������ ��� " << fitness - (fitness * 30) / 100 << " ���.";
	cout << "\n";
	system("pause");
};

void OutputGold(int gym, int sauna, int swimmingPool, int fitness) {

	system("cls");
	cout << "\t\t\t\t\t\t****************\n";
	cout << "\t\t\t\t\t\t* ���� ������� *\n";
	cout << "\t\t\t\t\t\t****************\n\n";
	cout << "\n\t\t\t\t\t        �������� " << gym - (gym * 50) / 100 << " ���.";
	cout << "\n\t\t\t\t\t        ����� " << sauna - (sauna * 50) / 100 << " ���.";
	cout << "\n\t\t\t\t\t        ������� " << swimmingPool - (swimmingPool * 50) / 100 << " ���.";
	cout << "\n\t\t\t\t\t        ������ ��� " << fitness - (fitness * 50) / 100 << " ���.";
	cout << "\n";
	system("pause");
};

void priceRooms1(int oneRoom, int twoRoom, int luksRoom) {

	system("cls");
	cout << "\n\n\t\t\t\t\t  ������������� ����� - " << oneRoom << " ���.\n";
	cout << "\t\t\t\t\t  ������������� ����� - " << twoRoom << " ���.\n";
	cout << "\t\t\t\t\t  ����� ���� - " << luksRoom << " ���.\n\n\n";
	system("pause");
};

void PriceFail(int ch) {
	while (cin.fail() || (ch < 1) || (ch > 6))
	{
		cin.clear(); cin.ignore();
		cout << "\n\t\t\t\t\t   �������������� ������, ���������� ��� ���: "; cin >> ch;
	}
};