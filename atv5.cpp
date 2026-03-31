#include <iostream>
using namespace std;
int main(){
    char c;
    cout << "Digite um caractere: ";
    cin >> c;
    if(c >= 'A' && c <= 'Z'){
        cout << " e uma letra maiuscula." << endl;
    } else if(c >= 'a' && c <= 'z'){
        cout << " e uma letra minuscula." << endl;
    }
    return 0;
}