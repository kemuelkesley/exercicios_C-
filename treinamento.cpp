#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;
main (){
	
	/* fazer um pseudocodigo para ler o nome, a idade, o cargo e o salario
	de 50 pessoas e verificar quantas possuem idade inferior a 30 anos e um salario
	superior a R$ 3.000.*/
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome, cargo;
	int i, idade, salario;
	
	i=1;
	while (i<=1){
		cout << "informe seu nome: ";
		cin >> nome;
		cout << "informe sua idade: ";
		cin >> idade;
		cout << "informe qual cargo: ";
		cin >> cargo;
		cout << "pretenção salarial: ";
		cin >> salario;
		i++;
		if (idade < 28 && salario < 1500){
			cout << "você possui os requesitos da empresa.";			
		}else {
			cout << "Não possui os requisitos da empresa.";
		}
			
			
			
			
			
	}
	
	
	
	
	
	
	
}