#include <iostream>
using namespace std;
main (){
	int v[3] = {5,7,8}, m, i;
	for (i=0;i<3;i++){
		cout << "nota :" << i+1 << " :" << v[i] << endl;
		
	}
	m = (v[0]+v[1]+v[2])/3;
	cout << "Media total: " << m << endl;
	if (m<6)
		cout << "Reprovado" << endl;
	else
		cout << "Aprovado" << endl;
	
	
	
	
}