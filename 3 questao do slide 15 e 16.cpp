#include <iostream>
using namespace std;
main (){
	int N[10], i, qtd=0;

	for  (i=0;i<10;i++){
		cout << "Posicoes:" << i+1 << " ";
		cin >> N[i];
		if (N[i]%2==0){
			qtd++;
			
		}
		
	}
	cout << "Numeros pares: " << qtd << endl;	
	
}