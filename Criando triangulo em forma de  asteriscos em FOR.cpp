#include <iostream>

using namespace std;

main (){
	int i, num, interno;
	
	cout << "Digite um numero inteiro: ";
	cin >> num;
	for (i=0; i<=num; i++){
		for (interno=1; interno<=i; interno++){
			cout << " * ";
	
		}
	cout << endl;	
	}
	
	
	
}