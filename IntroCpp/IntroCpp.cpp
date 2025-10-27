#include "IntroCpp.h"

int Rettangolo::calcoloArea() const
{
	return larghezza * altezza;
}

WeaponEsercizio::WeaponEsercizio(string newNome, string newTipo, int newMunizioni, float newTempoRicarica, bool newInceppata, int newDanno)
{
	nome = newNome;
	tipo = newTipo;
	munizioni = newMunizioni;
	tempoRicarica = newTempoRicarica;
	inceppata = newInceppata;
	danno = newDanno;
}

int WeaponEsercizio::ApplicaDanno(int valoreIniziale)
{
	int valoreFinale = valoreIniziale - danno;
	return valoreFinale;
}

void WeaponEsercizio::Informazioni() {
	cout << "Nome arma: " << nome << '\n';
	cout << "Tipo arma: " << tipo << '\n';
	cout << "Munizioni: " << munizioni << '\n';
	cout << "Tempo ricarica: " << tempoRicarica << '\n';
	cout << "Inceppata: " << inceppata << '\n';
	cout << "Danno: " << danno << '\n';
}