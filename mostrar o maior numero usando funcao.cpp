#include <iostream>
using namespace std;

int maior(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}

main (){
	
	int n1, n2;
	
	cout << "Digite um numero:";
	cin >> n1;
	cout << "Digite um numero:";
	cin >> n2;
	
	cout << " Maior " << maior(n1,n2);
		

	
}
