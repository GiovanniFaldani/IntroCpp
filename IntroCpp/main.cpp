#include <iostream>
#include <string>
#include "IntroCpp.h"

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

	cin.get();

	// Stampa le dimensioni dei tipi composti e dei loro membri

	// Esempi di weapon

	return 0;
}