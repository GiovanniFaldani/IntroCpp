#pragma once
#include"StruttureDiControllo.h"
#include "Interfaccia.h"
#include <string>
#include <vector>

using namespace std;

class Weapon : public IInterfaccia
{
public:
	Weapon();

	Weapon(int InitDamage, string InitName)
	{
		this->WeaponDamage = InitDamage;
		this->name = InitName;
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
	string name = "";

	int DamageRef(int danno, int multiplier, int& totaldamage);

	void setCalcolatrice(Calcolatrice* calcolatrice);

	void esempioPuntatori();

	string getName();

	// implementazione dell'interfaccia
	void Interact() override;

private:

	int HP = 100;



};


//class WeaponTrace : public Weapon, public IInterfaccia 
//{
//
//};
