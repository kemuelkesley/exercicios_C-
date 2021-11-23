#include <iostream>
using namespace std;
main (){
	int V[10], i, maior, menor;
	
	for (i=0;i<10;i++){
		cout << "informe o N: " << i+1 << " : " ;
		cin >> V[i];
				
	}
	for (i=0;i<10; i++){
		if (i==0){
			maior = V[i];
			menor = V[i];
		}
		if (V[i]>maior){
			maior = V[i];
			
		}
		if (V[i]<menor){
			menor = V[i];
		}
	}
	cout << endl;
	cout << "N maior: " << maior << endl;
	cout << "N menor: " << menor << endl;
	
}