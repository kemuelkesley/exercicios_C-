#include <iostream>

using namespace std;

main (){
	
	float a, b, calculo, resolva; // variaveis usadas.
	int i;
	
	i=1;
	while (i!=2){ // usei while para repetir o programa.
	cout << "=========================================================" << endl;
	cout << "  Calculadora Desenvolvida por KEMUEL KESLEY ver. 1.0" << endl;
	cout << "=========================================================" << endl;

	cout << "SOMAR       [ 1 ]: " << endl;
	cout << "SUBTRAIR    [ 2 ]: " << endl;
	cout << "MULTIPLICAR [ 3 ]: " << endl;
	cout << "DIVIDIR     [ 4 ]: " << endl;
	cout << endl; // usado para pular linha / quebrar linha.
	cout << "OPCAO: ";
	cin >> calculo;
	
	cout << "infome o numero de A: ";
	cin >> a;
	cout << "informe o numero de B: ";
	cin >> b;
	cout << endl << endl;
			
		
	if (calculo == 1){
		resolva = (a+b);
		cout << "Total: " << a << " + " << b << " = " << resolva << endl;
	}else {
		
		if (calculo == 2){
			resolva = (a-b);
			cout << "Total: " << a << " - " << b << " = " << resolva << endl;
		}else{
			if (calculo == 3){
				resolva = (a*b);
				cout << "Total: " << a << " x " << b << " = " << resolva << endl;
			}else{
				if (calculo == 4){
					resolva = (a/b);
					cout << "Total: " << a << " / " << b << " = " << resolva << endl;
				}else{
					cout << "opcao invalida" << endl;
					cout << "Informe apenas as opcoes [1], [2] ,[3] ou [4]" << endl;
				}
			}
		}

	}
	
	
}

	 // comando para pausar o programa pelo windows.
	
}
	