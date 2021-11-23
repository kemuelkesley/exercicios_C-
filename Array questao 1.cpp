#include <iostream>
using namespace std;
main (){
	int numeros[6], i;
	for (i=0; i<6; i++){
		cout << "digite o numero: " << i << ":";
		cin >> numeros[i];		
	}
	for (i=5; i>=0; i--){
		cout << numeros [i] << "" ;
	}
	
	
	
}