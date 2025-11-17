#pragma once
#include<string>
#include"StruttureDiControllo.h"

using namespace std;

class Weapon
{
public:
	Weapon();

	Weapon(int InitDamage, string InitName)
	{
		this->WeaponDamage = InitDamage;
		this->Name = InitName;
	};

	~Weapon();

	int value = 42;

	int* intPointer = nullptr;

	char* charPointer = nullptr;

	Calcolatrice* calcolatricePointer = nullptr;

	void initPointers();

	int arrayInt[5] = { 1,2,3,4,5 };

	int Damage(int danno, int multiplier, int* totaldamage);

	int WeaponDamage;
	string Name = "";

	int DamageRef(int danno, int multiplier, int& totaldamage);

	void setCalcolatrice(Calcolatrice* calcolatrice);

	void esempioPuntatori();

	string getName();

private:

	int HP = 100;



};
