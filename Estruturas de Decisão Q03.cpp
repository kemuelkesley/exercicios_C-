#include <iostream>
#include <math.h>

using namespace std;

main (){
	   
	   int anonascimento, anoatual, idade, dias;
	   
	   cout << "informe o ano Atual: ";
	   cin >> anoatual;
	   cout << "informe o ano de nascimento: ";
	   cin >> anonascimento;
	   idade = anoatual-anonascimento; // calulo para dizer a idade EX: ( ano atual - ano de nascimento)
	   dias = (idade * 365); //calculo para converter a idade em dias EX: (34 anos * 365 dias)	  
	   cout << idade << " anos de idade" << endl;
	   cout << dias << " Dias" << endl;
	   
	   if (idade>16){ // condição IF significa SE e ELSE signfica ENTÃO.
		   cout << "Voce pode votar" << endl;
	   }else{
		   cout << "voce nao pode votar" << endl;
	   }if (idade>=18){ // >= simbolo MAIOR IGUAL.
	   
		   cout << "voce pode tirar a CNH" << endl;
	   }else {
		   cout << "voce nao pode tirar a CNH" << endl;
	   }
		 	  
	
}