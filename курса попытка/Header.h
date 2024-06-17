#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <clocale>
#include <cstdio>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string>
#include <cctype>
#include <iomanip>
#include <io.h>
#include <fcntl.h>
#include <codecvt>
using namespace std;



void  Enterence_admin();
void admin_Menu(); 
void Admin_Rab_Dal0();
void Admin_Rab0();
void Admin_Rab();
void Admin_Rab_Dal();

//
void Enterence_or_regRab_Dal();
void EnterenceRab_Dal();
void regRab_Dal();
void read_Rab_Dal_DataBase();
void read_Rab_Dal_Like2(string name);
void Out_Job_Dal_Info(int Rab_Dal_Info);
void Account_Rab_Dal();
void Del_Rab_Dal_Account();
void Redact_Rab_Dal_Account();
void Redact_Rab_Dal_Account1();
void Redact_Rab_Dal_Account2();
void Redact_Rab_Dal_Account3();
//
void Out_Rab_like();
void read_Rab_Like();
void read_Rab_DataBase();
void Filter_Rab();
void Enterence_or_regRab();
void regRab();
void EnterenceRab();
void Out_Job();
void Rab_Account();
void Out_Job_Info(int Rab_Dal_Info);
void Out_Rab_like_Info(int Rab_Dal_Info);
void read_Rab_Like2(string name);
void Read_LIKES();
void Del_Rab_Account();
void Redact_Rab_Account();
//
void regMenu();
void allLang();
string inOneLine(string str);
//
struct NewRab
{
	string Login;
	string Password;

	string Familia;
	string Name;
	string City;
	int Sex;
	int Age;
	string Aducation;
	int Expirience;
	string Number;

	void getAll(string Login, string Password,
		string Familia, string Name, string City, int Sex, int Age, string
		Aducation, int Expirience, string Number)
	{
		this->Login = Login;
		this->Password = Password;
		this->Familia = Familia;
		this->Name = Name;
		this->City = City;
		this->Sex = Sex;
		this->Age = Age;
		this->Aducation = Aducation;
		this->Expirience = Expirience;
		this->Number = Number;
	}

	void getAll(NewRab i)
	{
		this->Login = i.Login;
		this->Password = i.Password;
		this->Familia = i.Familia;
		this->Name = i.Name;
		this->City = i.City;
		this->Sex = i.Sex;
		this->Age = i.Age;
		this->Aducation = i.Aducation;
		this->Expirience = i.Expirience;
		this->Number = i.Number;
	}

	string setAll()
	{
		return Login + " " + Password + " " + Familia + " " + Name + " " + City + " " + to_string(Sex) + " " + to_string(Age) + " " + Aducation + " " + to_string(Expirience) + " " + Number;
	}
};

struct NewRab_Dal
{
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

	void getAll(string Name_Org, string Login, string Password, string Familia, string Name, string Profession, string City, string Adress, string Dom, int Pay, int Time_of_Contract, int Sex, string
		Aducation, int Expirience, string Number)
	{
		this->Name_Org = Name_Org;
		this->Login = Login;
		this->Password = Password;
		this->Familia = Familia;
		this->Name = Name;
		this->Profession = Profession;
		this->City = City;
		this->Adress = Adress;
		this->Dom = Dom;
		this->Pay = Pay;
		this->Time_of_Contract = Time_of_Contract;
		this->Sex = Sex;
		this->Aducation = Aducation;
		this->Expirience = Expirience;
		this->Number = Number;
	}

	void getAll(NewRab_Dal i)
	{
		this->Name_Org = i.Name_Org;
		this->Login = i.Login;
		this->Password = i.Password;
		this->Familia = i.Familia;
		this->Name = i.Name;
		this->Profession = i.Profession;
		this->City = i.City;
		this->Adress = i.Adress;
		this->Dom = i.Dom;
		this->Pay = i.Pay;
		this->Time_of_Contract = i.Time_of_Contract;
		this->Sex = i.Sex;
		this->Aducation = i.Aducation;
		this->Expirience = i.Expirience;
		this->Number = i.Number;
	}

	string setAll()
	{
		return Name_Org + " " + Login + " " + Password + " " + Familia + " " + Name + " " + Profession + " " + City + " " + Adress + " " + Dom + " " + to_string(Pay) + " " + to_string(Time_of_Contract) + " " + to_string(Sex) + " " + Aducation + " " + to_string(Expirience) + " " + Number;
	}
};

struct Spring
{
	string Login_Rab;
	string Login_Rab_Dal;
	int Status;

	void getAll(string Login_Rab, string Login_Rab_Dal, int Status)
	{
		this->Login_Rab = Login_Rab;
		this->Login_Rab_Dal = Login_Rab_Dal;
		this->Status = Status;
	}

	void getAll(Spring i)
	{
		this->Login_Rab = i.Login_Rab;
		this->Login_Rab_Dal = i.Login_Rab_Dal;
		this->Status = i.Status;
	}

	string setAll()
	{
		return Login_Rab + " " + Login_Rab_Dal + " " + to_string(Status);
	}
};
//
extern NewRab newRab[10000];
extern NewRab_Dal New_Rab_Dal[10000];
extern int Rab_Pos;
extern int sizeFilter;
