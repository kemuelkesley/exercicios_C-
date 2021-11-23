#include <iostream>

using namespace std;

main (){
	//imprimir o numeros pares na tela ex: do 46 a 100, sem aparecer na tela o numero digitado.
	// Depois somar os numeros de 45 a 100 = ? 
	// Depois dividir a media pela quantidade, media/qtd.
	int i, n1, n2;
	float media, soma=0, qtd;
	
	cout << "informe N1: ";
	cin >> n1;
	cout << "informe N2: ";
	cin >> n2;
	
	for (i=1; n1<n2; n1++){
		if (n1%2==0){
			cout << n1 << endl;
			soma = soma + n1;
			qtd++;    
		}
					
	}
	media = soma/qtd;
	cout << "Soma: " << soma << endl;
	cout << "Media: " << media << endl;
	
		
}