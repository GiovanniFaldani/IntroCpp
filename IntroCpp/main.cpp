#include <iostream>
#include <algorithm>
#include <string>
#include "Operatori.h"
#include "Puntatori.h"
#include "IntroCpp.h"
#include "Esercizi/EserciziLezione2.h"
#include "Static.h"

using namespace std;

/*

*/

struct Studente {
	int anni;
	float mediaVoti;
	string nome;

	// Default Constructor
	Studente() : anni(0), mediaVoti(.0f), nome("")
	{
		cout << "STUDENTE INIZIALIZZATO\n";
	}

	// Custom constructor
	Studente(const string& newNome, int newAnni, float newMediaVoti) {
		nome = newNome;
		anni = newAnni;
		mediaVoti = newMediaVoti;
	}
};

int main() 
{
	// esempio di operatore incremento
	Mese* meseCorrente = new Mese();
	int giorno = 0;

	// print Hello to the console
	cout << "Hello World!\n";

	// base types C++

	// Integer
	int numeroIntero{ -3 };
	unsigned int numeroInteroPositivo{ 5 };

	// Floating point
	float numeroDecimale{ 3.14f };
	float numeroDecimalePiccolo{ .2f };

	// Floating point con precision doppia
	double numeroDecimalePrecisioneDoppia{ 3.14252362365 };

	// Carattere singolo
	char carattereSingolo{ 'A' };

	// Booleano
	bool valoreBooleano{ true };
	bool altroValoreBooleano{ false };

	// Stampa i valori delle variabili
	cout << "-------- ESEMPI DI VARIABILI -----------\n";

	cout << "Intero: (int) " << numeroIntero << '\n';
	cout << "Intero positivo: (unsigned int) " << numeroInteroPositivo << '\n';
	cout << "Decimale: (float) " << numeroDecimale << '\n';
	cout << "Decimale piccolo: (float) " << numeroDecimalePiccolo << '\n';
	cout << "Decimale a precisione doppia: (double) " << numeroDecimalePrecisioneDoppia << '\n';
	cout << "Carattere singolo: (char) " << carattereSingolo << '\n';
	cout << "Booleano: (bool) " << valoreBooleano << '\n';

	cout << "-------- Dimensioni: -------------------\n";
	cout << "Dimensione in byte di int: " << sizeof(int) << '\n';
	cout << "Dimensione in byte di unsigned int: " << sizeof(unsigned int) << '\n';
	cout << "Dimensione in byte di float: " << sizeof(float) << '\n';
	cout << "Dimensione in byte di double: " << sizeof(double) << '\n';
	cout << "Dimensione in byte di char: " << sizeof(char) << '\n';
	cout << "Dimensione in byte di bool: " << sizeof(bool) << '\n';


	// Tipi composti in C++

	// Array di interi
	int arrayDiInteri[5]{ 1, 2, 3, 4, 5 }; // array di 5 interi
	char arrayDiChar[5]{ 'H', 'e', 'l', 'l', 'o' };
	float arrayDiFloat[5]{ 1.2f, 1.4f, .7f, 3.0f, 5.6f };
	bool arrayDiBool[5]{ true, false, false, true, false };

	// String
	// std::string sta dentro la libreria <string>
	string testo{ "Esempio di stringa in C++" };
	string arrayDiStringhe[4]{ "Ciao", "come", "va", "?" };

	// struct
	Studente randomStudente(testo, 21, 8.4f);

	randomStudente.nome = "Random";
	randomStudente.anni = 20;
	randomStudente.mediaVoti = 8.4f;

	// Class
	Rettangolo rect(5, 10);

	int area = rect.calcoloArea();

	cout << "Area rettangolo: " << area << '\n';

	// Stampa le dimensioni dei tipi composti e dei loro membri



	// Esempi di weapon
	/*WeaponEsercizio* arma1{ new WeaponEsercizio() };

	arma1->Informazioni();*/

	// Operatori
	giorno = meseCorrente->Incrementa();

	cout << "Valore giorno: " << giorno << '\n';


	// Puntatori

	Weapon* spada = new Weapon();

	spada->initPointers();

	int* newInt = new int(42);

	delete spada; // free della memoria
	spada = nullptr; // svuota il puntatore per evitare di puntare a garbage

	if (spada == nullptr) 
	{
		cout << "Puntatore spada e' nullptr dopo delete" << '\n';
	}
	else
	{
		spada->initPointers();
	}


	// Esercizi lezione 2

	/*EserciziLezione2OperatoriEStruttureDiControllo* eserciziLezione2Parte1 = new EserciziLezione2OperatoriEStruttureDiControllo();

	eserciziLezione2Parte1->Esercizio1();

	eserciziLezione2Parte1->Esercizio2();

	eserciziLezione2Parte1->Esercizio3();

	eserciziLezione2Parte1->Esercizio4();

	eserciziLezione2Parte1->Esercizio5();

	eserciziLezione2Parte1->Esercizio6();

	eserciziLezione2Parte1->Esercizio7();

	eserciziLezione2Parte1->Esercizio8();

	eserciziLezione2Parte1->Esercizio9();

	eserciziLezione2Parte1->Esercizio10();*/

	//EserciziLezione2Puntatori* eserciziLezione2Puntatori = new EserciziLezione2Puntatori();

	//eserciziLezione2Puntatori->Esercizio1();

	//eserciziLezione2Puntatori->Esercizio2();

	//// Eserczio 3
	//int valore{ 5 };
	//cout << "Valore prima di raddoppia: " << valore << '\n';
	//eserciziLezione2Puntatori->raddoppia(&valore);
	//cout << "Valore dopo raddoppia: " << valore << '\n';
	//cout << '\n';

	//// Esercizio 4
	//int valore1{ 10 }, valore2{ 20 };
	//cout << "Valori prima di scambia: " << valore1 << " " << valore2 << '\n';
	//eserciziLezione2Puntatori->scambia(&valore1, &valore2);
	//cout << "Valori dopo scambia: " << valore1 << " " << valore2 << '\n';
	//cout << '\n';

	//eserciziLezione2Puntatori->Esercizio5();

	//eserciziLezione2Puntatori->Esercizio6();

	//eserciziLezione2Puntatori->Esercizio7();

	//eserciziLezione2Puntatori->Esercizio8();

	//eserciziLezione2Puntatori->Esercizio9();

	//eserciziLezione2Puntatori->Esercizio10();

	Weapon* primaryWeapon = new Weapon(30, "Laser");

	if (primaryWeapon != nullptr) 
	{
		cout << primaryWeapon->getName() << '\n';
	}

	delete primaryWeapon;
	primaryWeapon = nullptr;

	if (!primaryWeapon) 
	{
		cout << "Null pointer" << '\n';
	}

	primaryWeapon = new Weapon(50, "Rifle");

	cout << primaryWeapon->getName() << '\n';

	delete primaryWeapon;
	primaryWeapon = nullptr;

	Static* s1 = new Static();
	Static* s2 = new Static();
	Static* s3 = new Static();

	delete s1;
	s1 = nullptr;

	cout << Static::count << '\n'; // accesso a variabile statica senza istanza

	delete s2;
	s2 = nullptr;

	cout << Static::getCount() << '\n'; // accesso a metodo statico senza istanza

	std::cin.get();

	return 0;
}