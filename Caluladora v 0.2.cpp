#include <iostream>
using namespace std;
main (){

    int A, B, OPC;
    float so, sub, multi, divi;
    
   
    cout << "========= Calculadora 4 Operecao Ver 0.2 ============="<< endl;

    cout << "Para Somar====== [ 1 ]: " << endl;
    cout << "Para Subtrair=== [ 2 ]: " << endl;
    cout << "Para Multiplicar [ 3 ]: " << endl;
    cout << "Para Dividir==== [ 4 ]: " << endl;
    cout << endl;
	cout << "Informe a opcao: ";
	cin >> OPC;
	cout << "Numero:";
	cin >> A;C
	cout << "Numero:";
	cin >> B;
	
	
	switch (OPC){
		case 1:
			so = (A + B);
			cout << A << " + " << B << " = " << so;
			break;
		case 2:
			sub = (A - B);
			cout << A << " - " << B << " = " << sub;
			break;
		case 3:
			multi = (A * B);
		cout << A << " x " << B << " = " << multi;
			break;
		case 4:
			divi = (A / B);
			cout << A << " / " << B << " = " << divi;
			break;
		default:
			cout << "OPCAO ERRADA ( TENTE NOVAMENTE )" << endl;
			
			
				
	}
	





}