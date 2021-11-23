#include <iostream>
#include <stdlib.h>
using namespace std;
main (){
	int N;
	
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
	cin >> N;
	
	switch (N){
		case 1:
			cout << system ("arp -a");
			break;
		case 2:
			cout << system ("ipconfig");
			break;
		case 3:
			cout << system ("ipconfig");
			cout << system ("arp -a");
			break;
		case 4:
			cout << system ("winver");
			break;
		default :
			cout << "opcao invalida.....";
				
		
	}
	
	
	
	
	
	
	
	
	
	
}