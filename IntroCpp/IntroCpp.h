#pragma once // garantisce che questo file sia incluso una sola volta

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