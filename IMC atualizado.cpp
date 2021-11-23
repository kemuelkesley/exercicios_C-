#include <iostream>
using namespace std;
main (){
	float peso, altura, IMC, calc;
	cout << "informe seu peso: ";
	cin >> peso;
	cout << "informe seu altura: ";
	cin >> altura;
	calc = (altura*altura);
	IMC = peso/calc;
	cout << IMC << " Massa corporea" << endl;
	if (IMC <= 18.5){
		cout << "abaixo do peso" << endl;
	}
	if (IMC > 18.6 && IMC == 24.9){
		cout << "peso ideal (parabens) " << endl;
	}
	if (IMC > 25){
		cout << "Acima do peso" << endl;
	}
	
	
	
	
}