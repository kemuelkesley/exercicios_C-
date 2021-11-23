#include <iostream>
using namespace std;
main (){
	int nbimestre1, nbimestre2, media, examefinal, faltas;
	cout << "Media do 1 bimestre: ";
	cin >> nbimestre1;
	cout << "Media do 2 bimestre: ";
	cin >> nbimestre2;
	cout << "informe o numero de faltas: ";
	cin >> faltas;
	media = (nbimestre1 + nbimestre2)/2;
	cout << endl << endl;
	cout << "Media dos 2 bimestres:  " << media << endl;
	if (media >=7 || media == 10){
		cout << "Aprovado pela media do bimestre." << endl;
	}else{
		cout << "Reprovado pela media do bimestre." << endl;
	}if (faltas <=36){
		cout << "Aprovado por ter menos faltas." << endl;
	}else{
		cout << "Reprovado por ter mais que 40....." << endl;
	}
	cin.get ();
	cin.get ();	
	
	
	
}