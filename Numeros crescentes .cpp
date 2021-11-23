#include <iostream>
#include <stdlib.h>
using namespace std;
main (){
	
	int i, n1, n2, n3;
	
	cout << "Numero A: ";
	cin >> n1;
	cout << "Numero B: ";
	cin >> n2;
	cout << "Numero C: ";
	cin >> n3;
	cout << endl;
	cout << "Numeros Crescentes de A:" << endl;
	for (i=1;i<=4;i++){
		if (n1>=i)
			cout << "Numero A:" << n1+i << endl;
					
	}
	cout << endl;
	cout << "Numeros Crescentes de B:" << endl;
	for (i=1;i<=4;i++){
		if (n2>=i)
			cout << "Numero  B:" << n2+i << endl;
					
	}
	cout << endl;
	cout << "Numeros Crescente de C:" << endl;
	for (i=1;i<=4;i++){
		   cout << "Numero  C:" << n3+i << endl;
					
	}
	
	
	
	
	
	
	
	
}