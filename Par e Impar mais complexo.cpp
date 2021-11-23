#include <iostream>
using namespace std;
main (){
	int a, b, c;
	float media, soma;
	cout << "informe o valor de A: ";
	cin >> a;
	cout << "informe o valor de B: ";
	cin >> b;
	cout << "informe o valor de C: ";
	cin >> c;
	soma = a+b+c;
	media = (a+b+c)/3.0;
	cout << "Media:" << media << endl;
	
	if (a%2==0){
		cout << a << ":par" << endl;
	}else {
		cout << a << ":Impar" << endl;
	}  
	if (b%2==0){
		cout << b << ":par" << endl;
	}else {
		cout << b << ":impar" << endl;
	}
	if (c%==0){
		cout << c << ":par" << endl;
	}else {
		cout << c << ":impar" << endl;
	}
	
	
}