#include <iostream>
using namespace std;
main (){
	
	int i, num1, num2;
	cout << "numero inteiro: ";
	cin >> num1;
	cout << "numero inteiro: ";
	cin >> num2;
	for (i=1; num1<num2; num1++)
		if (num1%2==0){
			cout << num1 << " N pares" << endl;			
		}
		for (i=1; num1>num2; num2++){
			if (num2%2!=0){
				cout << num2 << " N impares" <<  endl;
			}
		}
	
	
	
}