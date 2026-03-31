#include <iostream>
using namespace std;
int main (){
    double c;
    cout << "Digite a temperatura em Celsius: ";
    cin >> c;
    if(c<= 15){
        cout << "Frio" << endl;
    } else if(c > 15 && c <= 25){
        cout << "Agradavel" << endl;
    } else {
        cout << "Quente" << endl;
    }
}
