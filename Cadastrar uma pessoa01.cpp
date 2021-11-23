#include <iostream>
#include <string>
using namespace std;


struct cliente {
	char nome[20], profissao[20];
	int idade;
	float salario;
		
	
};


main(){
	struct cliente c;
	
	cout << "Informe seu nome:";
	cin >> c.nome;
	cout << "Qual sua profissao:";
	cin >> c.profissao;
	cout << "Qual sua idade:";
	cin >> c.idade;
	
		
	//mostrar a saida.
	
	cout << "nome:" << c.nome << endl;
	cout << "profissao:" << c.profissao << endl;
	cout << "idade:" << c.idade << endl;
	
	// decisão de aumento de salario.
	
	if(c.idade > 27){
		c.salario = 300;
		cout << "Voce recebeu: " << c.salario << "reais de bonus " << endl;
				
	}
	else{
		cout << "voce nao recebeu bonus pela idade.";
	}
	
}