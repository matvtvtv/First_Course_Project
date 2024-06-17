#include "Header.h"
#include <algorithm>
const string Rab_Dal = "Rab_Dal.txt";
const string Rab = "Rab.txt";
NewRab newRab[10000];
NewRab Rab_Dal_like[10000];
NewRab_Dal nextRab_Dal[10000];
NewRab_Dal nextRab_Dal_New[10000];
NewRab_Dal New_Rab_Dal[10000];
NewRab_Dal Rab_like[10000];
Spring Likes[10000];
string login;
string login_Dal;
string Rab_Dal_Love = "Job/" + login_Dal + ".txt";
string Rab_Love = "Clients/" + login + ".txt";
string a;
int Rab_Pos = 0;
int sizeFilter = 0;
int Page = 0;
int counter = 0;
int sizeRab_Dal;
int sizeRab;
int sizeRab_Like;
int sizeRab_Dal_Like;
int like = 0;
int Admin = 0;
int t;
//GBCZZZ
void PrintWait(string str, int time) {
	int size = str.size();
	for (int i = 0; i < size; i++) {
		cout << str[i];
		Sleep(time);
	}
}

void CleanWait(int size, int time) {
	for (int i = 0; i < size; i++) {
		cout << char(8) << " " << char(8);
		Sleep(time);
	}
}

string inOneLine(string str)
{
	replace(str.begin(), str.end(), ' ', '_');
	return str;
}

//меню аккаунта рабочего
void Rab_Account() {
	system("cls");
	Page = 0;
	cout << "Выберите действие :" << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "1.Просмотр вакансий\n2.Понравившееся\n3.Редакция аккаунта\n4.Удаление аккаунта\n5.Назад\n6.Выход из программы\n";
	char a = _getch();
	if (a == '1') { Filter_Rab(); }
	else if (a == '2') { Out_Rab_like(); }
	else if (a == '3') { Redact_Rab_Account(); }
	else if (a == '4') { Del_Rab_Account(); }
	else if (a == '5') { Enterence_or_regRab(); }
	else if (a == '6') {
		system("cls");
		system("color 4");
		cout << "Производится выход";
		Sleep(1000);
		system("color 7");
		exit(0);
	}
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Rab_Account();
	}
}

void Redact_Rab_Account() {
	system("cls");
	cout << "Управление: '1-8' выбор  ; '/' назад " << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "Выберите то что хотите изменить в своей анкете:\n"
		<< "1-Фамилия\n"
		<< "2-Имя\n"
		<< "3-Город проживания\n"
		<< "4-Пол (1-мужчина; 2-женщина) \n"
		<< "5-Возраст\n"
		<< "6-Образовоние\n"
		<< "7-Стаж\n"
		<< "8-Контакты для связи\n" << endl;
	char a = _getch();
	cout << "Выбран " << a << " пункт для редакции" << endl;
	cout << "Введите новые данные : ";
	read_Rab_DataBase();
	string newww;
	int newwww;
	if (a == '/') {
		if (Admin !=0) { Admin_Rab(); }
		Rab_Account();
	}
	if (a == '1') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab.txt");
		for (int i = 0; i < sizeRab+1; i++) {
			if (login != newRab[i].Login) {
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
			else if (login == newRab[i].Login) {
				newRab[i].Familia = newww;
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login == Likes[i].Login_Rab) {
				read_Rab_Dal_Like2(Likes[i].Login_Rab_Dal);
				ofstream ttttt("Job/" + Likes[i].Login_Rab_Dal + ".txt");
				for (int i = 0; i < sizeRab_Dal_Like; i++) {
					if (login != Rab_Dal_like[i].Login) {
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
					else if (login == Rab_Dal_like[i].Login) {
						Rab_Dal_like[i].Familia = newww;
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}Redact_Rab_Account();
	}
	if (a == '2') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab.txt");
		for (int i = 0; i < sizeRab+1; i++) {
			if (login != newRab[i].Login) {
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
			else if (login == newRab[i].Login) {
				newRab[i].Name = newww;
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login == Likes[i].Login_Rab) {
				read_Rab_Dal_Like2(Likes[i].Login_Rab_Dal);
				ofstream ttttt("Job/" + Likes[i].Login_Rab_Dal + ".txt");
				for (int i = 0; i < sizeRab_Dal_Like; i++) {
					if (login != Rab_Dal_like[i].Login) {
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
					else if (login == Rab_Dal_like[i].Login) {
						Rab_Dal_like[i].Name = newww;
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}Redact_Rab_Account();
	}
	if (a == '3') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab.txt");
		for (int i = 0; i < sizeRab + 1; i++) {
			if (login != newRab[i].Login) {
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
			else if (login == newRab[i].Login) {
				newRab[i].City = newww;
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login == Likes[i].Login_Rab) {
				read_Rab_Dal_Like2(Likes[i].Login_Rab_Dal);
				ofstream ttttt("Job/" + Likes[i].Login_Rab_Dal + ".txt");
				for (int i = 0; i < sizeRab_Dal_Like; i++) {
					if (login != Rab_Dal_like[i].Login) {
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
					else if (login == Rab_Dal_like[i].Login) {
						Rab_Dal_like[i].City = newww;
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}Redact_Rab_Account();
	}
	if (a == '4') {
		cin >> newwww;
		if (newwww < 1) { cout << "Прочтите условие !!!"; Sleep(1000); Redact_Rab_Account(); }
		else if (newwww > 2) { cout << "Прочтите условие !!!"; Sleep(1000); Redact_Rab_Account(); }
		else {
			ofstream Rrrrrrrrr("Rab.txt");
			for (int i = 0; i < sizeRab + 1; i++) {
				if (login != newRab[i].Login) {
					if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
					else { Rrrrrrrrr << newRab[i].setAll() << endl; }
				}
				else if (login == newRab[i].Login) {
					newRab[i].Sex = newwww;
					if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
					else { Rrrrrrrrr << newRab[i].setAll() << endl; }
				}
			}
			Rrrrrrrrr.close();

			Read_LIKES();
			for (int i = 0; i < like; i++)
			{
				if (login == Likes[i].Login_Rab) {
					read_Rab_Dal_Like2(Likes[i].Login_Rab_Dal);
					ofstream ttttt("Job/" + Likes[i].Login_Rab_Dal + ".txt");
					for (int i = 0; i < sizeRab_Dal_Like; i++) {
						if (login != Rab_Dal_like[i].Login) {
							ttttt << Rab_Dal_like[i].setAll() << endl;
						}
						else if (login == Rab_Dal_like[i].Login) {
							Rab_Dal_like[i].Sex = newwww;
							ttttt << Rab_Dal_like[i].setAll() << endl;
						}
					}
					ttttt.close();
				}
			}Redact_Rab_Account();
		}
	}
	if (a == '5') {
		cin >> newwww;
		if (newwww < 1) { cout << "XAXAX очень смешно (нет)"; Sleep(1000); Redact_Rab_Account(); }
		if (newwww > 80) { cout << "XAXAX очень смешно (нет)"; Sleep(1000); Redact_Rab_Account(); }
		else {
			ofstream Rrrrrrrrr("Rab.txt");
			for (int i = 0; i < sizeRab + 1; i++) {
				if (login != newRab[i].Login) {
					if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
					else { Rrrrrrrrr << newRab[i].setAll() << endl; }
				}
				else if (login == newRab[i].Login) {
					newRab[i].Age = newwww;
					if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
					else { Rrrrrrrrr << newRab[i].setAll() << endl; }
				}
			}
			Rrrrrrrrr.close();

			Read_LIKES();
			for (int i = 0; i < like; i++)
			{
				if (login == Likes[i].Login_Rab) {
					read_Rab_Dal_Like2(Likes[i].Login_Rab_Dal);
					ofstream ttttt("Job/" + Likes[i].Login_Rab_Dal + ".txt");
					for (int i = 0; i < sizeRab_Dal_Like; i++) {
						if (login != Rab_Dal_like[i].Login) {
							ttttt << Rab_Dal_like[i].setAll() << endl;
						}
						else if (login == Rab_Dal_like[i].Login) {
							Rab_Dal_like[i].Age = newwww;
							ttttt << Rab_Dal_like[i].setAll() << endl;
						}
					}
					ttttt.close();
				}
			}
		}Redact_Rab_Account();
	}
	if (a == '6') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab.txt");
		for (int i = 0; i < sizeRab + 1; i++) {
			if (login != newRab[i].Login) {
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
			else if (login == newRab[i].Login) {
				newRab[i].Aducation = newww;
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login == Likes[i].Login_Rab) {
				read_Rab_Dal_Like2(Likes[i].Login_Rab_Dal);
				ofstream ttttt("Job/" + Likes[i].Login_Rab_Dal + ".txt");
				for (int i = 0; i < sizeRab_Dal_Like; i++) {
					if (login != Rab_Dal_like[i].Login) {
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
					else if (login == Rab_Dal_like[i].Login) {
						Rab_Dal_like[i].Aducation = newww;
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}Redact_Rab_Account();
	}
	if (a == '7') {
		cin >> newwww;
		if (newwww < 0) { cout << "XAXAX очень смешно (нет)"; Sleep(2000); Redact_Rab_Account(); }
		else if (newwww > 60) { cout << "XAXAX очень смешно (нет)"; Sleep(2000); Redact_Rab_Account(); }
		else {
			ofstream Rrrrrrrrr("Rab.txt");
			for (int i = 0; i < sizeRab + 1; i++) {
				if (login != newRab[i].Login) {
					if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
					else { Rrrrrrrrr << newRab[i].setAll() << endl; }
				}
				else if (login == newRab[i].Login) {
					newRab[i].Expirience = newwww;
					if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
					else { Rrrrrrrrr << newRab[i].setAll() << endl; }
				}
			}
			Rrrrrrrrr.close();

			Read_LIKES();
			for (int i = 0; i < like; i++)
			{
				if (login == Likes[i].Login_Rab) {
					read_Rab_Dal_Like2(Likes[i].Login_Rab_Dal);
					ofstream ttttt("Job/" + Likes[i].Login_Rab_Dal + ".txt");
					for (int i = 0; i < sizeRab_Dal_Like; i++) {
						if (login != Rab_Dal_like[i].Login) {
							ttttt << Rab_Dal_like[i].setAll() << endl;
						}
						else if (login == Rab_Dal_like[i].Login) {
							Rab_Dal_like[i].Expirience = newwww;
							ttttt << Rab_Dal_like[i].setAll() << endl;
						}
					}
					ttttt.close();
				}
			}
			Redact_Rab_Account();
		}
	}
	if (a == '8') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab.txt");
		for (int i = 0; i < sizeRab + 1; i++) {
			if (login != newRab[i].Login) {
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
			else if (login == newRab[i].Login) {
				newRab[i].Number = newww;
				if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
				else { Rrrrrrrrr << newRab[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login == Likes[i].Login_Rab) {
				read_Rab_Dal_Like2(Likes[i].Login_Rab_Dal);
				ofstream ttttt("Job/" + Likes[i].Login_Rab_Dal + ".txt");
				for (int i = 0; i < sizeRab_Dal_Like; i++) {
					if (login != Rab_Dal_like[i].Login) {
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
					else if (login == Rab_Dal_like[i].Login) {
						Rab_Dal_like[i].Number = newww;
						ttttt << Rab_Dal_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}
		Redact_Rab_Account();
	}
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Redact_Rab_Account();
	}

}

void Del_Rab_Account() {
	ofstream ae("Clients/" + login + ".txt");
	ae.close();

	Read_LIKES();
	for (int i = 0; i < like; i++)
	{
		if (login == Likes[i].Login_Rab) {
			read_Rab_Dal_Like2(Likes[i].Login_Rab_Dal);
			ofstream ttttt("Job/" + Likes[i].Login_Rab_Dal + ".txt");
			for (int y = 0; y < sizeRab_Dal_Like; y++) {
				if (login != Rab_Dal_like[y].Login) {
					ttttt << Rab_Dal_like[y].setAll() << endl;
				}
			}
			ttttt.close();
		}
	}

	Read_LIKES();
	ofstream aue("Spring.txt");
	for (int i = 0; i < like; i++)
	{
		if (login != Likes[i].Login_Rab) {
			aue << Likes[i].setAll() << endl;
		}
	}
	aue.close();

	read_Rab_DataBase();
	ofstream Rrrrrrrrr("Rab.txt");

	for (int i = 0; i < sizeRab+1; i++) {
		if (login != newRab[i].Login) {
			if (i == sizeRab) { Rrrrrrrrr << newRab[i].setAll(); }
			else { Rrrrrrrrr << newRab[i].setAll() << endl; }
		}
	}
	Rrrrrrrrr.close();
	cout << endl;
	PrintWait("Удаление аккаунта !!!", 20);
	Sleep(500);
	CleanWait(21, 20);
	if (Admin == 1) { Admin_Rab(); }
	else { regMenu(); }
}

//считывание файла связи
void Read_LIKES() {
	ofstream COMM("Spring.txt", ios::app);
	COMM.close();
	ifstream comm("Spring.txt");
	string Login_Rab;
	string Login_Rab_Dal;
	int Status;
	like = 0;
	while (!comm.eof()) {
		comm >> Login_Rab >> Login_Rab_Dal >> Status;
		Likes[like].getAll(Login_Rab, Login_Rab_Dal, Status);
		like++;
	}
	like--;
}
void Read_LIKES2(string LOGIN) {
	ofstream COMM("Spring.txt", ios::app);
	COMM.close();
	ifstream comm("Spring.txt");
	string Login_Rab;
	string Login_Rab_Dal;
	int Status;
	like = 0;
	while (!comm.eof()) {
		comm >> Login_Rab >> Login_Rab_Dal >> Status;
		Likes[like].getAll(Login_Rab, Login_Rab_Dal, Status);
		like++;
	}
	like--;
}

//вывод лайкнутых избранного работника
void Out_Rab_like() {
	read_Rab_Like2(login);
	system("cls");
	cout << "Управление: '1-4' выбор для вывода более подробной информации ; '+ -' преключение страниц ;'/' назад " << endl;
	cout << "Страница : " << Page + 1 << endl;
	if (sizeRab_Like == 0) {
		cout << "Нет вакансий подходящих по фильтру " << endl; system("pause"); if (Admin != 0) {
			Admin_Rab();
		}  else{ Rab_Account(); }
	}
	else {
		counter = 0;

		if (Page == 0) {
			if (sizeRab_Like < 4) {
				for (int i = 0; counter < sizeRab_Like; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl
						<< "Профессия : " << setw(23) << Rab_like[i].Profession << " | "
						<< setw(20) << "Город : " << setw(20) << Rab_like[i].City << " | "
						<< setw(20) << "Зароботная плата : " << setw(20) << Rab_like[i].Pay << " | " << endl << endl
						<< "Срок контракта (годы) : " << setw(2) << Rab_like[i].Time_of_Contract << " | "
						<< setw(20) << "Минимальный опыт : " << setw(3) << Rab_like[i].Expirience << endl << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
			else {
				for (int i = 0; counter < 4; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl
						<< "Профессия : " << setw(23) << Rab_like[i].Profession << " | "
						<< setw(20) << "Город : " << setw(20) << Rab_like[i].City << " | "
						<< setw(20) << "Зароботная плата : " << setw(20) << Rab_like[i].Pay << " | " << endl << endl
						<< "Срок контракта (годы) : " << setw(2) << Rab_like[i].Time_of_Contract << " | "
						<< setw(20) << "Минимальный опыт : " << setw(3) << Rab_like[i].Expirience << endl << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
		}
		else {
			int fullLists = sizeRab_Like / 4;
			int lastList = sizeRab_Like - fullLists * 4;
			if (lastList == 0)lastList = 4;
			if (sizeRab_Like < ((Page + 1) * 4)) {
				for (int i = (Page * 4); counter < lastList; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl
						<< "Профессия : " << setw(23) << Rab_like[i].Profession << " | "
						<< setw(20) << "Город : " << setw(20) << Rab_like[i].City << " | "
						<< setw(20) << "Зароботная плата : " << setw(20) << Rab_like[i].Pay << " | " << endl << endl
						<< "Срок контракта (годы) : " << setw(2) << Rab_like[i].Time_of_Contract << " | "
						<< setw(20) << "Минимальный опыт : " << setw(3) << Rab_like[i].Expirience << endl << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
			else {
				for (int i = (Page * 4); counter < 4; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl
						<< "Профессия : " << setw(23) << Rab_like[i].Profession << " | "
						<< setw(20) << "Город : " << setw(20) << Rab_like[i].City << " | "
						<< setw(20) << "Зароботная плата : " << setw(20) << Rab_like[i].Pay << " | " << endl << endl
						<< "Срок контракта (годы) : " << setw(2) << Rab_like[i].Time_of_Contract << " | "
						<< setw(20) << "Минимальный опыт : " << setw(3) << Rab_like[i].Expirience << endl << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
		}

		int a = _getch();
		if (a == '/')
		{
			if (Admin != 0) {
				Admin_Rab();
			}
			else { Rab_Account(); }
	
		}
		else if (a == 45)
		{
			Page--;
			if (Page < 0) {
				system("cls");
				PrintWait("Не удачно", 20);
				Sleep(500);
				CleanWait(10, 20);

				Page++;
			}
			Out_Rab_like();
		}
		else if (a == 61)
		{
			Page++;
			if ((Page * 4) > sizeRab_Like) {
				system("cls");
				PrintWait("Не удачно", 20);
				Sleep(500);
				CleanWait(10, 20);
				Page--;
			}
			Out_Rab_like();
		}
		else if (a == '1') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4) - 1;
			if (t > sizeRab_Like) { Out_Rab_like(); }
			Out_Rab_like_Info(t);
		}
		else if (a == '2') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4) - 1;
			if (t > sizeRab_Like) { Out_Rab_like(); }
			Out_Rab_like_Info(t);
		}
		else if (a == '3') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4) - 1;
			if (t > sizeRab_Like) { Out_Rab_like(); }
			Out_Rab_like_Info(t);
		}
		else if (a == '4') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4) - 1;
			if (t> sizeRab_Like){ Out_Rab_like(); }
			Out_Rab_like_Info(t);
		}
		else {
			PrintWait("Команда не найдена", 20);
			Sleep(500);
			CleanWait(20, 20); Out_Rab_like();
		}
	}
}

//подробная информация об работодателе из избранного
void Out_Rab_like_Info(int Rab_Dal_Info) {
	Read_LIKES();
	system("cls");
	cout << "Управление: '/' назад  ; '-' удаление из избранного " << endl;
	cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "    " << endl
		<< "Названеи организации : " << setw(42) << Rab_like[Rab_Dal_Info].Name_Org << endl
		<< "Должность на которую ищется работнк :  " << setw(26) << Rab_like[Rab_Dal_Info].Profession << endl
		<< "Город в котором находится организациия : " << setw(24) << Rab_like[Rab_Dal_Info].City << endl
		<< "Адресс огрганизации : " << setw(39) << Rab_like[Rab_Dal_Info].Adress << "  " << Rab_like[Rab_Dal_Info].Dom << endl
		<< "Предлагаемая зарплата : " << setw(41) << Rab_like[Rab_Dal_Info].Pay << endl
		<< "Длительность на контракта : " << setw(37) << Rab_like[Rab_Dal_Info].Time_of_Contract << endl;

	if (Rab_like[Rab_Dal_Info].Sex == 1) { cout << "Требуемый пол : " << setw(49) << "мужской" << endl; }
	if (Rab_like[Rab_Dal_Info].Sex == 2) { cout << "Требуемый пол : " << setw(49) << "женский" << endl; }
	cout << "Минимальный уровень образования : " << setw(31) << Rab_like[Rab_Dal_Info].Aducation << endl
		<< "Минимальный стаж : " << setw(46) << Rab_like[Rab_Dal_Info].Expirience << endl
		<< "Контакты для связи: " << setw(45) << Rab_like[Rab_Dal_Info].Number << endl
		<< "Фамилия HR-менеджера : " << setw(41) << Rab_like[Rab_Dal_Info].Familia << endl
		<< "Имя HR-менеджера : " << setw(45) << Rab_like[Rab_Dal_Info].Name << endl;

	Read_LIKES2(login_Dal);
	read_Rab_Dal_Like2(login_Dal);

	//ofstream Comm("Spring.txt");
	int Chek = 0;
	for (int i = 0; i < like; i++) {
		Chek++;
		if (Likes[i].Login_Rab_Dal == Rab_like[Rab_Dal_Info].Login) {
			if (Likes[i].Login_Rab == login) {
				break;
			}
		}
	}
	Chek--;
	for (int i = 0; i < like; i++) {
		if (i != Chek) {}
		else if (Likes[Chek].Status == 0) {
			cout << endl << "Ваша заявка на рассмотрении";
		}
		else if (Likes[Chek].Status == 1) {
			cout << endl << "Ваша заявка отклонена";
		}
		else if (Likes[Chek].Status == 2) {
			cout << endl << "Ваша заявка принята";
		}
	}

	char a = _getch();
	if (a == '/')
	{
		Out_Rab_like();
	}
	if (a == '-')
	{
		cout << endl;
		system("cls");
		PrintWait("Удаление !!!", 20);
		Sleep(500);
		CleanWait(10, 20);

		ofstream ae("Clients/" + login + ".txt");
		for (int i = 0; i < sizeRab_Like; i++) {
			if (i != Rab_Dal_Info) {
				ae << Rab_like[i].setAll() << endl;
			}
		}
		ae.close();
		sizeRab_Like--;
		ofstream aue("Spring.txt");
		for (int i = 0; i < like; i++)
		{
			if (login == Likes[i].Login_Rab) {
				if (Likes[i].Login_Rab_Dal == Rab_like[Rab_Dal_Info].Login) {}
			}
			if (login != Likes[i].Login_Rab) {
				aue << Likes[i].setAll() << endl;
			}
			if (login == Likes[i].Login_Rab) {
				if (Likes[i].Login_Rab_Dal != Rab_like[Rab_Dal_Info].Login) {
					aue << Likes[i].setAll() << endl;
				}
			}
		}
		aue.close();
		read_Rab_Dal_Like2(Rab_like[Rab_Dal_Info].Login);

		ofstream ttttt("Job/" + Rab_like[Rab_Dal_Info].Login + ".txt");
		for (int i = 0; i < sizeRab_Dal_Like; i++)
		{
			if (login == Rab_Dal_like[i].Login) {
				if (Likes[i].Login_Rab_Dal == Rab_like[Rab_Dal_Info].Login) {}
			}
			else if (login != Rab_Dal_like[i].Login) {
				ttttt << Rab_Dal_like[i].setAll() << endl;
			}
		}

		ttttt.close();

		Out_Rab_like();
	}
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Out_Rab_like_Info(t);
	}
}

//чтение тхт работника с избранными
void read_Rab_Like() {
	ofstream ttttttt(Rab_Love, ios::app);
	ttttttt.close();
	ifstream Fuc(Rab_Love);
	string Login;
	string Password;
	string Name_Org;
	string Familia;
	string Name;
	string Profession;
	string City;
	string Adress;
	string Dom;
	int Sex;
	int Pay;
	string Aducation;
	int Expirience;
	string Number;
	int Time_of_Contract;
	sizeRab_Like = 0;
	while (!Fuc.eof()) {
		sizeRab_Like++;
		//void getAll(string Name_Org, string Login, string Password, string Familia, string Name, string Profession, string City, string Adress, string Dom, int Pay, int Time_of_Contract, int Sex, string
		//	Aducation, int Expirience, string Number)
		Fuc >> Name_Org >> Login >> Password >> Familia >> Name >> Profession >> City >> Adress >> Dom >> Pay >> Time_of_Contract >> Sex >> Aducation >> Expirience >> Number;
		Rab_like[sizeRab_Like].getAll(Name_Org, Login, Password, Familia, Name, Profession, City, Adress, Dom, Pay, Time_of_Contract, Sex, Aducation, Expirience, Number);
	}
	sizeRab_Like--;
}

//чтение тхт работника с избранными (перегрузка)
void read_Rab_Like2(string name)
{
	ofstream ttttttt("Clients/" + name + ".txt", ios::app);
	ttttttt.close();
	ifstream Fuc("Clients/" + name + ".txt");
	string Login;
	string Password;
	string Name_Org;
	string Familia;
	string Name;
	string Profession;
	string City;
	string Adress;
	string Dom;
	int Sex;
	int Pay;
	string Aducation;
	int Expirience;
	string Number;
	int Time_of_Contract;
	sizeRab_Like = 0;
	while (!Fuc.eof()) {
		//void getAll(string Name_Org, string Login, string Password, string Familia, string Name, string Profession, string City, string Adress, string Dom, int Pay, int Time_of_Contract, int Sex, string
		//	Aducation, int Expirience, string Number)
		Fuc >> Name_Org >> Login >> Password >> Familia >> Name >> Profession >> City >> Adress >> Dom >> Pay >> Time_of_Contract >> Sex >> Aducation >> Expirience >> Number;
		Rab_like[sizeRab_Like].getAll(Name_Org, Login, Password, Familia, Name, Profession, City, Adress, Dom, Pay, Time_of_Contract, Sex, Aducation, Expirience, Number);
		sizeRab_Like++;
	}
	sizeRab_Like--;
}

//фильтры работодателей
void Filter_Rab()
{
	system("cls");

	read_Rab_Dal_DataBase();

	read_Rab_DataBase();
	cout << "Выберите фильтры:"<<endl;
	cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "1.ЗП\n2.Город\n3.Опыт\n4.Пол\n5.Без фильтра\n6.Назад";
	char a = _getch();
	sizeFilter = 0;
	string newFilt;
	int f;
	int ZP;
	if (a == '1') {
		cout << endl << "Введите желаемую зарплату: ";
		cin >> ZP;
		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (ZP <= i.Pay)
			{
				//nextRab_Dal[sizeFilter].getAll(i);
				sizeFilter++;
			}
		}
		f = sizeFilter;
		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (ZP <= i.Pay)
			{
				nextRab_Dal[f].getAll(i); f--;
			}
		}
	}
	else if (a == '2')
	{
		newFilt = newRab[Rab_Pos].City;
		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (i.City == newFilt)
			{
				//nextRab_Dal[sizeFilter].getAll(i);
				sizeFilter++;
			}
		}
		f = sizeFilter;
		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (i.City == newFilt)
			{
				nextRab_Dal[f].getAll(i); f--;
			}
		}
	}
	else if (a == '3')
	{
		ZP = newRab[Rab_Pos].Expirience;
		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (ZP >= i.Expirience)
			{
				if (i.Pay > 0)
				{
					//nextRab_Dal[sizeFilter].getAll(i);
					sizeFilter++;
				}
			}
		}
		f = sizeFilter;
		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (ZP >= i.Expirience)
			{
				if (i.Pay > 0)
				{
					nextRab_Dal[f].getAll(i); f--;
				}
			}
		}
	}

	else if (a == '4')
	{
		ZP = newRab[Rab_Pos].Sex;
		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (ZP == i.Sex)
			{
				//nextRab_Dal[sizeFilter].getAll(i);
				sizeFilter++;
			}
		}
		f = sizeFilter;

		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (ZP == i.Sex)
			{
				nextRab_Dal[f].getAll(i);
				f--;
			}
		}
	}
	else if (a == '5')
	{
		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (i.Pay > 0)
			{
				//nextRab_Dal[sizeFilter].getAll(i);
				sizeFilter++;
			}
		}
		f = sizeFilter;

		for (NewRab_Dal i : New_Rab_Dal)
		{
			if (i.Pay > 0)
			{
				nextRab_Dal[f].getAll(i);

				f--;
			}
		}
	}
	else if (a == '6')
	{
		Rab_Account();
	}
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(25, 20);
		Filter_Rab();

		}
	Out_Job();
	////char a = _getch();
}

//вывод работодптелей подходящих по фильтру
void Out_Job() {
	system("cls");
	cout << "Управление: '1-4' выбор для вывода более подробной информации ; '+ -' преключение страниц ;'/' назад " << endl;
	cout << "Страница : " << Page + 1 << endl;
	if (sizeFilter == 0) {
		cout << "Нет вакансий подходящих по фильтру " << endl; system("pause"); Filter_Rab();
	}
	else {
		counter = 0;

		if (Page == 0) {
			if (sizeFilter < 4) {
				for (int i = 0; counter < sizeFilter; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl << endl
						<< "Профессия : " << setw(23) << nextRab_Dal[i+1].Profession << " | "
						<< setw(20) << "Город : " << setw(20) << nextRab_Dal[i + 1].City << " | "
						<< setw(20) << "Зароботная плата : " << setw(20) << nextRab_Dal[i + 1].Pay << " | " << endl << endl
						<< "Срок контракта (годы) : " << setw(2) << nextRab_Dal[i + 1].Time_of_Contract << " | "
						<< setw(20) << "Минимальный опыт : " << setw(3) << nextRab_Dal[i + 1].Expirience << endl << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
			else {
				for (int i = 0; counter < 4; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl << endl
						<< "Профессия : " << setw(23) << nextRab_Dal[i + 1].Profession << " | "
						<< setw(20) << "Город : " << setw(20) << nextRab_Dal[i + 1].City << " | "
						<< setw(20) << "Зароботная плата : " << setw(20) << nextRab_Dal[i + 1].Pay << " | " << endl << endl
						<< "Срок контракта (годы) : " << setw(2) << nextRab_Dal[i + 1].Time_of_Contract << " | "
						<< setw(20) << "Минимальный опыт : " << setw(3) << nextRab_Dal[i + 1].Expirience << endl << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
		}
		else {
			int fullLists = sizeFilter / 4;
			int lastList = sizeFilter - fullLists * 4;
			if (lastList == 0)lastList = 4;
			if (sizeFilter < ((Page + 1) * 4)) {
				for (int i = (Page * 4); counter < lastList; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl << endl
						<< "Профессия : " << setw(23) << nextRab_Dal[i + 1].Profession << " | "
						<< setw(20) << "Город : " << setw(20) << nextRab_Dal[i + 1].City << " | "
						<< setw(20) << "Зароботная плата : " << setw(20) << nextRab_Dal[i + 1].Pay << " | " << endl << endl
						<< "Срок контракта (годы) : " << setw(2) << nextRab_Dal[i + 1].Time_of_Contract << " | "
						<< setw(20) << "Минимальный опыт : " << setw(3) << nextRab_Dal[i + 1].Expirience << endl << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
			else {
				for (int i = (Page * 4); counter < 4; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl << endl
						<< "Профессия : " << setw(23) << nextRab_Dal[i + 1].Profession << " | "
						<< setw(20) << "Город : " << setw(20) << nextRab_Dal[i+1].City << " | "
						<< setw(20) << "Зароботная плата : " << setw(20) << nextRab_Dal[i + 1].Pay << " | " << endl << endl
						<< "Срок контракта (годы) : " << setw(2) << nextRab_Dal[i + 1].Time_of_Contract << " | "
						<< setw(20) << "Минимальный опыт : " << setw(3) << nextRab_Dal[i + 1].Expirience << endl << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
		}
		int a = _getch();
		if (a == '/')
		{
			Filter_Rab();
		}
		else if (a == 45)
		{
			Page--;
			if (Page < 0) {
				system("cls");
				PrintWait("Не удачно", 20);
				Sleep(500);
				CleanWait(10, 20);
				Page++;
			}
			Out_Job();
		}
		else if (a == 61)
		{
			Page++;
			if ((Page * 4) +1> sizeFilter) {
				system("cls");
				PrintWait("Не удачно", 20);
				Sleep(500);
				CleanWait(10, 20);
				Page--;
			}
			Out_Job();
		}
		else if (a == '1') {
			int Pos = 0;
			Pos = a - '0';
			 t = Pos + (Page * 4);
			 if (t> sizeFilter){ Out_Job(); }
			Out_Job_Info(t);
		}
		else if(a == '2') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4);
			if (t > sizeFilter) { Out_Job(); }
			Out_Job_Info(t);
			}
			
		else if (a == '3') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4);
			if (t > sizeFilter) { Out_Job(); }
			Out_Job_Info(t);
		}
		else if (a == '4') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4);
			if (t > sizeFilter) { Out_Job(); }
			Out_Job_Info(t);
		}

		else {
			PrintWait("Команда не найдена", 20);
			Sleep(500);
			CleanWait(20, 20); Out_Job();
		}
	}
}

//вывод подробной информации об работодателе
void Out_Job_Info(int Rab_Dal_Info) {
	system("cls");
	read_Rab_Like;
	cout << "Управление: '/' назад  ; '+' добавление в избранное " << endl;
	cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "    " << endl
		<< "Названеи организации : " << setw(42) << nextRab_Dal[Rab_Dal_Info].Name_Org << endl
		<< "Должность на которую ищется работнк :  " << setw(26) << nextRab_Dal[Rab_Dal_Info].Profession << endl
		<< "Город в котором находится организациия : " << setw(24) << nextRab_Dal[Rab_Dal_Info].City << endl
		<< "Адресс огрганизации : " << setw(39) << nextRab_Dal[Rab_Dal_Info].Adress << "  " << nextRab_Dal[Rab_Dal_Info].Dom << endl
		<< "Предлагаемая зарплата : " << setw(41) << nextRab_Dal[Rab_Dal_Info].Pay << endl
		<< "Длительность на контракта : " << setw(37) << nextRab_Dal[Rab_Dal_Info].Time_of_Contract << endl;

	if (nextRab_Dal[Rab_Dal_Info].Sex == 1) { cout << "Требуемый пол : " << setw(49) << "мужской" << endl; }
	if (nextRab_Dal[Rab_Dal_Info].Sex == 2) { cout << "Требуемый пол : " << setw(49) << "женский" << endl; }
	cout << "Минимальный уровень образования : " << setw(31) << nextRab_Dal[Rab_Dal_Info].Aducation << endl
		<< "Минимальный стаж : " << setw(46) << nextRab_Dal[Rab_Dal_Info].Expirience << endl
		<< "Контакты для связи: " << setw(45) << nextRab_Dal[Rab_Dal_Info].Number << endl
		<< "Фамилия  HR-менеджера : " << setw(41) << nextRab_Dal[Rab_Dal_Info].Familia << endl
		<< "Имя  HR-менеджера : " << setw(45) << nextRab_Dal[Rab_Dal_Info].Name << endl;
	char a = _getch();
	if (a == '/')
	{
		Out_Job();
	}
	else if (a == '=')

	{
		Read_LIKES();
		read_Rab_Dal_Like2(nextRab_Dal[Rab_Dal_Info].Login);
		cout << endl;
		PrintWait("Добавление !!!", 20);
		Sleep(500);
		CleanWait(16, 20);

		ofstream Comm("Spring.txt", ios::app);
		ofstream newfile("Clients/" + login + ".txt", ios::app);
		ofstream newfi("Job/" + nextRab_Dal[Rab_Dal_Info].Login + ".txt", ios::app);
		int Chek = 0;
		for (int i = 0; i < like; i++) {
			if (login == Likes[i].Login_Rab) {
				if (nextRab_Dal[Rab_Dal_Info].Login == Likes[i].Login_Rab_Dal) {
					Chek++;
				}
			}
		}
		if (Chek != 0) {
			PrintWait("Данная вакансия уже есть в избранном", 20);
			Sleep(500);
			CleanWait(37, 20);
		}
		else {
			int a = 0;
			Comm << login << " " << nextRab_Dal[Rab_Dal_Info].Login << " " << a << endl;
			newfile << nextRab_Dal[Rab_Dal_Info].setAll() << endl;
			newfi << newRab[Rab_Pos].setAll() << endl;
		}
		newfi.close();
		Comm.close();
		newfile.close();
		Out_Job();
	}
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Out_Job_Info(t );
	}
}

//выбор входа или регестрации для рабочего
void Enterence_or_regRab()
{
	setlocale(LC_ALL, "en_US.UTF-8");
	system("cls");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "en_US.UTF-8");
	cout << "\n";
	cout << "\n";
cout << setw(125) << u8"  	        ███████╗███╗   ██╗████████╗██████╗  █████╗ ███╗   ██╗ ██████╗███████╗       ██████╗ ██████╗\n"
	 << setw(125) << u8"		██╔════╝████╗  ██║╚══██╔══╝██╔══██╗██╔══██╗████╗  ██║██╔════╝██╔════╝     ██╔═══██╗██╔══██╗\n"
	 << setw(125) << u8"		█████╗  ██╔██╗ ██║   ██║   ██████╔╝███████║██╔██╗ ██║██║     █████╗       ██║   ██║██████╔╝\n"
	 << setw(125) << u8"		██╔══╝  ██║╚██╗██║   ██║   ██╔══██╗██╔══██║██║╚██╗██║██║     ██╔══╝║   	  ██║   ██║██╔══██╗\n"
	 << setw(125) << u8"		███████╗██║ ╚████║   ██║   ██║  ██║██║  ██║██║ ╚████║╚██████╗███████╗     ╚██████╔╝██║  ██║\n"
	 << setw(125) << u8"		╚══════╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝╚══════╝      ╚═════╝ ╚═╝  ╚═╝\n";
cout << "\n";
cout << "\n";
cout << setw(125) << u8"	        ██████╗ ███████╗ ██████╗ ██╗███████╗████████╗██████╗  █████╗ ████████╗██╗ ██████╗ ███╗   ██╗\n";
cout << setw(125) << u8"		██╔══██╗██╔════╝██╔════╝ ██║██╔════╝╚══██╔══╝██╔══██╗██╔══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║\n";
cout << setw(125) << u8"		██████╔╝█████╗  ██║  ███╗██║███████╗   ██║   ██████╔╝███████║   ██║   ██║██║   ██║██╔██╗ ██║\n";
cout << setw(125) << u8"		██╔══██╗██╔══╝  ██║   ██║██║╚════██║   ██║   ██╔══██╗██╔══██║   ██║   ██║██║   ██║██║╚██╗██║\n";
cout << setw(125) << u8"		██║  ██║███████╗╚██████╔╝██║███████║   ██║   ██║  ██║██║  ██║   ██║   ██║╚██████╔╝██║ ╚████║\n";
cout << setw(125) << u8"		╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═╝╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝\n";


	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << endl << endl << endl << setw(70) << "1.Регистрация\n" << setw(63) << "2.Вход\n" << setw(64) << "3.Назад\n" ;
	char a = _getch();
	if (a == '1') { regRab(); }
	if (a == '2') { EnterenceRab(); }
	if (a == '3') { regMenu(); }
}

//считывание бд рабочих
void read_Rab_DataBase()
{
	ofstream Rrrrrrrrr("Rab.txt", ios::app);
	Rrrrrrrrr.close();
	ifstream Fuck("Rab.txt");
	string Login;
	string Password;
	string Familia;
	string Name;
	int Sex;
	int Age;
	string City;
	string Aducation;
	double Expirience;
	string Number;
	sizeRab = 0;
	while (!Fuck.eof()) {
		Fuck >> Login >> Password >> Familia >> Name >> City >> Sex >> Age >> Aducation >> Expirience >> Number;
		newRab[sizeRab].getAll(Login, Password, Familia, Name, City, Sex, Age, Aducation, Expirience, Number);
		sizeRab++;
	}
	sizeRab--;
}

//вход рабочего
void EnterenceRab() {
	setlocale(LC_ALL, "en_US.UTF-8");
	system("cls");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "en_US.UTF-8");
	cout << "\n";
	cout << "\n";
	cout << setw(125) << u8"  	        ███████╗███╗   ██╗████████╗██████╗  █████╗ ███╗   ██╗ ██████╗███████╗   \n";
	cout << setw(125) << u8"		██╔════╝████╗  ██║╚══██╔══╝██╔══██╗██╔══██╗████╗  ██║██╔════╝██╔════╝\n";
	cout << setw(125) << u8"		█████╗  ██╔██╗ ██║   ██║   ██████╔╝███████║██╔██╗ ██║██║     █████╗\n";
	cout << setw(125) << u8"		██╔══╝  ██║╚██╗██║   ██║   ██╔══██╗██╔══██║██║╚██╗██║██║     ██╔══╝║\n";
	cout << setw(125) << u8"		███████╗██║ ╚████║   ██║   ██║  ██║██║  ██║██║ ╚████║╚██████╗███████╗\n";
	cout << setw(125) << u8"		╚══════╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝╚══════╝\n";




	//███████╗███╗   ██╗████████╗██████╗  █████╗ ███╗   ██╗ ██████╗███████╗
	//	██╔════╝████╗  ██║╚══██╔══╝██╔══██╗██╔══██╗████╗  ██║██╔════╝██╔════╝
	//	█████╗  ██╔██╗ ██║   ██║   ██████╔╝███████║██╔██╗ ██║██║     █████╗
	//	██╔══╝  ██║╚██╗██║   ██║   ██╔══██╗██╔══██║██║╚██╗██║██║     ██╔══╝
	//	███████╗██║ ╚████║   ██║   ██║  ██║██║  ██║██║ ╚████║╚██████╗███████╗
	//	╚══════╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝╚══════╝


	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int Chek = 0;
	Rab_Pos = -1;
	read_Rab_DataBase();
	string Login;
	string Password;
	cout << "Введите Логин : ";
	getline(cin, a);
	Login = inOneLine(a);
	
	for (int i = 0; i < sizeRab+1; i++) {
		if (newRab[i].Login == Login)
		{

			Chek++;
		}

	}






	cout << "Введите пароль : ";
	//cin >> Password;
	//cout << "Введите свою фамилию : ";
	getline(cin, a);
	Password = inOneLine(a);
	/*for (NewRab i : newRab)
	{
		
		if (i.Password == Password)
		{
			Chek++;
			
		}
	}*/
	for (int i = 0; i < sizeRab+1; i++) {Rab_Pos++;

		if (newRab[i].Password == Password)
		{
			Chek++;
			goto SUDA;
		}

	}
SUDA: {
	}
if (Chek == 2) {
	cout << "Успешный вход!!!" << endl;	login = Login;
	ofstream next(Rab_Love, ios::app);
	next.close();
	Sleep(1000);
	Rab_Account();
}
else {
	cout << "Повторите попытку входа " << endl;
	Sleep(1000);
	Enterence_or_regRab();
	}
}

//регистрация рабочего
void regRab(){


	setlocale(LC_ALL, "en_US.UTF-8");
	system("cls");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "en_US.UTF-8");
	cout << "\n";
	cout << "\n";
	cout << setw(125) << u8"	        ██████╗ ███████╗ ██████╗ ██╗███████╗████████╗██████╗  █████╗ ████████╗██╗ ██████╗ ███╗   ██╗\n";
	cout << setw(125) << u8"		██╔══██╗██╔════╝██╔════╝ ██║██╔════╝╚══██╔══╝██╔══██╗██╔══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║\n";
	cout << setw(125) << u8"		██████╔╝█████╗  ██║  ███╗██║███████╗   ██║   ██████╔╝███████║   ██║   ██║██║   ██║██╔██╗ ██║\n";
	cout << setw(125) << u8"		██╔══██╗██╔══╝  ██║   ██║██║╚════██║   ██║   ██╔══██╗██╔══██║   ██║   ██║██║   ██║██║╚██╗██║\n";
	cout << setw(125) << u8"		██║  ██║███████╗╚██████╔╝██║███████║   ██║   ██║  ██║██║  ██║   ██║   ██║╚██████╔╝██║ ╚████║\n";
	cout << setw(125) << u8"		╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═╝╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝\n";
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream blyat(Rab, ios::app);
	int Chek = 0;
	read_Rab_DataBase();
	string Login;
	string Password;
	string Familia;
	string Name;
	int Sex;
	int Age;
	string City;
	string Aducation;
	int Expirience;
	string Number;

	cout << "Введите Логин : ";
	getline(cin, a);
	Login = inOneLine(a);

	for (NewRab i : newRab)
	{
		if (i.Login == Login)
		{
			cout << "Такой логин уже существует " << endl;
			Sleep(1000);
			Enterence_or_regRab();
		}
	}
	cout << "Введите пароль : ";
	getline(cin, a);
	Password = inOneLine(a);
	cout << "Введите свою фамилию : ";
	getline(cin, a);
	Familia = inOneLine(a);
	cout << "Введите Имя : ";
	getline(cin, a);
	Name = inOneLine(a);
	cout << "Введите город проживания: ";
	getline(cin, a);
	City = inOneLine(a);
	cout << "Введите пол  (1-мужчина; 2-женщина) : ";
	cin >> Sex;
	cout << "Введите возраст : ";
	cin >> Age;
	cout << "Введите образование : ";
	getline(cin, a); getline(cin, a);
	Aducation = inOneLine(a);
	cout << "Введите стаж : ";
	cin >> Expirience;
	cout << "Введите контакты для связи: ";
	getline(cin, a); 	getline(cin, a);
	Number = inOneLine(a);

	cout << "Анкета создана!!! ";
	system("pause");
	login=Login;
	ofstream next("Clients/" + login + ".txt");
	next.close();

	if (sizeRab > 0) {
		sizeRab++;
		newRab[sizeRab].getAll(Login, Password, Familia, Name, City, Sex, Age, Aducation, Expirience, Number);
		blyat << endl << newRab[sizeRab].setAll();
		blyat.close();
	}
	else if (sizeRab == 0) {
		if (newRab[0].Familia == "") {
			sizeRab++;
			newRab[sizeRab].getAll(Login, Password, Familia, Name, City, Sex, Age, Aducation, Expirience, Number);
			blyat << newRab[sizeRab].setAll();
			blyat.close();
		}
		else {
			sizeRab++;
			newRab[sizeRab].getAll(Login, Password, Familia, Name, City, Sex, Age, Aducation, Expirience, Number);
			blyat << endl << newRab[sizeRab].setAll();
			blyat.close();
		}

	}
	Rab_Account();
}
//
//
//
//
//

void Out_Job_Rab_Dal() {
	read_Rab_Dal_Like2(login_Dal);
	read_Rab_Dal_Like2(login_Dal);
	system("cls");
	cout << "Управление: '1-4' выбор для вывода более подробной информации ; '+ -' преключение страниц ;'/' назад " << endl;
	cout << "Страница : " << Page + 1 << endl;
	if (sizeRab_Dal_Like == 0) {
		cout << "Нет вакансий подходящих по фильтру " << endl; system("pause"); if (Admin == 1) { Admin_Rab_Dal(); }
		else { Account_Rab_Dal(); }
	}
	else {
		counter = 0;

		if (Page == 0) {
			if (sizeRab_Dal_Like < 4) {
				for (int i = 0; counter < sizeRab_Dal_Like; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl << endl
						<< "Город проживания : " << setw(20) << Rab_Dal_like[i].City << " | ";
					if (Rab_Dal_like[i].Sex == 1) { cout << "Пол : " << setw(20) << "мужской" << " | "; }
					if (Rab_Dal_like[i].Sex == 2) { cout << "Пол : " << setw(20) << "женский" << " | "; }
					cout << "Образование : " << setw(20) << Rab_Dal_like[i].Aducation << " | "
						<< setw(20) << "Опыт в годах : " << setw(10) << Rab_Dal_like[i].Expirience << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
			else {
				for (int i = 0; counter < 4; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl << endl
						<< "Город проживания : " << setw(20) << Rab_Dal_like[i].City << " | ";
					if (Rab_Dal_like[i].Sex == 1) { cout << "Пол : " << setw(20) << "мужской" << " | "; }
					if (Rab_Dal_like[i].Sex == 2) { cout << "Пол : " << setw(20) << "женский" << " | "; }
					cout << "Образование : " << setw(20) << Rab_Dal_like[i].Aducation << " | "
						<< setw(20) << "Опыт в годах : " << setw(10) << Rab_Dal_like[i].Expirience << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
		}
		else {
			int fullLists = sizeRab_Dal_Like / 4;
			int lastList = sizeRab_Dal_Like - fullLists * 4;
			if (lastList == 0)lastList = 4;
			if (sizeRab_Dal_Like < ((Page + 1) * 4)) {
				for (int i = (Page * 4); counter < lastList; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl << endl
						<< "Город проживания : " << setw(20) << Rab_Dal_like[i].City << " | ";
					if (Rab_Dal_like[i].Sex == 1) { cout << "Пол : " << setw(20) << "мужской" << " | "; }
					if (Rab_Dal_like[i].Sex == 2) { cout << "Пол : " << setw(20) << "женский" << " | "; }
					cout << "Образование : " << setw(20) << Rab_Dal_like[i].Aducation << " | "
						<< setw(20) << "Опыт в годах : " << setw(10) << Rab_Dal_like[i].Expirience << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
			else {
				for (int i = (Page * 4); counter < 4; i++) {
					counter++;
					cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
					cout << "№" << setw(3) << counter << endl << endl
						<< "Город проживания : " << setw(20) << Rab_Dal_like[i].City << " | ";
					if (Rab_Dal_like[i].Sex == 1) { cout << "Пол : " << setw(20) << "мужской" << " | "; }
					if (Rab_Dal_like[i].Sex == 2) { cout << "Пол : " << setw(20) << "женский" << " | "; }
					cout << "Образование : " << setw(20) << Rab_Dal_like[i].Aducation << " | "
						<< setw(20) << "Опыт в годах : " << setw(10) << Rab_Dal_like[i].Expirience << endl;
					cout << "_______________________________________________________________________________________________________________________________________________________________________" << endl;
				}
			}
		}
		int a = _getch();
		if (a == '/')
		{
			if (Admin == 1) { Admin_Rab_Dal(); }
			else { Account_Rab_Dal(); }
		}
		else if (a == 45)
		{
			Page--;
			if (Page < 0) {
				system("cls");
				PrintWait("Не удачно", 20);
				Sleep(500);
				CleanWait(10, 20);
				Page++;
			}
			Out_Job_Rab_Dal();
		}
		else if (a == 61)
		{
			Page++;
			if ((Page * 4) > sizeRab_Dal_Like) {
				system("cls");
				PrintWait("Не удачно", 20);
				Sleep(500);
				CleanWait(10, 20);
				Page--;
			}
			Out_Job_Rab_Dal();
		}
		else if (a == '1') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4) - 1;
			if (t > sizeRab_Dal_Like) { Out_Job_Rab_Dal(); }
			Out_Job_Dal_Info(t);
		}
		else if (a == '2') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4) - 1;
			if (t > sizeRab_Dal_Like) { Out_Job_Rab_Dal(); }
			Out_Job_Dal_Info(t);
		}
		else if (a == '3') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4) - 1;
			if (t > sizeRab_Dal_Like) { Out_Job_Rab_Dal(); }
			Out_Job_Dal_Info(t);
		}
		else if (a == '4') {
			int Pos = 0;
			Pos = a - '0';
			t = Pos + (Page * 4) - 1;
			if (t> sizeRab_Dal_Like){ Out_Job_Rab_Dal(); }
			Out_Job_Dal_Info(t);
		}
		else {
			PrintWait("Команда не найдена", 20);
			Sleep(500);
			CleanWait(20, 20); Out_Job_Rab_Dal();
		}

	}
}

void Out_Job_Dal_Info(int Rab_Dal_Info) {
	system("cls");
	//Fu >> Login >> Password >> Familia >> Name >> City >> Sex >> Age >> Aducation >> Expirience >> Number;
	cout << "Управление: '/' назад  ; '-' отказать " << endl;
	cout << "________________________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "    " << endl
		<< "Фамилия : " << setw(47) << Rab_Dal_like[Rab_Dal_Info].Familia << endl
		<< "Имя :  " << setw(50) << Rab_Dal_like[Rab_Dal_Info].Name << endl
		<< "Город проживания : " << setw(38) << Rab_Dal_like[Rab_Dal_Info].City << endl;
	if (Rab_Dal_like[Rab_Dal_Info].Sex == 1) { cout << "Пол работника : " << setw(41) << "мужской" << endl; }
	if (Rab_Dal_like[Rab_Dal_Info].Sex == 2) { cout << "Пол работника : " << setw(41) << "женский" << endl; }
	cout << "Уровень образования : " << setw(35) << Rab_Dal_like[Rab_Dal_Info].Aducation << endl
		<< "Стаж работника : " << setw(40) << Rab_Dal_like[Rab_Dal_Info].Expirience << endl
		<< "Контакты для связи: " << setw(37) << Rab_Dal_like[Rab_Dal_Info].Number << endl;

	char a = _getch();
	if (a == '/')
	{
		Out_Job_Rab_Dal();
	}
	else if (a == '-')

	{
		Read_LIKES2(login_Dal);
		read_Rab_Dal_Like2(login_Dal);
		PrintWait("Отказ !!!", 20);
		Sleep(500);
		CleanWait(10, 20);

		ofstream Comm("Spring.txt");
		int Chek = 0;
		for (int i = 0; i < like; i++) {
			Chek++;
			if (Likes[i].Login_Rab == Rab_Dal_like[Rab_Dal_Info].Login) {
				if (Likes[i].Login_Rab_Dal == login_Dal) {
					break;
				}
			}
		}
		Chek--;
		for (int i = 0; i < like; i++) {
			if (i != Chek) { Comm << Likes[i].setAll() << endl; }
			else if (Likes[Chek].Status == 0) {
				Likes[Chek].Status = 1;
				Comm << Likes[Chek].setAll() << endl;
			}
			else if (Likes[Chek].Status == 1) {
				PrintWait("В данной вакансии уже было отказано", 20);
				Sleep(500);
				CleanWait(37, 20);
				Comm << Likes[Chek].setAll() << endl;
			}
			else if (Likes[Chek].Status == 2) {
				PrintWait("В данная вакансия уже была одобрена", 20);
				Sleep(500);
				CleanWait(37, 20);
				Comm << Likes[Chek].setAll() << endl;
			}
		}
		Out_Job_Rab_Dal();
	}
	else if (a == '=')

	{
		Read_LIKES2(login_Dal);
		read_Rab_Dal_Like2(login_Dal);
		PrintWait("Одобрение !!!", 20);
		Sleep(500);
		CleanWait(14, 20);

		ofstream Comm("Spring.txt");
		int Chek = 0;

		for (int i = 0; i < like; i++) {
			Chek++;
			if (Likes[i].Login_Rab == Rab_Dal_like[Rab_Dal_Info].Login) {
				if (Likes[i].Login_Rab_Dal == login_Dal) {
					break;
				}
			}
		}
		Chek--;
		for (int i = 0; i < like; i++) {
			if (i != Chek) { Comm << Likes[i].setAll() << endl; }
			else if (Likes[Chek].Status == 0) {
				Likes[Chek].Status = 2;
				Comm << Likes[Chek].setAll() << endl;
			}
			else if (Likes[Chek].Status == 1) {
				PrintWait("В данной вакансии уже было отказано", 20);
				Sleep(500);
				CleanWait(37, 20);
				Comm << Likes[Chek].setAll() << endl;
			}
			else if (Likes[Chek].Status == 2) {
				PrintWait("В данная вакансия уже была одобрена", 20);
				Sleep(500);
				CleanWait(37, 20);
				Comm << Likes[Chek].setAll() << endl;
			}
		}
		Out_Job_Rab_Dal();
	}
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20);  Out_Job_Dal_Info(t);
	}
}

void Account_Rab_Dal() {
	system("cls");
	Page = 0;
	cout << "Выберите действие :" << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "1.Откликнувшиеся на вaкансию\n2.Редакция аккаунта\n3.Удаление аккаунта\n4.Назад\n5.Выход из программы\n";
	char a = _getch();
	if (a == '1') { Out_Job_Rab_Dal(); }
	else if (a == '2') { Redact_Rab_Dal_Account(); }
	else if (a == '3') { Del_Rab_Dal_Account(); }
	else if (a == '4') {

		if (Admin == 1) { Admin_Rab_Dal(); }
		else { Enterence_or_regRab_Dal(); }
	}
	else if (a == '5') {
		system("cls");
		system("color 4");
		cout << "Производится выход";
		Sleep(1000);
		system("color 7");
		exit(0);
	}
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Account_Rab_Dal();
	}
}

void Del_Rab_Dal_Account() {
	ofstream ae("Job/" + login_Dal + ".txt");
	ae.close();

	Read_LIKES();
	for (int i = 0; i < like; i++)
	{
		if (login_Dal == Likes[i].Login_Rab_Dal) {
			read_Rab_Like2(Likes[i].Login_Rab);
			ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
			for (int y = 0; y < sizeRab_Like; y++) {
				if (login_Dal != Rab_like[y].Login) {
					ttttt << Rab_like[y].setAll() << endl;

				}
			}
			ttttt.close();
		}
	}

	Read_LIKES();
	ofstream aue("Spring.txt");
	for (int i = 0; i < like; i++)
	{
		if (login_Dal != Likes[i].Login_Rab_Dal) {
			aue << Likes[i].setAll() << endl;
		}
	}
	aue.close();

	read_Rab_DataBase();
	ofstream Rrrrrrrrr("Rab_Dal.txt");

	for (int i = 0; i < sizeRab_Dal+1; i++) {
		if (login_Dal != New_Rab_Dal[i].Login) {
			if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
			else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
		}
	}
	Rrrrrrrrr.close();
	cout << endl;
	PrintWait("Удаление аккаунта !!!", 20);
	Sleep(500);
	CleanWait(21, 20);
	if (Admin == 1) { Admin_Rab_Dal(); }
	else { regMenu(); }
}

void Redact_Rab_Dal_Account() {
	system("cls");
	cout << "Выберите действие :" << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "1.Изменение контактных данных\n2.Редактирование адреса\n3.Изменение условий\n/.Назад\n";
	char a = _getch();
	if (a == '1') { Redact_Rab_Dal_Account1(); }
	else if (a == '2') { Redact_Rab_Dal_Account2(); }
	else if (a == '3') { Redact_Rab_Dal_Account3(); }
	else if (a == '/') {
		if (Admin == 1) { Admin_Rab_Dal(); }
		else { Account_Rab_Dal(); }
	}
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Redact_Rab_Dal_Account();
	}
}

void Redact_Rab_Dal_Account1() {
	system("cls");
	cout << "Управление: '1-4' выбор  ; '/' назад " << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "Выберите то что хотите изменить в своей анкете:\n"
		<< "1-Название организации\n"
		<< "2-Фамилия HR-менеджера\n"
		<< "3-Имя HR-менеджера\n"
		<< "4-Контакты для связи\n"
		<< endl;
	char a = _getch();
	cout << "Выбран " << a << " пункт для редакции" << endl;
	cout << "Введите новые данные : ";
	read_Rab_DataBase();
	string newww;
	int newwww;
	if (a == '/') {
		
		Redact_Rab_Dal_Account(); 
	}
	if (a == '1') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Name_Org = newww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Name_Org = newww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}cout << endl;
		PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20);
		Redact_Rab_Dal_Account1();
	}
	if (a == '2') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Familia = newww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Familia = newww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}
		PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20);
		Redact_Rab_Dal_Account1();
	}
	if (a == '3') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Name = newww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Name = newww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20);
		Redact_Rab_Dal_Account1();
	}
	if (a == '4') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Number = newww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Number = newww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20);
		Redact_Rab_Dal_Account1();
	}

	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Redact_Rab_Dal_Account1();
	}
}

void Redact_Rab_Dal_Account2() {
	system("cls");
	cout << "Управление: '1-3' выбор  ; '/' назад " << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "Выберите то что хотите изменить в своей анкете:\n"
		<< "1-город организации\n"
		<< "2-улицу организации\n"
		<< "3-номер дома организации\n"
		<< endl;
	char a = _getch();
	cout << "Выбран " << a << " пункт для редакции" << endl;
	cout << "Введите новые данные : ";
	read_Rab_DataBase();
	string newww;
	int newwww;
	if (a == '/') {
		Redact_Rab_Dal_Account();
	}
	if (a == '1') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].City = newww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].City = newww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}
		PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20); Redact_Rab_Dal_Account2();
	}
	if (a == '2') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Adress = newww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Adress = newww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20); Redact_Rab_Dal_Account2();
	}
	if (a == '3') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Dom = newww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Dom = newww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20); Redact_Rab_Dal_Account2();
	}

	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Redact_Rab_Dal_Account2();
	}
}

void Redact_Rab_Dal_Account3() {
	system("cls");
	cout << "Управление: '1-6' выбор  ; '/' назад " << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "Выберите то что хотите изменить в своей анкете:\n"
		<< "1-зарплату\n"
		<< "2-Срок действия контракта(в годах)\n"
		<< "3-пол для должности (1-мужчина; 2-женщина)\n"
		<< "4-образование нужное для этой работы \n"
		<< "5-должность\n"
		<< "6-Стаж\n"
		<< endl;
	char a = _getch();
	cout << "Выбран " << a << " пункт для редакции" << endl;
	cout << "Введите новые данные : ";
	read_Rab_DataBase();
	string newww;
	int newwww;
	if (a == '/') {
		Redact_Rab_Dal_Account();
	}
	if (a == '1') {
		cin >> newwww;
		if (newwww < 0) {
			PrintWait("Вы никого не найдете", 20);
			Sleep(500);
			CleanWait(30, 20);
			Redact_Rab_Dal_Account3();
		}
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Pay = newwww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Pay = newwww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20); Redact_Rab_Dal_Account3();
	}
	if (a == '2') {
		cin >> newwww;
		if (newwww > 80) {
			PrintWait("Вы никого не найдете", 20);
			Sleep(500);
			CleanWait(30, 20);
			Redact_Rab_Dal_Account3();
		}
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Time_of_Contract = newwww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Time_of_Contract = newwww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20); Redact_Rab_Dal_Account3();
	}
	if (a == '3') {
		cin >> newwww;
		if (newwww < 1) {
			PrintWait("Прочтите условие !!!", 20);
			Sleep(500);
			CleanWait(30, 20);
			Redact_Rab_Dal_Account3();
		}
		if (newwww > 2) {
			PrintWait("Прочтите условие !!!", 20);
			Sleep(500);
			CleanWait(30, 20);
			Redact_Rab_Dal_Account3();
		}
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Sex = newwww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Sex = newwww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20); Redact_Rab_Dal_Account3();
	}

	if (a == '4') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Aducation = newww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Aducation = newww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20); Redact_Rab_Dal_Account3();
	}

	if (a == '5') {
		cin >> newww;
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Profession = newww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Profession = newww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20); Redact_Rab_Dal_Account3();
	}
	if (a == '6') {
		cin >> newwww;
		if (newwww > 80) {
			PrintWait("Вы никого не найдете", 20);
			Sleep(500);
			CleanWait(30, 20);
			Redact_Rab_Dal_Account3();
		}
		ofstream Rrrrrrrrr("Rab_Dal.txt");
		for (int i = 0; i < sizeRab_Dal+1; i++) {
			if (login_Dal != New_Rab_Dal[i].Login) {
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
			else if (login_Dal == New_Rab_Dal[i].Login) {
				New_Rab_Dal[i].Expirience = newwww;
				if (i == sizeRab_Dal) { Rrrrrrrrr << New_Rab_Dal[i].setAll(); }
				else { Rrrrrrrrr << New_Rab_Dal[i].setAll() << endl; }
			}
		}
		Rrrrrrrrr.close();

		Read_LIKES();
		for (int i = 0; i < like; i++)
		{
			if (login_Dal == Likes[i].Login_Rab_Dal) {
				read_Rab_Like2(Likes[i].Login_Rab);
				ofstream ttttt("Clients/" + Likes[i].Login_Rab + ".txt");
				for (int i = 0; i < sizeRab_Like; i++) {
					if (login_Dal != Rab_like[i].Login) {
						ttttt << Rab_like[i].setAll() << endl;
					}
					else if (login_Dal == Rab_like[i].Login) {
						Rab_like[i].Expirience = newwww;
						ttttt << Rab_like[i].setAll() << endl;
					}
				}
				ttttt.close();
			}
		}PrintWait("Изменено !!!", 20);
		Sleep(500);
		CleanWait(16, 20); Redact_Rab_Dal_Account3();
	}
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Redact_Rab_Dal_Account3();
	}
}

void read_Rab_Dal_Like()
{
	ofstream ttttt(Rab_Dal_Love, ios::app);
	ttttt.close();
	ifstream Fu(Rab_Dal_Love);
	string Login;
	string Password;
	string Familia;
	string Name;
	int Sex;
	int Age;
	string City;
	string Aducation;
	double Expirience;
	string Number;
	sizeRab_Dal_Like = 0;
	while (!Fu.eof()) {
		Fu >> Login >> Password >> Familia >> Name >> City >> Sex >> Age >> Aducation >> Expirience >> Number;
		Rab_Dal_like[sizeRab_Dal_Like].getAll(Login, Password, Familia, Name, City, Sex, Age, Aducation, Expirience, Number);
		sizeRab_Dal_Like++;
	}
	sizeRab_Dal_Like--;
}

void read_Rab_Dal_Like2(string name)
{
	ofstream ttttt("Job/" + name + ".txt", ios::app);
	ttttt.close();
	ifstream Fu("Job/" + name + ".txt");
	string Login;
	string Password;
	string Familia;
	string Name;
	int Sex;
	int Age;
	string City;
	string Aducation;
	double Expirience;
	string Number;
	sizeRab_Dal_Like = 0;
	while (!Fu.eof()) {
		Fu >> Login >> Password >> Familia >> Name >> City >> Sex >> Age >> Aducation >> Expirience >> Number;
		Rab_Dal_like[sizeRab_Dal_Like].getAll(Login, Password, Familia, Name, City, Sex, Age, Aducation, Expirience, Number);
		sizeRab_Dal_Like++;
	}
	sizeRab_Dal_Like--;
}

//выбор входа или регестрации работодателя
void Enterence_or_regRab_Dal()
{
	setlocale(LC_ALL, "en_US.UTF-8");
	system("cls");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "en_US.UTF-8");
	cout << "\n";
	cout << "\n";
	cout << setw(125) << u8"  	        ███████╗███╗   ██╗████████╗██████╗  █████╗ ███╗   ██╗ ██████╗███████╗       ██████╗ ██████╗\n"
		<< setw(125) << u8"		██╔════╝████╗  ██║╚══██╔══╝██╔══██╗██╔══██╗████╗  ██║██╔════╝██╔════╝     ██╔═══██╗██╔══██╗\n"
		<< setw(125) << u8"		█████╗  ██╔██╗ ██║   ██║   ██████╔╝███████║██╔██╗ ██║██║     █████╗       ██║   ██║██████╔╝\n"
		<< setw(125) << u8"		██╔══╝  ██║╚██╗██║   ██║   ██╔══██╗██╔══██║██║╚██╗██║██║     ██╔══╝║   	  ██║   ██║██╔══██╗\n"
		<< setw(125) << u8"		███████╗██║ ╚████║   ██║   ██║  ██║██║  ██║██║ ╚████║╚██████╗███████╗     ╚██████╔╝██║  ██║\n"
		<< setw(125) << u8"		╚══════╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝╚══════╝      ╚═════╝ ╚═╝  ╚═╝\n";
	cout << "\n";
	cout << "\n";
	cout << setw(125) << u8"	        ██████╗ ███████╗ ██████╗ ██╗███████╗████████╗██████╗  █████╗ ████████╗██╗ ██████╗ ███╗   ██╗\n";
	cout << setw(125) << u8"		██╔══██╗██╔════╝██╔════╝ ██║██╔════╝╚══██╔══╝██╔══██╗██╔══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║\n";
	cout << setw(125) << u8"		██████╔╝█████╗  ██║  ███╗██║███████╗   ██║   ██████╔╝███████║   ██║   ██║██║   ██║██╔██╗ ██║\n";
	cout << setw(125) << u8"		██╔══██╗██╔══╝  ██║   ██║██║╚════██║   ██║   ██╔══██╗██╔══██║   ██║   ██║██║   ██║██║╚██╗██║\n";
	cout << setw(125) << u8"		██║  ██║███████╗╚██████╔╝██║███████║   ██║   ██║  ██║██║  ██║   ██║   ██║╚██████╔╝██║ ╚████║\n";
	cout << setw(125) << u8"		╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═╝╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝\n";


	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << endl << endl << endl << setw(70) << "1.Регистрация\n" << setw(63) << "2.Вход\n" << setw(64) << "3.Назад\n";
	char a = _getch();
	if (a == '1') { regRab_Dal(); }
	if (a == '2') { EnterenceRab_Dal(); }
	if (a == '3') { regMenu(); }
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Enterence_or_regRab_Dal();
	}
}

//вход работодателя
void EnterenceRab_Dal() {
	setlocale(LC_ALL, "en_US.UTF-8");
	system("cls");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "en_US.UTF-8");
	cout << "\n";
	cout << "\n";
	cout << setw(125) << u8"  	        ███████╗███╗   ██╗████████╗██████╗  █████╗ ███╗   ██╗ ██████╗███████╗\n";
	cout << setw(125) << u8"		██╔════╝████╗  ██║╚══██╔══╝██╔══██╗██╔══██╗████╗  ██║██╔════╝██╔════╝\n";
	cout << setw(125) << u8"		█████╗  ██╔██╗ ██║   ██║   ██████╔╝███████║██╔██╗ ██║██║     █████╗\n";
	cout << setw(125) << u8"		██╔══╝  ██║╚██╗██║   ██║   ██╔══██╗██╔══██║██║╚██╗██║██║     ██╔══╝║\n";
	cout << setw(125) << u8"		███████╗██║ ╚████║   ██║   ██║  ██║██║  ██║██║ ╚████║╚██████╗███████╗\n";
	cout << setw(125) << u8"		╚══════╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝╚══════╝\n";




	//███████╗███╗   ██╗████████╗██████╗  █████╗ ███╗   ██╗ ██████╗███████╗
	//	██╔════╝████╗  ██║╚══██╔══╝██╔══██╗██╔══██╗████╗  ██║██╔════╝██╔════╝
	//	█████╗  ██╔██╗ ██║   ██║   ██████╔╝███████║██╔██╗ ██║██║     █████╗
	//	██╔══╝  ██║╚██╗██║   ██║   ██╔══██╗██╔══██║██║╚██╗██║██║     ██╔══╝
	//	███████╗██║ ╚████║   ██║   ██║  ██║██║  ██║██║ ╚████║╚██████╗███████╗
	//	╚══════╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝╚══════╝


	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);




	int Chek = 0;
	read_Rab_Dal_DataBase();
	string Login;
	string Password;
	cout << "Введите Логин : ";
	getline(cin, a);
	Login = inOneLine(a);
	
	for (int i = 0; i < sizeRab_Dal+1; i++) {
		if (New_Rab_Dal[i].Login == Login)
		{

			Chek++;
		}

	}
	cout << "Введите пароль : ";
	//cin >> Password;
	//cout << "Введите свою фамилию : ";
	getline(cin, a);
	Password = inOneLine(a);

	for (int i = 0; i < sizeRab_Dal+1; i++) {
		if (New_Rab_Dal[i].Password == Password)
		{

			Chek++;
		}

	}

if (Chek == 2) {
	cout << "Успешный вход!!!" << endl;
	login_Dal=Login;
	system("pause");
	Account_Rab_Dal();
}
else {
	cout << "Повторите попытку входа " << endl;
	system("pause");
	Enterence_or_regRab_Dal();
}
}

//чтение бд работодателей
void read_Rab_Dal_DataBase()
{
	ofstream rrrr("Rab_Dal.txt", ios::app);
	rrrr.close();
	ifstream Fuck("Rab_Dal.txt");
	string Name_Org;
	string Login;
	string Password;
	string Familia;
	string Name;
	int Sex;
	int Pay;
	string Profession;
	string City;
	string Adress;
	string Dom;
	string Aducation;
	int Expirience;
	string Number;
	int Time_of_Contract;
	sizeRab_Dal = 0;
	while (!Fuck.eof()) {
		//		return Login + " " + Password + " " + Familia + " " + Name + " " + Profession + " " + to_string(Pay) + " " + to_string(Time_of_Contract) + " " + to_string(Sex) + " " + Adress + " " + Aducation + " " + to_string(Expirience) + " " + Number;
		Fuck >> Name_Org >> Login >> Password >> Familia >> Name >> Profession >> City >> Adress >> Dom >> Pay >> Time_of_Contract >> Sex >> Aducation >> Expirience >> Number;
		New_Rab_Dal[sizeRab_Dal].getAll(Name_Org, Login, Password, Familia, Name, Profession, City, Adress, Dom, Pay, Time_of_Contract, Sex, Aducation, Expirience, Number);
		sizeRab_Dal++;
	}
	sizeRab_Dal--;
}

//регестрация работодателя
void regRab_Dal() {


	setlocale(LC_ALL, "en_US.UTF-8");
	system("cls");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "en_US.UTF-8");
	cout << "\n";
	cout << "\n";
	cout << setw(125) << u8"	        ██████╗ ███████╗ ██████╗ ██╗███████╗████████╗██████╗  █████╗ ████████╗██╗ ██████╗ ███╗   ██╗\n";
	cout << setw(125) << u8"		██╔══██╗██╔════╝██╔════╝ ██║██╔════╝╚══██╔══╝██╔══██╗██╔══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║\n";
	cout << setw(125) << u8"		██████╔╝█████╗  ██║  ███╗██║███████╗   ██║   ██████╔╝███████║   ██║   ██║██║   ██║██╔██╗ ██║\n";
	cout << setw(125) << u8"		██╔══██╗██╔══╝  ██║   ██║██║╚════██║   ██║   ██╔══██╗██╔══██║   ██║   ██║██║   ██║██║╚██╗██║\n";
	cout << setw(125) << u8"		██║  ██║███████╗╚██████╔╝██║███████║   ██║   ██║  ██║██║  ██║   ██║   ██║╚██████╔╝██║ ╚████║\n";
	cout << setw(125) << u8"		╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═╝╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝\n";




	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream blyat(Rab_Dal, ios::app);
	int Chek = 0;
	read_Rab_Dal_DataBase();
	string Login;
	string Name_Org;
	string Password;
	string Familia;
	string Name;
	int Sex;
	int Pay;
	string Profession;
	string Adress;
	string Dom;
	string City;

	string Aducation;
	int Expirience;
	string Number;
	int Time_of_Contract;
	cout << "Введите Логин : ";
	getline(cin, a);
	Login = inOneLine(a);
	login_Dal = inOneLine(a);
	for (NewRab_Dal i : New_Rab_Dal)
	{
		if (i.Login == Login)
		{
			cout << "Повторите попытку входа " << endl;
			Enterence_or_regRab_Dal();
		}
	}
	//void getAll(string Login, string Password, string Familia, string Name, string Profession,int Pay, int Time_of_Contract, bool Sex,string Adress,string
	//Aducation, double Expirience, string Number )

	cout << "Введите пароль : ";
	getline(cin, a);
	Password = inOneLine(a);
	cout << "Введите название организации : ";
	getline(cin, a);
	Name_Org = inOneLine(a);
	cout << "Введите фамилию HR-менеджера : ";
	getline(cin, a);
	Familia = inOneLine(a);
	cout << "Введите Имя HR-менеджера : ";
	getline(cin, a);
	Name = inOneLine(a);
	cout << "Введите должность : ";
	getline(cin, a);
	Profession = inOneLine(a);
	cout << "Введите город организации : ";
	getline(cin, a);
	City = inOneLine(a);
	cout << "Введите улицу организации : ";
	getline(cin, a);
	Adress = inOneLine(a);
	cout << "Введите номер дома организации : ";
	getline(cin, a);
	Dom = inOneLine(a);
	cout << "Введите зарплату : ";
	cin >> Pay;
	cout << "Введите время действия контракта : ";
	cin >> Time_of_Contract;
	cout << "Введите пол для должности (1-мужчина; 2-женщина) : ";
	cin >> Sex;
	cout << "Введите образование нужное для этой работы : ";
	getline(cin, a); getline(cin, a);
	Aducation = inOneLine(a);

	cout << "Введите минимальный стаж : ";
	cin >> Expirience;
	cout << "Введите контакты для связи: ";
	getline(cin, a); 	getline(cin, a);
	Number = inOneLine(a);

	cout << "Анкета создана!!! ";
	system("pause");
	if (sizeRab_Dal > 0) {
		sizeRab_Dal++;
		New_Rab_Dal[sizeRab_Dal].getAll(Name_Org, Login, Password, Familia, Name, Profession, City, Adress, Dom, Pay, Time_of_Contract, Sex, Aducation, Expirience, Number);
		blyat << endl << New_Rab_Dal[sizeRab_Dal].setAll();
		blyat.close();
	}
	else if (sizeRab_Dal == 0) {
		if (New_Rab_Dal[0].Name_Org == "") {
			sizeRab_Dal++;
			New_Rab_Dal[sizeRab_Dal].getAll(Name_Org, Login, Password, Familia, Name, Profession, City, Adress, Dom, Pay, Time_of_Contract, Sex, Aducation, Expirience, Number);
			blyat  << New_Rab_Dal[sizeRab_Dal].setAll();
			blyat.close();
		}
		else {
			sizeRab_Dal++;
			New_Rab_Dal[sizeRab_Dal].getAll(Name_Org, Login, Password, Familia, Name, Profession, City, Adress, Dom, Pay, Time_of_Contract, Sex, Aducation, Expirience, Number);
			blyat << endl << New_Rab_Dal[sizeRab_Dal].setAll();
			blyat.close();
		}

	}
	Account_Rab_Dal();
}
//
//
//
//
//
//начальное меню
void regMenu()
{
	// Установка кодировки вывода консоли в UTF-8
	setlocale(LC_ALL, "en_US.UTF-8");
	system("cls");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "en_US.UTF-8");
	cout << "\n";
	cout << "\n";
	cout << setw(125) << u8" 	██╗ ██████╗ ██████╗ ██╗  ██╗██╗   ██╗███╗   ██╗████████╗\n";
	cout << setw(125) << u8" 	██║██╔═══██╗██╔══██╗██║  ██║██║   ██║████╗  ██║╚══██╔══╝\n";
	cout << setw(125) << u8"	██║██║   ██║██████╔╝███████║██║   ██║██╔██╗ ██║   ██║\n";
	cout << setw(125) << u8"   ██   ██║██║   ██║██╔══██╗██╔══██║██║   ██║██║╚██╗██║   ██║\n";
	cout << setw(125) << u8"   ╚█████╔╝╚██████╔╝██████╔╝██║  ██║╚██████╔╝██║ ╚████║   ██║\n";
	cout << setw(125) << u8"    ╚════╝  ╚═════╝ ╚═════╝ ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝   ╚═╝\n";
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout <<endl<<endl<<endl<< setw(63) << "1.Работник\n" << setw(67)<<"2.Работодатель\n" << setw(60)<<"3.Админ\n" << setw(70)<<"4.Завершить работу";
	char a = _getch();
	if (a == '1') { Enterence_or_regRab(); }
	if (a == '2') { Enterence_or_regRab_Dal(); }
	else if (a == '3') { Enterence_admin(); }
	else if (a == '4')
	{
		system("cls");
		system("color 4");
		cout << "Производится выход";
		Sleep(1000);
		system("color 7");
		exit(0);
	}
}

void  Enterence_admin() {
	setlocale(LC_ALL, "en_US.UTF-8");
	system("cls");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "en_US.UTF-8");
	cout << "\n";
	cout << "\n";
	cout << setw(125) << u8"	         █████╗ ██████╗ ███╗   ███╗██╗███╗   ██╗\n"
		<< setw(125) << u8"		██╔══██╗██╔══██╗████╗ ████║██║████╗  ██║\n"
		<< setw(125) << u8"		███████║██║  ██║██╔████╔██║██║██╔██╗ ██║\n"
		<< setw(125) << u8"		        ██╔══██║██║  ██║██║╚██╔╝██║██║██║╚██╗██║\n"
		<< setw(125) << u8"		██║  ██║██████╔╝██║ ╚═╝ ██║██║██║ ╚████║\n"
		<< setw(125) << u8"	╚═╝  ╚═╝╚═════╝ ╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝\n";
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	system("color 7");
	string Password;
	string Login_admin;
	cout << "Введите логин админа :";
	cin >> Login_admin;
	if (Login_admin == "ADmin") {
		cout << endl << "Введите пароль админа : :";
		cin >> Password;
		if (Password == "1122") {
			Admin++;
			admin_Menu();

		}
	}
	else { regMenu(); }
}

void admin_Menu() {
	system("cls");
	Admin = 1;
	cout << "1.Управление работниками\n2.Управление работодателями\n3.Главное меню";
	char a = _getch();
	if (a == '1') { Admin_Rab0(); }
	if (a == '2') { Admin_Rab_Dal0(); }
	else if (a == '3') { regMenu(); }
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); admin_Menu();
	}
}

void Admin_Rab_Dal0() {
	system("cls");
	string Login;
	read_Rab_Dal_DataBase();
	read_Rab_Dal_DataBase();
	cout << "Логины пользователей" << endl;
	if (sizeRab_Dal == 0) { cout << newRab[0].Login << endl; }
	else {
		for (int i = 0; i < sizeRab_Dal+1; i++)
		{
			cout << New_Rab_Dal[i].Login << endl;
		}
	}

	
	cout << "Введите Логин : ";
	bool Chek = 0;
	getline(cin, a);	
	Login = inOneLine(a);
	for (NewRab_Dal i : New_Rab_Dal)
	{
		if (i.Login == Login)
		{
			login_Dal = Login;
			Chek++;
		}
	}
	if (Chek = 1) {
		Admin_Rab_Dal();
	}
	else{
		PrintWait("Пользователь не найден", 20);
		Sleep(500);
		CleanWait(30, 20); Admin_Rab0();
	}
}
void Admin_Rab_Dal() {
	system("cls");
	cout << "Управление: '1-4' выбор ; '/' назад " << endl;
	cout << "Выберите действие :" << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "1.Окликнувшиеся на вaкансию\n2.Редакция аккаунта\n3.Удаление аккаунта\n/.Назад\n";
	char a = _getch();
	if (a == '1') { Out_Job_Rab_Dal(); }
	else if (a == '2') { Redact_Rab_Dal_Account(); }
	else if (a == '3') { Del_Rab_Dal_Account(); }
	else if (a == '/') { admin_Menu(); }
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Admin_Rab_Dal();
	}

}
void Admin_Rab() {
	Admin = 1;
	system("cls");
	cout << "Управление: '1-3' выбор ; '/' назад " << endl;
	cout << "Выберите действие :"<< Admin << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "1.Понравившееся\n2.Редакция аккаунта\n3.Удаление аккаунта";
	char a = _getch();
	if (a == '1') { Out_Rab_like(); }
	else if (a == '2') { Redact_Rab_Account(); }
	else if (a == '3') { Del_Rab_Account(); }
	else if (a == '/') { admin_Menu(); }
	else {
		PrintWait("Команда не найдена", 20);
		Sleep(500);
		CleanWait(20, 20); Admin_Rab();
	}


}

void Admin_Rab0() {
	system("cls");
	string Login;
	
	cout << "Логины пользователей :" << endl;
	read_Rab_DataBase();
	if (sizeRab==0){ cout << newRab[0].Login << endl; }
	else {
		for (int i = 0; i < sizeRab+1; i++)
		{
			cout << newRab[i].Login << endl;
		}
	}
	cout << "Введите Логин : ";
	bool Chek = 0;
	getline(cin, a); getline(cin, a);
	Login = inOneLine(a);
	
	for (NewRab i : newRab)
	{
		if (i.Login == Login)
		{
			login = Login;
			Chek++;
		}
	}
	if (Chek = 1) {
		Admin_Rab();
	}
	else {
		PrintWait("Пользователь не найден", 20);
		Sleep(500);
		CleanWait(30, 20); Admin_Rab();
	}
}
//русскый язык
void allLang()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}