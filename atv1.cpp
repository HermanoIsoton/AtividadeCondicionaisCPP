#include <iostream>
using namespace std;
int main (){
    int idade;
    cout << "infome seu ano de nacimento: ";
    cin >> idade;
    if(idade>=2009){
        cout << "voce e menor de idade!";
    }
    else{
        cout << "voce e maior de idade!";
    }
}