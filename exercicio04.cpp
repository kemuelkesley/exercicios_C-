#include <iostream>
using namespace std;
main (){
	float pproduto, desc, valmone, total;
	cout << "informe o preco do produto: ";
	cin >> pproduto;
	cout << "informe o valor do desconto: ";
	cin >> desc;
	valmone = pproduto * desc /100;
	total = pproduto - desc;
	cout << "valor total eh: " << total;
	
	
}