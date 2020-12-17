#include<fstream>
#include<vector>
#ifndef obslugaPliku_h
#define obslugaPliku_h
using namespace std;
class plik{
	public:
		plik();
		~plik();
		ifstream wejscie;
		ofstream wyjscie;
		int liczba;
		vector <int> listaLiczb;
		vector <int> wynik;
	bool sprawdzPlik();
	void wczytaj();
	void sprawdzLiczbe();
	void policzLiczby();
	void zapisDoPliku();
};
#endif
