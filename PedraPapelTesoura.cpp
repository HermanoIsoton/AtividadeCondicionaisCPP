#include <iostream>
using namespace std;

int main (){
  char jogo1, jogo2;
  cout << "Jogador1 (P)Pedra, (T)Tesoura, (E)papel" << endl;
  cin >> jogo1;
  cout << "Jogador2 (P)Pedra, (T)Tesoura, (E)papel" << endl;
  cin >> jogo2;

  if ((jogo1 != 'P' && jogo1 != 'T' && jogo1 != 'E')||(jogo2 != 'P' && jogo2 != 'T' && jogo2 != 'E')) cout << "Erro, entrada errada escolha somente (p)(t)(e)";
  else if(jogo1 == jogo2) cout << "Empate!";
  else if((jogo1 == 'P' && jogo2 == 'T')||(jogo1 == 'T' && jogo2 == 'E')||(jogo1 == 'E' && jogo2 == 'P')) cout << "jogador 1 ganhou!";
  else cout << "jogador 2 ganhou!";
    return 0;
}