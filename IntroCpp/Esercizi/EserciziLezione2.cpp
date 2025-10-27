#include "EserciziLezione2.h"

EserciziLezione2OperatoriEStruttureDiControllo::EserciziLezione2OperatoriEStruttureDiControllo() 
{
	cout << "------ Esercizi Lezione 2: Operatori e Strutture di Controllo ------" << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio1()
{
	cout << "Esercizio 1: Enum e switch" << '\n';

    StatoSemaforo statoAttuale{ GIALLO };

    switch (statoAttuale)
    {
    case ROSSO:
        cout << "STOP! Attendere." << '\n';
        break;
    case GIALLO:
        cout << "Attenzione! Prepararsi." << '\n';
        break;
    case VERDE:
        cout << "VIA! Si può procedere." << '\n';
        break;
    default:
        break;
    }

	cout << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio2()
{
	cout << "Esercizio 2: Operatori Aritmetici, Assegnazione e if/else" << '\n';

    int base{ 12 };
    int altezza{ 5 };

    int area{ base * altezza };
    area *= 2;

    if (area > 100)
    {
        cout << "L'area raddoppiata supera i 100." << '\n';
    }
    else
    {
        cout << "L'area raddoppiata è 100 o meno." << '\n';
    }

    cout << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio3()
{
	cout << "Esercizio 3: Ciclo for e Operatore Modulo" << '\n';

    for (int i{ 1 }; i < 21; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " e' pari" << '\n';
        }
    }

    cout << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio4()
{
	cout << "Esercizio 4: Ciclo while e Operatori di Incremento" << '\n';

    int contatore{ 5 };
    int risultato{ 1 };

    while (contatore > 0)
    {
        risultato *= contatore;
        contatore--;
    }

    cout << "Il valore finale di risultato e': " << risultato << '\n';

    cout << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio5()
{
	cout << "Esercizio 5: Ciclo do-while per Input Utente" << '\n';

    bool continua{ true };
    char inputChar{};

    do {
        cout << "Esecuzione ciclo, inserisci S o N (Sì o No), case insensitive " << '\n';
        cin >> inputChar;

        if (inputChar == 'N' || inputChar == 'n')
        {
            continua = false;
        }

    } while (continua);

    cout << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio6()
{
	cout << "Esercizio 6: Operatori Relazionali e Logici" << '\n';

    int punti{ 85 };
    int presenze{ 90 };
    int requisitoMinimo{ 60 };

    if (punti > requisitoMinimo && presenze >= 80)
    {
        cout << "Promosso" << '\n';
    }
    else
    {
        cout << "Non Promosso" << '\n';
    }

    cout << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio7()
{
	cout << "Esercizio 7: Ciclo for-each (Range-Based For Loop)" << '\n';

	vector<string> colori{ "Rosso", "Verde", "Blu", "Giallo" };

    for (string colore : colori)
    {
        cout << "Il colore e': " << colore << '\n';
	}

    cout << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio8()
{
	cout << "Esercizio 8: Ciclo for-each per Modifica (Riferimento)" << '\n';

    vector<int> prezzi{ 10, 25, 5, 40 };
    for (auto& prezzo : prezzi)
    {
        prezzo = (int)floor(prezzo * 1.1f);
    }
    for (const int prezzo : prezzi)
    {
        cout << "Nuovo prezzo: " << prezzo << '\n';
	}

    cout << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio9() 
{
	cout << "Esercizio 9: Operatore Bitwise AND (&) per la Verifica" << '\n';

    int permessi{ 6 };
	int MASCHERA_SCRITTURA{ 2 };

    if (permessi & MASCHERA_SCRITTURA)
    {
        cout << "Il permesso di scrittura e' attivo." << '\n';
    }
    else
    {
        cout << "Il permesso di scrittura NON e' attivo." << '\n';
	}

    cout << '\n';
}

void EserciziLezione2OperatoriEStruttureDiControllo::Esercizio10()
{
	cout << "Esercizio 10: Operatori Bitwise Shift (<<, >>)" << '\n';

	int valoreIniziale{ 13 };
	int valoreMoltiplicato{ valoreIniziale << 3 };
	int valoreDiviso{ valoreMoltiplicato >> 2 };

    cout << "Valore Iniziale: " << valoreIniziale << '\n';
    cout << "Valore Moltiplicato: " << valoreMoltiplicato << '\n';
	cout << "Valore Diviso: " << valoreDiviso << '\n';

    cout << '\n';
}

EserciziLezione2Puntatori::EserciziLezione2Puntatori()
{
    cout << "------ Esercizi Lezione 2: Puntatori ------" << '\n';
}

void EserciziLezione2Puntatori::Esercizio1() 
{
    cout << "Esercizio 1: Dichiarazione e Assegnazione Base" << '\n';

    int numero{ 42 };
    int* p_numero{ nullptr };

    p_numero = &numero;

    cout << "numero chiamato per variabile: " << numero << '\n';
	cout << "numero chiamato per puntatore dereferenziato: " << *p_numero << '\n';

    cout << '\n';
}

void EserciziLezione2Puntatori::Esercizio2() 
{
	cout << "Esercizio 2: Modifica Tramite Puntatore" << '\n';

    double prezzo{ 99.90 };
    double* p_prezzo{ &prezzo };

    *p_prezzo = 149.99;
	cout << "Nuovo valore di prezzo: " << prezzo << '\n';

    cout << '\n';
}


// Esercizio 3
void EserciziLezione2Puntatori::raddoppia(int* p_valore) 
{
	cout << "Esercizio 3: Passaggio per Riferimento (Funzione)" << '\n';

	*p_valore *= 2;

    cout << '\n';
}

// Esercizio 4
void EserciziLezione2Puntatori::scambia(int* valore1, int* valore2) 
{
	cout << "Esercizio 4: Scambio di Valori (Swap)" << '\n';

    int temp = *valore1;
    *valore1 = *valore2;
    *valore2 = temp;

    cout << '\n';
}

void EserciziLezione2Puntatori::Esercizio5() 
{
	cout << "Esercizio 5: Puntatori e Stringhe (Array di Caratteri)" << '\n';

    char parola[]{ "Puntatore" };
    char* p_parola{ parola };

	*p_parola = 'C'; // Il puntatore indica parola[0]

	cout << "Stringa modificata: " << parola << '\n';

    cout << '\n';
}

void EserciziLezione2Puntatori::Esercizio6() 
{
	cout << "Esercizio 6: Puntatori e Array" << '\n';

	int numeri[]{ 1, 2, 3, 4, 5 };
	int* p_array{ numeri };
    
	cout << "numeri[2]: " << *(p_array + 2) << '\n';

    cout << '\n';
}

void EserciziLezione2Puntatori::Esercizio7() 
{
	cout << "Esercizio 7: Puntatori e Array - Accesso agli Elementi" << '\n';

    int voti[5]{ 28, 30, 25, 18, 24 };
    int* p{ voti };

    for (int i{ 0 }; i < 5; i++)
    {
        cout << "voti[" << i << "]: " << *(p++) << '\n';
    }

    cout << '\n';
}

void EserciziLezione2Puntatori::Esercizio8() 
{
	cout << "Esercizio 8: Allocazione Dinamica di Memoria" << '\n';

    int* p_int{ nullptr };
    p_int = new int(123);

	cout << "Valore allocato: " << *p_int << '\n';

    delete(p_int);
    p_int = nullptr;

	cout << '\n';
}

void EserciziLezione2Puntatori::Esercizio9() 
{
	cout << "Esercizio 9: Accesso ai Membri di una Struttura (Operatore ->)" << '\n';

    Punto* punto = new Punto();

	punto->x = 10;
	punto->y = 5;

	cout << "Punto x: " << punto->x << ", y: " << punto->y << '\n';

    delete(punto);
	punto = nullptr;

    cout << '\n';
}

void EserciziLezione2Puntatori::Esercizio10() 
{
	cout << "Esercizio 10: Puntatori a Funzioni" << '\n';

	int a{ 10 };
    int* p1{ &a };
	int** p2{ &p1 };

	cout << "Valore di a tramite doppio puntatore: " << **p2 << '\n';
	cout << "Indirizzo di a tramite p1: " << p1 << '\n';
	cout << "Indirizzo di p1 tramite p2: " << p2 << '\n';

    cout << '\n';
}