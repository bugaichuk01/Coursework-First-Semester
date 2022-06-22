#ifndef TITLES_AND_MEANINGS_H
#define TITLES_AND_MEANINGS_H

#include <string>

using namespace std;

int n;
char saveYN;

int condYN;
int wifiYN;
int freadgeYN;

string condName("***");
string wifiName("***");
string freadgeName("***");
int roomNum(00);

int cond = 40;	// руб в день	
int wifi = 70;
int freadge = 50;

string freetaxi("*****");
bool MenuLoop = true;

int goHotel;
int roomCost;
int room1 = 166;
int room2 = 266;
int room3 = 400;

int AllCost(000);

string name("*****");
string surname("*****");
string midname("*****");
string passportSeries("*****"); 
string passportID("*****"); 
string mail("*****");
string room("*****");
string code("*****"); // Личный номер
string telNum("*****"); // Номер телефона

int Date;
int startDate;
int startMonth(00);
int startYear(00);
int endDate;
int endMonth(00);
int endYear(00);
int Month;
int Year;

int membershipCost;

int bronze = 33;
int silver = 100;
int gold = 166;

int cardNum(00);
int Status;
string Type("*****");
int HotelRoom; // Номер комнаты


#endif
