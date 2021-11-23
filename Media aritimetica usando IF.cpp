#include <iostream>
using namespace std;
main (){
	//MA = (N1 + N2*2 + N3*3 + ME)/7
	float N1, N2, N3, ME, MA;
	
	cout << "informe sua nota 1: ";
	cin >> N1;
	cout << "informe sua nota 2: ";
	cin >> N2;
	cout << "informe sua nota 3: ";
	cin >> N3;
	ME = (N1 + N2 + N3);
	MA = (N1 + N2*2 +N3*3 + ME)/7;
	cout << "Media Aritimetica: " << MA << endl; 
	
	if (MA >=9)
		cout << "Resultado (A)";
	if (MA >= 7.5 && MA < 9)
		cout << "Resultado (B)";
	if (MA >= 6 && MA < 7.5)
		cout << "Resultado (C)";
	if (MA >= 4 && MA < 6)
		cout << "Resultado (D)";
	if (MA < 4)
		cout << "Resultado (E)";
	
	
}