#include "obslugaPliku.h"
#include <iostream>
using namespace std;
plik::plik(){
	wejscie.open("liczby.txt");
	wyjscie.open("wynik.txt");
}
plik::~plik(){
	wejscie.close();
	wyjscie.close();
}
bool plik::sprawdzPlik(){
	if(wejscie.good()&&wyjscie.good()) return true;
	else return false;
}
void plik::wczytaj(){
	while(!wejscie.eof()){
		wejscie>>liczba;
		listaLiczb.push_back(liczba);
	}
}
void plik::sprawdzLiczbe(){
	for(int i=0;i<listaLiczb.size();i++){
		if(listaLiczb[i] < 1000) wynik.push_back(listaLiczb[i]);
	}
}
void plik::policzLiczby(){
	int ilosc = wynik.size();
	cout<<"Ilosc Liczb: "<<ilosc<<endl;
	cout<<"Dwie ostatnie to: "<<wynik[ilosc-1]<<","<<wynik[ilosc-2];
}
void plik::zapisDoPliku(){
	int ilosc = wynik.size();
	wyjscie<<"Ilosc Liczb: "<<ilosc<<endl;
	wyjscie<<"Dwie ostatnie to: "<<wynik[ilosc-1]<<","<<wynik[ilosc-2];
}
