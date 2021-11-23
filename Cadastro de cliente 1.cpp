#include <iostream>
#include <string.h>
using namespace std;

main (){
	
	
	int A, N;
	
	string nome;
	string ende, pai, mae;
	string sexo;
	
	cout << "============================================" << endl;
	cout << "    Cadastro de Clientes Ver 1.0" << endl;
	cout << "============================================" << endl;
	cout << "informe seu nome: ";
	cin >> nome;
	cout << endl;
	cout << "Sexo [ M ] ou [ F ]: ";
	cin >> sexo;
	cout << endl;
	cout << "Ano de Nascimento: ";
	cin >> A;
	cout << endl;
	cout << "Endereco: ";
	cin >> ende;
	cout << endl;
	cout << "Nome da Mae: ";
	cin >> mae;
	cout << endl;
	cout << "Nome do Pai: ";
	cin >> pai;
	cout << endl;
	cout << "Nome: " << nome << endl;
	cout << "sexo: " << sexo << endl;
	cout << "Nascimento: " << A << endl;
	cout << "Endereco: " << ende << endl;
	cout << "Mae: " << mae << endl;
	cout << "Pai: " << pai << endl;
	cout << endl;
	
	cout << "[1] Se tudo esta certo: " << endl;
	cout << "[2] Para alterar Algo: " << endl;
	cout << endl;
	cout << "Informe a OPCAO: ";
	cin >> N;
	
	switch (N){
		
		case 1:
			cout << "Informacao salva com sucesso.";
			cout << endl;
			break;
		case 2:
			cout << "O que Deseja Alterar:";
			cout << endl;
			cout << "Nome: " << nome << endl;
			cout << "sexo: " << sexo << endl;
			cout << "Nascimento: " << A << endl;
			cout << "Endereco: " << ende << endl;
			cout << "Mae: " << mae << endl;
			cout << "Pai: " << pai << endl;
			break;
		
	
		
		
	}
	
	
	
	
}