#include <iostream>
#include <stdlib.h>
using namespace std;
main (){
	/*Faça um programa que receba três números e mostre-os em ordem crescente.
Suponha que o usuário digitará três números diferentes*/
	
	
	int i, x, n1, n2, n3;
	
	x=1;
	while (x!=2){
	
	cout << "informe o numero A: ";
	cin >> n1;
	cout << "informe o numero B: ";
	cin >> n2;
	cout << "informe o numero C: ";
	cin >> n3;
	cout << endl;
	system ("cls");
	for (i=1; i<=n1; i++){
		cout << "Numero de A: " << n1 + i << endl;		
	}
	cout << endl;	
	for (i=1; i<=n2; i++){
		cout << "Numero de B: " << n2 +i << endl;
	}   	
	cout << endl;
	for (i=1; i<=n3; i++){
		cout << "Numero de C: " <<  n3 +i << endl;
	}
	
}	
	
}