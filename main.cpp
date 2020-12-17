#include <iostream>
#include "obslugaPliku.h"

using namespace std;

int main(int argc, char** argv) {
	plik p1;
	p1.sprawdzPlik();
	if(p1.sprawdzPlik() == false) exit(0);
	p1.wczytaj();
	p1.sprawdzLiczbe();
	p1.policzLiczby();
	p1.zapisDoPliku();
	return 0;
}
