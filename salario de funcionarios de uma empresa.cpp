#include <iostream>
using namespace std;
main (){
	float fun1, fun2, fun3, fun4, fun5 ,salario, inss, fgts, fgtsinss;
	cout << "informe o salario do kemuel: ";
	cin >> fun1;
	cout << "informe o salario da leila: ";
	cin >> fun2;
	cout << "informe o salario da livia: ";
	cin >> fun3;
	cout << "informe o salario do pedro: ";
	cin >> fun4;
	cout << "informe o salario do samuel: ";
	cin >> fun5;
	salario = (fun1 + fun2 + fun3 + fun4 + fun5)*12;
	cout << "Media de salario anual: " << salario << endl;
	inss = (salario * 8)/100;
	cout << "desconto do inss: " << inss << endl;
	fgts = inss;
	cout << "FGTS dos funcionarios: " << fgts << endl;
	fgtsinss = inss + fgts;
	cout << "INSS e FGTS gasto anual: " << fgtsinss << endl;
	
	
	
	
	return 0;
	
	
	
	
	
}