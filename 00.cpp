#include <iostream>
#include <stdlib.h>
using namespace std;
main (){
    
    int N;

    cout << "Menu de opcoes:";
    cout << endl;
    cout << "Arp =================[ 1 ]" << endl;
    cout << "ipconfig ============[ 2 ]" << endl;
    cout << "Iformacao do Sistema [ 3 ]" << endl;
    cout << endl;
    cout << "Infome a opcao: ";
    cin >> N;
    switch (N){
        case 1:
        cout << system ("arp -a");
        break;
        case 2:
        cout << system ("ipconfig");
        break;
        case 3:
        cout << system ("systeminfo");
        break;
        default:
        cout << "opcao invalida";

    } 




}