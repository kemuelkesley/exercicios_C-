#include <iostream>
using namespace std;
main (){
	
	int ip;
	
	cout << "CLASSES DE IP.. (A), (B), (C), (D)....";
	cout << endl << endl;
	
	cout << "informe os 3 PRIMEIROS DIGITOS DO IP: ";
	cin >> ip;
	
	if (ip >= 1 && ip <= 126){
		cout << "classe A" << endl;
	}if (ip >= 128 && ip <= 191){
		cout << "Classe B" << endl;
	}else {
		cout << "CLASSE C" << endl;
	}
	
	
	
	
	
	
}