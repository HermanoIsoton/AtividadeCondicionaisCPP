#include <iostream>

using namespace std;

int main() {
   int idade;
   double preco, carteira;

    cout << "Digite a idade do cliente: ";
    cin >> idade;
    cout << "Digite se voce tem carteira ou nao (1 para sim, 0 para nao): ";
    cin >> carteira;

    if(idade <=12 || idade >= 60){
        
            cout << " voce vai pagar 12,5 reais";
        
    }
    else{
        if(carteira == 1){
            cout << " voce vai pagar 15 reais";
        }
        else{
            cout << " voce vai pagar 25 reais";
        }
    }
    return 0;
}