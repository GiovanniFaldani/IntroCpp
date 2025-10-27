#pragma once // garantisce che questo file sia incluso una sola volta
#include <iostream>
#include <string>

using namespace std;

class Rettangolo
{
private:

	int larghezza{};
	int altezza{};

public:

	Rettangolo(int w, int h) {
		larghezza = w;
		altezza = h;
	}

	int calcoloArea() const;

protected:

};

/* Classe Weapon con:
	nome arma
	tipo
	munizioni
	tempoRicarica
	inceppata
	danno

	metodi:

	applicaDanno() -> stampa e ritorna danno
	informazioni() -Z Stampa informazioni base
	costruttore custom




*/

class WeaponEsercizio
{
private:
	string nome{};
	string tipo{};
	int munizioni{};
	float tempoRicarica{};
	bool inceppata{};
	int danno{};

public:

	WeaponEsercizio();

	WeaponEsercizio(string newNome, string newTipo, int newMunizioni, float newTempoRicarica, bool newInceppata, int newDanno);

	int ApplicaDanno(int valoreIniziale);

	void Informazioni();
};