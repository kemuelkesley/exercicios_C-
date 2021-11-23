#include <iostream>
#include <stdlib.h>
using namespace std;
main (){
	int opc;
	
	cout << "( Menu de Opcoes )";
	cout << endl;
	cout << endl;
	cout << "IPCONFIG ====( 1 )" << endl;
	cout << "ARP ======( 2 )" << endl;
	cout << endl;
	cout << "Escolha Qual opcao:";
	cin >> opc;
	cout << endl;
	
	switch (opc){
		case 1:
			cout << system ("ipconfig /all");
			break;
		case 2:
			cout << system ("arp -a");
			break;
		default:
			cout << "Opcao errada.....";
		
							
		
		
	}
	
	
		
	
}