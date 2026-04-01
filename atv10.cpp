#include <iostream>
using namespace std;

int main(){
double l1,l2,l3;
cout << "Digite a medida dos 3 lados do triangulo" << endl;
cin >> l1>>l2>>l3;
if (l1==l2 && l2==l3){
    cout << "o triangulo e equilatero porque tem todos os lados iguais";
}
else if(l1==l2 || l1==l3 || l2==l3){
   cout << "o triangulo e um  isosceles porque tem apenas 2 lados iguais";
}
else {
    cout << "o triangulo e um escaleno porque nao tem nenhum lado igual";
}

return 0;
}

    