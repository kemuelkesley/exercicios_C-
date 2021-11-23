#include <iostream>
#include <stdlib.h>
using namespace std;
main (){
	// programa para abrir determinados caminhos para o usuario.
	
	int N, i, ip;
	i=1;
	while (i != 2){
	cout << endl;
	system ("pause");
	system ("cls");
	cout << endl;
	cout << "===========================================================";
	cout << endl;
	cout << "       Programa para abrir Comandos no Windows 10";
	cout << endl;
	cout << "===========================================================" << endl;
	
	cout << "[ 1 ] versao do windows" << endl;
	cout << "[ 2 ] informacoes do windows" << endl;
	cout << "[ 3 ] IP da sua Rede Privada" << endl;
	cout << "[ 4 ] Ver todos os IP da Rede" << endl;
	cout << "[ 5 ] Direct X do Windows" << endl;   	
	cout << "[ 6 ] Servicos do Windows" << endl;
	cout << "[ 7 ] Abrir gerenciador de tarefas" << endl;
	cout << "[ 8 ] Ping:" << endl;
	cout << endl;
	cout << "Informe qual a opcao: ";
	cin >> N;
	
	switch (N){
		case 1:
			cout << system ("winver");
			break;
		case 2:
			cout << system ("msinfo32");
			break;
		case 3:
			cout << system ("ipconfig");
			break;
		case 4:
			cout << system ("arp -a");
			break;
		case 5:
			cout << system ("dxdiag");
			break;
		case 6:
			cout << system ("services.msc");
			break;
		case 7:
			cout << system ("taskmgr");
			break;
		case 8:
			cout << "informe o IP:";
			cin >> ip;
			break;
		default:
			cout << "opcao errada, informe o numero correspondente";
			
				
		
	}
	}	
	
	cin.get();
	cin.get();
	
	
	
	
}