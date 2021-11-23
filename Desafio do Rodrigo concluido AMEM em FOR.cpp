#include <iostream>
using namespace std;
main (){
	// faça um programa que o usuario digite 2 num, inteiro e mostre todos os numeros pares dentro desse intervalo, nao repetindo 
	//os numeros digitados.
	int i, num1, num2;
	cout << "numero inteiro: ";
	cin >> num1;
	cout << "numero inteiro: ";
	cin >> num2;
	for (i=1; num1<num2; num1++)
		if (num1%2==0){
			cout << num1 << endl;			
		}
		for (i=1; num1>num2; num1--){
			if (num1%2==0){
				cout << num1 << endl;
			}
		}
	
}