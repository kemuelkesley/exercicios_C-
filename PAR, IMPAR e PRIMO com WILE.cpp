#include <iostream>
using namespace std;
main (){
	int num, i, cont=0;
	cout << "informe o numero inteiro: ";
	cin >> num;
	if (num%2==0){
		cout << "numero PAR" << endl; 
	}else {
		cout << "numero Impar" << endl;
	}
	i=num;
	while (i>2){
		if (num%1==0){ //% << significa divisivel e resta.
			cont++;// é a mesma coisa de cont= i+1
			i--;// decremento i=i-1 << negativo.
		}
	}
	if (cont>2){
		cout << "nao eh numero primo" << endl;
	}else {
		cout << "eh numero primo" << endl;
	}
	
	
}