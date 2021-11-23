#include <iostream>
using namespace std;
main (){
	int num, i, cont=0;
	cout << "informe o numero inteiro: ";
	cin >> num;
	if (num%2==0){
		cout << "numero PAR" << endl;
	}else {
		cout << "numero IMPAR" << endl;
	}
	for (i=num; i>2; cont++){
		i--;
	}
	if (num%1==0){
		cout << "nao e numero primo" << endl;
	}else {
		cout << "numero primo" << endl;
		
	}
	
}