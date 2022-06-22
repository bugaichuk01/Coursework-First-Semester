
#include <iostream>
#ifndef FAILS_H
#define FAILS_H

using namespace std;

void failCond() {
	while (cin.fail() || condYN > 1 || condYN < 0) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точный номер (0-1): ";
		cin >> condYN;
	};
}
void failWifi() {
	while (cin.fail() || wifiYN > 1 || wifiYN < 0) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точный номер (0-1): ";
		cin >> wifiYN;
	};
}
void failFreadge() {
	while (cin.fail() || freadgeYN > 1 || freadgeYN < 0) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точный номер (0-1): ";
		cin >> freadgeYN;
	};
}
void failRoom() {
	while (cin.fail() || roomNum < 1 || roomNum > 3) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точный номер (1-3): ";
		cin >> roomNum;
	};
}
void failNum() {
	while (cin.fail()) {
		cin.clear();
		cin.ignore();
		cout << "\tВведите номер телефона еще раз: ";
		cin >> telNum;
	};
}
void failDateST() {
	while (cin.fail() || startDate > 31 || startDate < 1) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точную дату (1-31): ";
		cin >> startDate;
	};
}
void failMonthST() {
	while (cin.fail() || startMonth > 12 || startMonth < 1) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точную дату (1-12): ";
		cin >> startMonth;
	};
}
void failYearST() {
	while (cin.fail() || startYear > 2022 || startYear < 2019) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точную дату (2019-2022): ";
		cin >> startYear;
	};
}
void failDateEN() {
	while (cin.fail() || endDate > 31 || endDate < 1) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точную дату (1-31): ";
		cin >> endDate;
	};
}
void failMonthEN() {
	while (cin.fail() || endMonth > 12 || endMonth < 1) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точную дату (1-12): ";
		cin >> endMonth;
	};
}
void failYearEN() {
	while (cin.fail() || endYear > 2022 || endYear < 2019) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точную дату (2019-2022): ";
		cin >> endYear;
	};
}
void failCard() {
	while (cin.fail()) {
		cin.clear();
		cin.ignore();
		cout << "\tВведите номер карты еще раз: ";
		cin >> cardNum;
	};
}
void failStatus() {
	while (cin.fail() || Status < 0 || Status >3) {

		cin.clear();
		cin.ignore();


		cout << "\n\tВведите действительной статус клиента.\n\t0 - Без статуса\n\n\t1 - Бронза - 1000 В месяц\n\n\t2 - Серебро - 3000 В месяц\n\n\t3 - Золото  - 5000 В месяц\n\n\t> : ";
		cin >> Status;
	};
}
void failSave() {
	while (saveYN != 'y' && saveYN != 'Y' && saveYN != 'n' && saveYN != 'N') {
		cin.clear();
		cin.ignore();
		cout << "\n\tНекорректный символ, попробуйте еще раз <Y/N>: ";
		cin >> saveYN;
	}
};


#endif
#pragma once
