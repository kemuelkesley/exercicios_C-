#include <iostream>
using namespace std;
main (){
	//fazer uma tabuada de 5.
	// 5 x 1 = 5
	int x, i, t;
	
	cout << "informe um valor inteiro: ";
	cin >> x;
	i = 1;
	while (i <= 10){
		 t = x * i;
		 cout << x << " x " << i << " = " << t << endl;
		 i = i + 1;  	
	}
		
}