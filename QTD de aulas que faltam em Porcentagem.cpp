#include <iostream>
using namespace std;
main (){
	int QTDaulas, AULpassaram, restam, porcentagem;
	cout << "informe a quantidade de aulas total: ";
	cin >> QTDaulas;
	cout << "Quantas aulas ja teve: ";
	cin >> AULpassaram;
	restam = QTDaulas - AULpassaram;
	porcentagem = -1*((100*(restam - QTDaulas))/QTDaulas); //codigo para porcentagem
	cout << "Quantidades de aulas que restam: " << restam << endl;
	cout << porcentagem << "% de aulas concluidas" << endl;
	
	
}