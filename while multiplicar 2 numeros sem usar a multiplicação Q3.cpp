#include <iostream>
using namespace std;
main (){
	int num1, num2, i, total=0;
	
	cout << "informe o valor 1: ";
	cin >> num1;
	cout << "informe o valor 2: ";
	cin >> num2;
	i = 1;
	while (i <= num2){
		total = total + num1;
		i = i + 1;
	}
	cout << num1 << "x" << num2 << " = " << total << endl;
	
	
	
	
	
}