#include <iostream>
#include <string>
using namespace std;


struct pessoa {
	float altura, peso, imc;
	char nome[20];
	
	
};

main(){
	struct pessoa p;
	
	cout << "Digite a altura :";
	cin >> p.altura;
	cout << "Digite o peso: ";
	cin >> p.peso;
	cout << "Digite seu nome:";
	cin >> p.nome;
	p.imc = p.peso/(p.altura*p.altura);
	
	cout << "nome:" << p.nome << endl;
	cout << "Peso:" << p.peso << endl;
	cout << "Altura:" << p.altura << endl;
	cout << "IMC: " << p.imc << endl;
		
	
}
