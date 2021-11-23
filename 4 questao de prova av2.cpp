#include <iostream>
using namespace std;
main (){
	int n;
	cout << "digite uma nota:";
	cin >> n;
	while (n<0 || n>10){
		cout << "Erro, digite uma nota valida";
		cin >> n;
		
	}
	if (n<=6)
		cout << "aprovado";
	else
		cout << "Reprovado";
		
		
	
	
	
	
}