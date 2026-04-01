#include <iostream>
using namespace std;

int main(){
   double n1,n2,n3,n4,media;
   cout << "Digite suas notas dos bimestres 1,2,3 e 4" << endl;
  cin >> n1 >> n2 >> n3 >> n4;
  media = (n1 + n2 + n3 + n4) / 2;
   if(media >= 6){
    cout << "Aprovado";
   }
   else if(media >= 4 && media <= 5) {
    cout << "Exame Final";
   }
   else {
    cout << "Reprovado";
   }
return 0;
}