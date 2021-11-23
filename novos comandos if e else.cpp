#include <iostream>
using namespace std;
main(){
	int idade;
	cout << "informe sua idade: ";
	cin >> idade;
	if (idade>=16){
		cout << "voce ja pode votar: " << endl;
			}
	if (idade>=18){
		cout << "voce ja pode tirar a CNH: " << endl;
	}
	if (idade<16){
		cout << "voce ainda nao tem idade para VOTAR nem para ter a CNH:" << endl;
		
	}
	return 0;
	
	
	
	
	
}