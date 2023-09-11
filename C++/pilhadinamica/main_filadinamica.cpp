#include <iostream>
#include "filadinamica.h"


using namespace std;

int main(){
   filadinamica filadinamica1;
   TipoItem item;
   int opcao;
   cout << "Programa gerador de fila: \n";
   
  do {
   cout << "Digite 0 para parar o programa!\n ";
   cout << "Digite 1 para inserir um elemento!\n ";
   cout << "Digite 2 para remover um elemento!\n ";
   cout << "Digite 3 para imprimir a fila!\n ";
   cin >> opcao;
   if(opcao == 1){
   cout << "Digite o elemento a ser inserido:\n";
   cin >> item ;
   filadinamica1.inserir(item);

    }else if(opcao ==2){
        item = filadinamica1.remover();
       cout << "Elemento removido: " << item<< endl;
       } else if(opcao ==3 ) {
            filadinamica1.imprimir();
       }
      } while (opcao != 0);
           {
           }
                  return 0;
}