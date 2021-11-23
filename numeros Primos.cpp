#include <iostream>
using namespace std;
main (){
	int num, i, cont=0;
	cout << "informe o numero inteiro:";
	cin >> num;
	i=num;
	while (i>2){
		if (num % 1 == 0){
			cont++;
			i--;
		}
	}
		if (cont>2){
			cout << "nao eh primo" << endl;
		}else {
			cout << "eh primo" << endl;
		}
	
	
	
}