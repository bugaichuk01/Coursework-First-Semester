#ifndef  ROOM_H
#define ROOM_H

#include <vector>

vector <int> A(1000);
vector <int> AS(1000);

void inMass() {

	ifstream fin("vec.txt");
	int N, k;

	if (!fin.good())
	{
		cout << "Файл vec.txt не найден!" << endl;
	}
	else
	{
		k = 0;
		while (fin >> N)
		{
			A[k++] = N;
		}

		for (int i = 0; i < k; i++)
		{
			while (HotelRoom == A[i]) {
				cout << "Комната занята, введите другой номер!" << "\n";
				cin >> HotelRoom;

			}
		}
	}
	fin.close();
	cin.get();
}

void InMassHow() {
	ifstream fins("vec.txt");
	int NS, sk;
	if (!fins.good())
	{
		cout << "Файл vec.txt не найден!" << endl;
	}
	else
	{
		sk = 0;
		while (fins >> NS)
		{
			AS[sk++] = NS;
		}

		for (int j = 0; j < sk; j++)
		{
			cout << AS[j] << " ";
		}
	}
	fins.close();
	cin.get();
}

void failRR(int x, int y) {
	cin >> HotelRoom;
	while (HotelRoom < x || HotelRoom > y) {
		cin.clear();
		cin.ignore();
		cout << "\n\tНекорректный символ, попробуйте еще раз " << "(" << x << "-" << y << "): ";
		cin >> HotelRoom;
	}
}


void roomGeneration() {
	// Однокомнатный номер
	if (roomNum == 1 && condYN == 0 && wifiYN == 0 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "\nВыберете комнату (1-20):";
		failRR(1, 20);
		inMass();
	}
	else if (roomNum == 1 && condYN == 0 && wifiYN == 0 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (21-30):"; 
		failRR(21, 30);
		inMass();
	}
	else if (roomNum == 1 && condYN == 0 && wifiYN == 1 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (31-40):";
		failRR(31, 40);
		inMass();
	}
	else if (roomNum == 1 && condYN == 0 && wifiYN == 1 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (41-50):";
		failRR(41, 50);
		inMass();
	}
	else if (roomNum == 1 && condYN == 1 && wifiYN == 0 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (51-60):";
		failRR(51, 60);
		inMass();
	}
	else if (roomNum == 1 && condYN == 1 && wifiYN == 0 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (61-70):";
		failRR(61, 70);
		inMass();
	}
	else if (roomNum == 1 && condYN == 1 && wifiYN == 1 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (71-80):";
		failRR(71, 80);
		inMass();
	}
	else if (roomNum == 1 && condYN == 1 && wifiYN == 1 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (81-90):";
		failRR(81, 90);
		inMass();
	}

	// Двухкомнатный номер

	if (roomNum == 2 && condYN == 0 && wifiYN == 0 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (91-100):";
		failRR(91, 100);
		inMass();
	}
	else if (roomNum == 2 && condYN == 0 && wifiYN == 0 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (101-120):";
		failRR(101, 120);
		inMass();
	}
	else if (roomNum == 2 && condYN == 0 && wifiYN == 1 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (121-140):";
		failRR(121, 140);
		inMass();
	}
	else if (roomNum == 2 && condYN == 0 && wifiYN == 1 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (141-160):";
		failRR(141, 160);
		inMass();
	}
	else if (roomNum == 2 && condYN == 1 && wifiYN == 0 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (161-180):";
		failRR(161, 180);
		inMass();
	}
	else if (roomNum == 2 && condYN == 1 && wifiYN == 0 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (181-200):";
		failRR(181, 200);
		inMass();
	}
	else if (roomNum == 2 && condYN == 1 && wifiYN == 1 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (201-220):";
		failRR(201, 220);
		inMass();
	}
	else if (roomNum == 2 && condYN == 1 && wifiYN == 1 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (221-240):";
		failRR(221, 240);
		inMass();
	}


	// Люкс номер

	if (roomNum == 3 && condYN == 0 && wifiYN == 0 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (241-260):";
		failRR(241, 260);
		inMass();
	}
	else if (roomNum == 3 && condYN == 0 && wifiYN == 0 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (261-280):";
		failRR(261, 280);
		inMass();
	}
	else if (roomNum == 3 && condYN == 0 && wifiYN == 1 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (281-300):";
		failRR(281, 300);
		inMass();
	}
	else if (roomNum == 3 && condYN == 0 && wifiYN == 1 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (301-320):";
		failRR(301, 320);
		inMass();
	}
	else if (roomNum == 3 && condYN == 1 && wifiYN == 0 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (321-340):"; 
		failRR(321, 340);
		inMass();
	}
	else if (roomNum == 3 && condYN == 1 && wifiYN == 0 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (341-360):";
		failRR(341, 360);
		inMass();
	}
	else if (roomNum == 3 && condYN == 1 && wifiYN == 1 && freadgeYN == 0) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (361-380):";
		failRR(361, 380);
		inMass();
	}
	else if (roomNum == 3 && condYN == 1 && wifiYN == 1 && freadgeYN == 1) {
		cout << "Занятые номера: ";
		InMassHow();
		cout << "Выберете комнату (381-400):";  
		failRR(381, 400);
		inMass();
	}

}

#endif