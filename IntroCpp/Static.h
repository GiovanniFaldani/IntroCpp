#pragma once
#include "StruttureDiControllo.h"
#include <string>
#include <vector>

using namespace std;

class Static {

public:

	static int count; // Can't be initialized here (unless it's a const integral type)

	static const float pi; // this must be initialized in the cpp file

	Static() {
		count++;
		cout << "Istanziato Static, numero istanze: " << count << '\n';
	}

	~Static() {
		count--;
	}

	static int getCount() {
		return count;
	}

	// Overload operatori
	/*public static Punto operator +{Punto a, Punto b)
	{
	  return new Punto (a.X, a.Y + b.X, b.Y);
	}
	*/

	static int SommaStatica(int a, int b)
	{
		return a + b;
	}

};