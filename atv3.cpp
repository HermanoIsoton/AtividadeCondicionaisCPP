#include <iostream>
using namespace std;
int main(){
    double n1, n2;
    char c;
    cout << "Digite o primeiro numero: ";
    cin >> n1;  
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite a operacao (+, -, *, /): ";
    cin >> c;  
    switch(c){
        case '+':
            cout << "Resultado: " << n1 + n2 << endl;
            break;
        case '-':
            cout << "Resultado: " << n1 - n2 << endl;
            break;
        case '*':
            cout << "Resultado: " << n1 * n2 << endl;
            break;
        case '/':
                cout << "Resultado: " << n1 / n2 << endl;        
            break;
        default:
            cout << "Operacao invalida!" << endl;
    }
    return 0;


}