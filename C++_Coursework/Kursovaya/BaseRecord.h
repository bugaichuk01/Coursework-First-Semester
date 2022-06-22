#ifndef BASE_RECORD
#define BASE_RECORD

#include <math.h>
#include <iostream>
#include "TitlesAndMeanings.h"


using namespace std;

void visit() {  // Расчет размера скидки от посещения отеля
	cin >> goHotel;
	while (goHotel < 0 || cin.fail()) {
		cin.clear(); cin.ignore();
		cout << "\n\tВведите точный номер: ";
		cin >> goHotel;
	}
	if (goHotel == 1 || goHotel == 0) {
		freetaxi = "Такси.";
	}
	else if (goHotel >= 3) {
		if (goHotel > 6) goHotel = 6;
		for (int i = 3; i <= goHotel; i++) {
			n = i * 10 - 20;
		}
		bronze = 33 - ((33 * n) / 100);
		silver = 100 - ((100 * n) / 100);
		gold = 166 - ((166 * n) / 100);
		room1 = 166 - ((166 * n) / 100);
		room2 = 266 - ((266 * n) / 100);
		room3 = 400 - ((400 * n) / 100);
		freetaxi = "Такси+скидка";
	}
	else if (goHotel == 2) freetaxi = "Нет";
}



void HowManyDays() {  // Расчет дней между датами
	if (startYear == endYear) {
		if (startMonth == endMonth) {
			Date = abs(endDate - startDate);
		}
		else if (startMonth != endMonth) {
			Month = abs(endMonth - startMonth);
			Month = Month * 30;
			Date = abs(endDate - startDate);	
			Date = Date + Month;
		}
	}
	else if (startYear != endYear) {
		Year = abs(endYear - startYear);
		Month = 12 - startMonth + endMonth;
		Month = Month * 30;
		Date = abs(endDate - startDate);
		Date = Date + Month;
	}
}

void cost() { // Расчет полной стоимости
	if (condYN == 0 && wifiYN == 0 && freadgeYN == 0) {
		AllCost = Date * (membershipCost + roomCost);
	}
	else if (condYN == 0 && wifiYN == 0 && freadgeYN == 1) {
		AllCost = Date * (membershipCost + roomCost + freadge);
	}
	else if (condYN == 0 && wifiYN == 1 && freadgeYN == 0) {
		AllCost = Date * (membershipCost + roomCost + wifi);
	}
	else if (condYN == 0 && wifiYN == 1 && freadgeYN == 1) {
		AllCost = Date * (membershipCost + roomCost + freadge + wifi);
	}
	else if (condYN == 1 && wifiYN == 0 && freadgeYN == 0) {
		AllCost = Date * (membershipCost + roomCost + cond);
	}
	else if (condYN == 1 && wifiYN == 0 && freadgeYN == 1) {
		AllCost = Date * (membershipCost + roomCost + cond + freadge);
	}
	else if (condYN == 1 && wifiYN == 1 && freadgeYN == 0) {
		AllCost = Date * (membershipCost + roomCost + cond + wifi);
	}
	else if (condYN == 1 && wifiYN == 1 && freadgeYN == 1) {
		AllCost = Date * (membershipCost + roomCost + freadge + cond + wifi);
	}
}


#endif 
