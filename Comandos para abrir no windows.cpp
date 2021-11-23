#include <iostream>
#include <stdlib.h>
using namespace std;

main (){
	// system usado para comandos do windows.
	int n;
	
	
	cout << "=========MENU DE OPCOES==========";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "( 1 ) para ARP:" << endl;
	cout << "( 2 ) para IP:" << endl;
	cout << "( 3 ) para IP e ARP:" << endl;
	cout << "( 4 ) para ver a build do windows:" << endl;
	cout << endl;
	cout << "Infome a opcao: ";
	cin >> n;
	
	if (n == 1){
		cout << system ("arp -a");
	}
	if (n == 2){
		cout << system ("ipconfig");
	}
	if (n == 3){
		cout << system ("ipconfig");
		cout << system ("arp -a");		
	}
	if (n == 4){
		cout << system ("winver");
	}
	if (n >= 5){
		cout << "Numero invalido";
	}
	
	cin.get();
	cin.get();
	
	
}