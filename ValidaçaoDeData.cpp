#include <iostream>
using namespace std;

int main(){
    int dia, mes, ano;

    cout << "Digite o |dia| o |mes| e o |ano| do seu nascimento" << endl;
    cin >> dia >> mes >> ano;
    // validação do mes, dia e ano
    bool d = ((mes==3|| mes==5|| mes==7||mes==8||mes==10||mes==12) && (dia<=31) || (mes==1||mes==4||mes==6||mes==9||mes==11) && (dia<=30) || (mes==2) && (dia<=28));
    bool m = (mes >= 1 && mes <= 12);
    bool a = (ano >= 1926 || ano <= 2026 );
   
    //validação de data
    if ((m) && (a) && (d)) cout << "data valida";
    else cout << "data invalida | ";

    // razão
    if(!m) cout << "mes invalido | ";
    if(!d) cout << "dia invalido | ";
    if(!a) cout << "ano invalido | ";
    return 0;
}