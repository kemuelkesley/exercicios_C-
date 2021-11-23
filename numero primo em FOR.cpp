#include <iostream>
using namespace std;
main (){
	int num, i, cont=0;
	cout << "informe o numero inteiro: ";
	cin >> num;
	for (i=num; i>2; cont++){
		if (num%1 == 0){
			i--;
		}
	}
	if (cont>2){
		cout << "nao eh numero primo" << endl;
	}else{
		cout << "numero primo" << endl;
	}
}