#include <iostream>
using namespace std;
main (){
	//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

	int a, b, c, d, i;
	i=1;
	while (i != 2){
	cout << "infome o numero A:";
	cin >> a;
	cout << "infome o numero B:";
	cin >> b;
	cout << "infome o numero C:";
	cin >> c;
	cout << "infome o numero D:";
	cin >> d;
	
	cout << "A + B" << " = " << a+b << endl;
	cout << "C + D" << " = " << c+d << endl;
	cout << "A + C" << " = " << a+c << endl;
	cout << "B + D" << " = " << b+d << endl;
	cout << "A + A" << " = " << a+a << endl;
	cout << "B + B" << " = " << b+b << endl;
	cout << "C + C" << " = " << c+c << endl;
	cout << "D + D" << " = " << d+d << endl;
	cout << "A + B + C + D" << " = " << a+b+c+d << endl;
	
	}
	
	
}