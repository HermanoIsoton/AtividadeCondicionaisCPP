#include <iostream>
using namespace std;

int main() {
    int mes;
    cout << "Digite o numero do mes: ";
    cin >> mes;

    switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
        cout << "o mes tem 31 dias" << endl;
        break;

    case 4:
    case 6:
    case 8:
    case 10:
    case 12:
        cout << "o mes tem 30 dias" << endl;
        break;

    case 2:
        cout << "o mes tem 28 dias" << endl;
        break;

    default:
        cout << "mes invalido" << endl;
        break;
    }

    return 0;
}