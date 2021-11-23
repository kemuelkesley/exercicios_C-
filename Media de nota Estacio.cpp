#include <iostream>
using namespace std;
int main(){
	int avi1, avi2, res, mfinal;
	cout << "nota da AVI1: ";
	cin >> avi1;
	cout << "nota da AVI2: ";
	cin >> avi2;
	res = avi1 + avi2;
	mfinal = res /2;
	cout << "Media: " << res << endl;
	cout << "Media final: " << mfinal << endl;
	if (mfinal>=6){
		cout << "aprovado" << endl;
	}
	else {
		cout << "Reprovado" << endl;
	}
	
	
		return 0;
	
}