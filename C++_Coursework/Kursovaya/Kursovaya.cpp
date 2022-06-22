#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <cstdio>
#include "Price.h"
#include "TitlesAndMeanings.h"
#include "BaseRecord.h"
#include "EnterAndExitProg.h"
#include "Fails.h"
#include "Room.h"

void delInfo();
void save();
void MainMenu();
void help();
void priceList();
void baseRecord();
void form();
void open();
void saver();
void inMass();
void InMassHow();
void roomGeneration();
void checkDate();

using namespace std;

int main()
{
	// system("color F0");
	setlocale(LC_ALL, "RUS");

	adminLog("", 0);
	adminPass("", 0);
	MainMenu();
	while (MenuLoop == true) { MainMenu(); };

	return 0;
	system("pause");
}

void MainMenu() {


	int menuchoice;

	system("cls");

	cout << "\t\t\t\t\t\t****************\n";
	cout << "\t\t\t\t\t\t* Главное меню *\n";
	cout << "\t\t\t\t\t\t****************\n\n";
	cout << "\t\t\t\t\t    1 - Забронировать номер в отеле\n";
	cout << "\t\t\t\t\t    2 - Открыть файл (Только для администратора сайта)\n";
	cout << "\t\t\t\t\t    3 - Просмотр прайс-листа\n";
	cout << "\t\t\t\t\t    4 - Справка\n";
	cout << "\t\t\t\t\t    5 - Удаление данных (Только для администратора сайта)\n";
	cout << "\t\t\t\t\t    6 - Выход\n\n";
	cout << "\t\t\t\t\t    Пожалуйста, выберите вариант: ";

	cin >> menuchoice;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "\n\t\t\t\t\t    Пожалуйста, введите действительный номер:"; 
		cin >> menuchoice;
	};


	switch (menuchoice) {
	case 1:
		baseRecord();
		break;
	case 2:
		open();
		break;
	case 3:
		priceList();
		break;
	case 4:
		help();
		break;
	case 5:
		delInfo();
		break;
	case 6:
		exit(MenuLoop);
		break;
	}
}

void priceList() {

	system("cls");
	int choice;
	firstOutput();
	
	cin >> choice;
	PriceFail(choice);

	switch (choice) {
	case 1:
		Output(300, 300, 350, 450);
		break;
	case 2:
		OutputBronze(300, 300, 350, 450);
		break;
	case 3:
		OutputSilver(300, 300, 350, 450);
		break;
	case 4:
		OutputGold(300, 300, 350, 450);
		break;
	case 5:
		priceRooms1(5000, 8000, 12000);
	case 6:
		MainMenu();
		system("pause");
	}
};

void form() {

	system("cls");
	cout << "                   ***********************\n";
	cout << "                   **  Окно заполнения  **\n";
	cout << "                   ***********************\n";
	cout << "________________________________________________________________\n\n";
	cout << "Информация о клиенте:  \t";
	cout << " Клиент: ";
	cout << name << " ";
	cout << surname << " ";
	cout << midname << "\n";
	cout << "Бонусы: ";
	cout << freetaxi << "(" << n << "%" << ")" << "\n";
	cout << "Личные данные: ";
	cout << passportSeries << " ";
	cout << passportID << " ";
	cout << mail << "\n";
	cout << "          ";
	cout << "Тип номера: ";
	cout << room << "\n";
	cout << "Кондиционер: ";
	cout << condName << ";" << "\t";
	cout << "Wi-fi: ";
	cout << wifiName << ";" << "\t";
	cout << "Холодильник: ";
	cout << freadgeName;
	cout << "\nЛичный код: ";
	cout << code << "\n";
	cout << "Номер телефона: ";
	cout << telNum;
	cout << "  Дата въезда: ";
	cout << startDate << "/";
	cout << startMonth << "/";
	cout << startYear;
	cout << "  Дата выезда: ";
	cout << endDate << "/";
	cout << endMonth << "/";
	cout << endYear << "\n";
	cout << "________________________________________________________________\n\n";
	cout << "       Номер карты: ";
	cout << cardNum;
	cout << "\n\n       Статус клиента: ";
	cout << Type;
	cout << "\n\n       Ваш номер комнаты: ";
	cout << HotelRoom << "\n";
	cout << "\n\n       Общая стоимость: ";
	cout << AllCost << "\n";
	cout << "\n________________________________________________________________\n\n";
	cout << "\n";
};

void baseRecord() {

	form();
	cout << "Здравствуйте! В какой раз вы пользуетесь нашей программой? \n";
	cout << "В качестве первого использования нашей программы вам предоствлено бесплатное такси до отеля и обратно. \n";
	cout << "качестве 3 более использования нашей программы вам предоствлено бесплатное такси до отеля и обратно и 10% скидка \n"; 
	cout << "Введите: ";
	visit();
	form();
	cout << "\tВведите имя: ";
	cin >> ws; // удаление ведущих пробелов
	getline(cin, name);
	form();
	cout << "\tВведите фамилию: ";
	cin >> surname;
	form();
	cout << "\tВведите отчество: ";
	cin >> midname;
	form();
	cout << "\tВведите серию вашего паспорта: ";
	cin >> ws;
	getline(cin, passportSeries); 
	form();
	cout << "\tВведите номер вашего паспорта : ";
	cin >> ws;                       
	getline(cin, passportID);          
	form();
	cout << "\tВведите ваш mail: ";
	getline(cin, mail);
	form();
	cout << "\tВыберите тип номера (1 - Однокомнатный/2 - Двухкомнатный/3 - Люкс): ";
	cin >> ws;
	cin >> roomNum;
	failRoom(); // Ошибка ввода
	if (roomNum == 1) {
		room = "Однокомнатный";
		roomCost = room1;
	}
	else if (roomNum == 2) {
		room = "Двухкомнатный";
		roomCost = room2;
	}
	else if (roomNum == 3) {
		room = "Люкс";
		roomCost = room3;
	}
	form();
	cout << "Желаете иметь кондиционер в комнате? (1 - Да / 0 - Нет)"; ////////////////////
	cin >> condYN;
	failCond();
	if (condYN == 0) condName = "Нет";
	else if (condYN == 1) condName = "Да";
	form();
	cout << "Желаете иметь wi-fi в комнате? (1 - Да / 0 - Нет)"; ////////////////////
	cin >> wifiYN;
	failWifi();
	if (wifiYN == 0) wifiName = "Нет";
	else if (wifiYN == 1) wifiName = "Да";
	form();
	cout << "Желаете иметь мини-холодильник в комнате? (1 - Да / 0 - Нет)"; ////////////////////
	cin >> freadgeYN;
	failFreadge();
	if (freadgeYN == 0) freadgeName = "Нет";
	else if (freadgeYN == 1) freadgeName = "Да";
	form();
	cout << "\tВведите ваш личный код: ";
	cin >> ws;
	getline(cin, code);
	form();
	cout << "\tВведите номер телефона: ";
	cin >> ws;
	getline(cin, telNum);
	failNum(); // Ошибка ввода
	form();
	cout << "\tВведите дату начала проживания(DD): ";
	cin >> startDate;
	failDateST(); // Ошибка ввода
	form();
	cout << "\tВведите дату начала проживания(MM): ";
	cin >> startMonth;
	failMonthST(); // Ошибка ввода
	form();
	cout << "\tВведите дату начала проживания(YY): ";
	cin >> startYear;
	failYearST(); // Ошибка ввода
	form();
	cout << "\tВведите дату окончания проживания(DD): ";
	cin >> endDate;
	failDateEN(); // Ошибка ввода
	form();
	cout << "\tВведите дату окончания проживания(MM): ";
	cin >> endMonth;
	failMonthEN(); // Ошибка ввода
	form();
	cout << "\tВведите дату окончания проживания(YY): ";
	cin >> endYear;
	failYearEN(); // Ошибка ввода
	cout << Date;
	form();
	checkDate();
	cout << "\tВведите номер карты: ";
	cin >> cardNum;
	failCard();
	form();
	cout << "\tВведите желаемый статус:\n\t0 - Без статуса\n\t1 - Бронза\n\t2 - Серебро\n\t3 - Золото\n\t> : ";
	cin >> Status;
	failStatus();
	switch (Status) {
	case 0:
		Type = "Нету";
			break;
	case 1:
		Type = "Бронза";
		break;
	case 2:
		Type = "Серебро";
		break;
	case 3:
		Type = "Золото";
		break;
	};

	if (Status == 0) membershipCost = 0;
	else if (Status == 1) membershipCost = bronze;
	else if (Status == 2) membershipCost = silver;
	else if (Status == 3) membershipCost = gold;
	form();

	roomGeneration(); // функция генерирования комнаты
	form();
	HowManyDays(); // функция , высчитывающая кол-во дней между датами
	
	cost(); // функция для расчета стоимости
	form();
	
	cout << "\tСохранить нового клиента в файл? <Y/N> ";
	cin >> saveYN;
	failSave();
	if (saveYN == 'y' || saveYN == 'Y') {
		save();
		saver();
	}
	else if (saveYN == 'n' || saveYN == 'N')
	{
		cout << "\tНе сохранено!\n\n\t";
	
	}
	
};

void saver() {

	ofstream vec;
	vec.open("vec.txt", ios::out | ios::app);

		vec << HotelRoom << " ";
	
	vec.close();
}

void save() {
	string saveFileName;
	stringstream nameSurname; // строка в файле
	nameSurname << name << " " << surname << " " << code; // в папке высвечивает "Nazar Bugaichuk 111"
	saveFileName = nameSurname.str();
	ofstream myfile;
	myfile.open(saveFileName.c_str(), ios::out); //  Чтобы получить строку, которая заканчивается символом ‘\0’ используется  c_str().

	if (!myfile)
	{
		cout << "\tФайл не открыт !\n\n";
		system("pause");
		MainMenu();
	}

	myfile <<  name << "\n";
	myfile <<  surname << "\n";
	myfile << midname << "\n";
	myfile <<  passportSeries << "\n";
	myfile <<  passportID << "\n";
	myfile <<  mail << "\n";
	myfile <<  room << "\n";
	myfile <<  code << "\n";
	myfile <<  telNum << "\n";
	myfile <<  startDate << "\n";
	myfile <<  startMonth << "\n";
	myfile <<  startYear << "\n";
	myfile <<  endDate << "\n";
	myfile <<  endMonth << "\n";
	myfile <<  endYear << "\n";
	myfile <<  cardNum << "\n";
	myfile <<  Type << "\n";
	myfile <<  HotelRoom << "\n";
	myfile <<  AllCost << "\n";
	myfile << freetaxi << "\n";
	myfile << condName << "\n";
	myfile << wifiName << "\n";
	myfile << freadgeName << "\n";
	myfile.close();
	form();
	cout << "\tВсе детали были сохранены !\n\n\t";
	system("pause");
}

void open() {
	system("cls");
	adminPass("",0);
	system("cls");
		cout << "Open Member File";
		system("cls");
		char filename[50];
		ifstream openFile;
		cout << "\t\t\t\t\t\t*****************************\n";
		cout << "\t\t\t\t\t\t* Сохраненные пользователи: *\n";
		cout << "\t\t\t\t\t\t*****************************\n";
		system("dir/b *.");
		cout << "\n\nВведите клиента, информацию о котором\n";
		cout << "вы хотите посмотреть или\n";
		cout << "введите b, чтобы врнуться на главное меню:\n";
		gets_s(filename);
		system("cls");
		if (filename[0] != 'b') {

			openFile.open(filename, ios::in);
			while (!openFile)
			{
				cout << "Такого клиента не существует\n";
				gets_s(filename);
				openFile.open(filename, ios::in);
			}
			
			openFile >> name;
			cout << "Имя: " <<  name << endl;
			openFile >> surname;
			cout << "Фамилия: " << surname << endl;
			openFile >> midname;
			cout << "Отчество: " << midname << endl;
			openFile >> passportSeries;
			cout << "Серия паспорта: " << passportSeries << endl;
			openFile >> passportID;
			cout << "Номер паспорта: " << passportID << endl;
			openFile >> mail;
			cout << "Почта mail: " << mail << endl;
			openFile >> room;
			cout << "Тип номера: " << room << endl;
			openFile >> code;
			cout << "Личный код: " << code << endl;
			openFile >> telNum;
			cout << "Номер телефона: " << telNum << endl;
			cout << endl;
			cout << "Дата начала проживания" << endl;
			cout << endl;
			openFile >> startDate;
			cout << "День: " << startDate << endl;
			openFile >> startMonth;
			cout << "Месяц: " << startMonth << endl;
			openFile >> startYear;
			cout << "Год: " << startYear << endl;
			cout << endl;
			cout << "Дата конца проживания" << endl;
			cout << endl;
			openFile >> endDate;
			cout << "День: " << endDate << endl;
			openFile >> endMonth;
			cout << "Месяц: " << endMonth << endl;
			openFile >> endYear;
			cout << "Год: " << endYear << endl;
			cout << endl;
			openFile >> cardNum;
			cout << "Номер карты: " << cardNum << endl;
			openFile >> Type;
			cout << "Статус клиента: " << Type << endl;
			openFile >> HotelRoom;
			cout << "Номер комнаты: " << HotelRoom << endl;
			openFile >> AllCost;
			cout << "Общая стоимость: " << AllCost << endl;
			openFile >> freetaxi;
			cout << "Скидка: " << freetaxi << endl;
			openFile >> condName;
			cout << "Кондиционер: " << condName << endl;
			openFile >> wifiName;
			cout << "Wifi: " << wifiName << endl;
			openFile >> freadgeName;
			cout << "Холодильник: " << freadgeName << endl;
			system("pause");
			openFile.close();
			
		};
	};

void help()
{
	system("cls");
	cout << endl;
	cout << "\t\t                         Добро пожаловать в меню помощи !                               \n" << endl;
	cout << "\t\tЕсли вы хотите забронировать номер в отеле, то нажмите 1 в главном меню. " << endl;
	cout << "\t\tДля просмотра файлов с информацией о клиентах, забронировавших номер в каком-либо отеле нажмите 2." << endl;
	cout << "\t\tВыбрав пункт 3 вы сможете просмотреть прайс лист, который будет зависеть от выбора статуса клиента." << endl;
	cout << "\t\tПри необходимости удалить клиента из клиенсткой базы нажмите 4." << endl;
	cout << "\t\tДля просмотра справки еще раз нажмите 5 в главном меню. " << endl;
	cout << "\t\tДля выхода из программы нажмите 6 в главном меню. " << endl;
	cout << endl;
	system("pause");
}

void delInfo()    
{	
	system("cls");
	adminPass("",0);
	system("cls");
	char filenam[50];
	cout << "\t\t\t\t\t\t*****************************\n";
	cout << "\t\t\t\t\t\t* Сохраненные пользователи: *\n";
	cout << "\t\t\t\t\t\t*****************************\n";
	system("dir/b *.");
	cout << "\n\nВведите клиента, информацию о котором\n";
	cout << "вы хотите посмотреть или\n";
	cout << "введите b, чтобы врнуться на главное меню:\n";
	gets_s(filenam);
	if (filenam[0] != 'b') {
		
		remove(filenam);
		system("pause");
	};

	
}

void checkDate() {

	if ((startDate == endDate) && (startMonth == endMonth) && (startYear == endYear)) {
		cout << "Error Date!\n";
		system("pause");
		MainMenu();
	}
	else if ((startYear == endYear) && (startMonth == endMonth) && (startDate > endDate)) {
		cout << "Erroe Date!\n";
		system("pause");
		MainMenu();
	}
	else if ((startYear == endYear) && (startMonth > endMonth)) {
		cout << "Erroe Date!\n";
		system("pause");
		MainMenu();
	}
	else if (startYear > endYear) {
		cout << "Erroe Date!\n";
		system("pause");
		MainMenu();
	}
}