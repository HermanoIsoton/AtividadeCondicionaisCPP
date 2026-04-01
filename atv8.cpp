#include <iostream>
using namespace std;

int main(){
    int quantidade, desconto;
    double valor;
    cout << "Digite a quantidade de produtos: ";
    cin >> quantidade;
    cout << "Digite o valor do produto: ";
    cin >> valor;
    if( quantidade >= 3 && quantidade <=5){
       desconto = 10;
       cout << "O VALOR DO PRODUTO COM O DESCONTO FICOU: " << valor * 0.9 << endl;
    }
    else if(quantidade >= 6 && quantidade <=9){
        desconto = 20;
        cout << "O VALOR DO PRODUTO COM O DESCONTO FICOU: " << valor * 0.8 << endl;
    }
    else if(quantidade >= 10){
        desconto = 30;
        cout << "O VALOR DO PRODUTO COM O DESCONTO FICOU: " << valor * 0.7 << endl;
    }
    else{
        cout << "O VALOR DO PRODUTO COM O DESCONTO FICOU: " << valor << endl;
      
 
    }
    return 0;
}