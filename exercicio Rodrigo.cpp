#include <iostream>

using namespace std;

main (){
	// faça um programa que o usuario digite 2 num, inteiro e mostre todos os numeros pares dentro desse intervalo, nao repetindo 
	//os numeros digitados.
	int x, y, i;
	cout << "informe o numero: ";
	cin >> x;
	cout << "informe o numero: ";
	cin >> y;
	
	for (x=0; x<=y; x++){
		if (x%2==0){
			cout << x << endl;
		}
	}
	
	
	
	
	
}