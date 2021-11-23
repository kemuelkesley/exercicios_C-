#include <iostream>
using namespace std;
main (){
	float qtdt, at, lt , ap , lp, parede, total;
	cout << "largura da parede: ";
	cin >> lp;
	cout << "altura da parede: ";
	cin >> ap;
	cout << "altura do tijolo: ";
	cin >> at;
	cout << "largura do tijolo: ";
	cin >> lt;
	parede = ap * lp;
	qtdt = at * lt;
	total = parede / qtdt;
	cout << total << "tijolos ";
	
	
	
	
	
	
	
	
}