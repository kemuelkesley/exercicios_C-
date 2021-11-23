#include <iostream>
#include <stdlib.h>
using namespace std;
main (){
    int n1, n2, opc, resolva;

    cout << "=============CALC Reduzida ver. 1.0============";
    cout << endl;
    cout << endl;
    cout << "Somar====== [ 1 ] " << endl;
    cout << "Subtrair=== [ 2 ] " << endl;
    cout << "Multiplicar [ 3 ] " << endl;
    cout << "Dividir==== [ 4 ] " << endl;
    cout << endl;
	cout << "Informe as opcoes : ";
    cin >> opc;
    cout << "infome o numero 1: ";
    cin >> n1;
    cout << "infome o numero 2: ";
    cin >> n2;

    switch (opc){
        case 1:
            resolva = (n1 + n2);
            cout << "Valor somado: " << n1 << " + " << n2 << " = " << resolva;
            break;
            case 2:
                resolva = (n1 - n2);
                cout << "Valor subtraido: " << n1 << " - " << n2 << " = " << resolva;
                break;
                case 3:
                    resolva = (n1 * n2);
                    cout << "Valor multiplicado: " << n1 << " x " << n2 << " = " << resolva;
                    break;
                    case 4:
                        resolva = (n1 / n2);
                        cout << "Valor dividido: " << n1 << " / " << n2 << " = " << resolva;
                        break;
                        default:
                            cout << "Opcao informada invalida."; 


        system ("pause");



    }











}