#include <iostream>

using namespace std;

main (){
	
/*02-Faça o algoritmo que leia o valor de uma conta de luz (CL) e, caso o valor seja maior que R$ 50,00,
apresente a mensagem: “Você está gastando muito”. Caso contrário, exiba a mensagem:
Seu gasto foi normal*/
	
	float cl;
	
	cout << "informe o valor da conta de luz: ";
	cin >> cl;
	if (cl>50){
		cout << "voce esta gastando muito" << endl;
	}else {
		cout << "Seu gasto foi normal" << endl;
	}
	
	
	
	
	
	
	
	
}