#pragma once
#include"StruttureDiControllo.h"

class Weapon
{
public:
	Weapon();
	~Weapon();

	int value = 42;

	int* intPointer = nullptr;

	char* charPointer = nullptr;

	Calcolatrice* calcolatricePointer = nullptr;

	void initPointers();

	int arrayInt[5] = { 1,2,3,4,5 };

	int Damage(int danno, int multiplier, int* totaldamage);

	int DamageRef(int danno, int multiplier, int& totaldamage);

	void setCalcolatrice(Calcolatrice* calcolatrice);


private:

	int HP = 100;



};
