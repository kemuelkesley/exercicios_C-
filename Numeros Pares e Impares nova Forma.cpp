#include <iostream>
#include <stdlib.h>
using namespace std;
main (){
	int i, n;
	
	
	cout << "informe o numero: ";
	cin >> n;
	cout << endl;
	cout << "Numeros Impares";
	cout << endl;
	i=1;
	while (i<=n){
		if (i%2!=0){
			cout << i << endl;
			
		}		
		i++;
				
	}
	cout << endl;
	cout << "Numeros Pares";
	cout << endl;
	i=1;
	while (i<=n){
		if (i%2==0){
			cout << i << endl;
			
		}
		i++;
		
	}
	
	
	
	
	
	
}