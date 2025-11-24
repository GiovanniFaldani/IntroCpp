#pragma once

#include <iostream>
#include <string>

class IInterfaccia {

public:
	// Distruttore virtuale: obbligatorio
	virtual ~IInterfaccia() = default;

	// Metodi puri virtuali: obbligatori (=0)
	virtual void Interact() = 0;

	// Metodo virtual: non obbligatorio implementarlo nella classe derivata
	virtual void displayMessage() {
		std::cout << "Message: ciao dalla classe derivata" << '\n';

	}

};