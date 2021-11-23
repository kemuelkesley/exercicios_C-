#include <iostream>
using namespace std;
main (){
	int id[2]={6,4}, i, media;
	
	cout << "Nota 1 :" << id[0] << endl;
	cout << "Nota 2 :" << id[1] << endl;
	media = (id[0]+id[1])/2;
	cout << "Media geral: " << media << endl;
	if (media<6)
		cout << "Reprovado.";
	else 
		cout << "Aprovado.";
	
}