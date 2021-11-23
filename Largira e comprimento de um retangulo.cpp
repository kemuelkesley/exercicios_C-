#include <iostream>
using namespace std;
main(){
	float comprimento, largura, perimetro, area;
	cout << "infome o comprimento: ";
	cin >> comprimento;  
	cout << "Informe a largura: ";
	cin >> largura;
	area = largura * comprimento;
	perimetro = (2* largura) + (2* comprimento);
	cout << "area: " << area << endl;
	cout << "perimetro: " << perimetro << endl;
	cin.get ();
	
	
	
	 	
}