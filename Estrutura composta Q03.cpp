#include <iostream>

using namespace std;

main (){
	
	float tpcarro, vg, ct, gas, alc;
	   
	cout << "Tipo de carro 1 para gasolina e 2 para alcool: ";
	cin >> tpcarro;
	cout << "capacidade do tanque de combustivel: ";
	cin >> ct;
	gas = 2,30;
	alc = 1,50;
	if (tpcarro==1){
		vg = (ct*gas);
		cout << vg << "R$ voce vai gastar para encher o tanque com gasolina." << endl;
	}
	if (tpcarro==2){
		vg = (ct*alc);
		cout << vg << "R$ voce vai gastar para encher o tanque com alcool. " << endl;
	}
	
	
}