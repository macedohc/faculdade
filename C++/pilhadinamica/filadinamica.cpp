#include <iostream>
#include "filadinamica.h"
#include <cstddef> //null
#include <new>


using namespace std;

  filadinamica::filadinamica() //construtora
  {
  primeiro = NULL;
  ultimo = NULL;
  }
  filadinamica::~filadinamica()//destrutora
  {
     No* NoTemp;
     while ( primeiro != NULL)
     {
      NoTemp = primeiro;
      primeiro = primeiro ->proximo;
      delete(NoTemp);
     }
     ultimo = NULL;
  }
  bool filadinamica::estacheia()// verifica se a pilha esta chei
    {
       No*NoNovo;
       try{
       
       NoNovo = new No;
       delete NoNovo;
       return false;
       } catch( bad_alloc exception){
       return true;
       }
  }
  bool filadinamica::estavazia()// verifica se a pilha esta vazia
    {
      return (primeiro == NULL);
  }
  void filadinamica::inserir(TipoItem item)//push inserir
    {
    if(estacheia()){
    cout << "A Fila esta cheia!\n";
    cout << " Nao foi possivel inserir o elemento!\n";
    } else { 
          No* NoNovo = new No;
          NoNovo ->valor =item;
          NoNovo ->proximo = NULL;
          if (primeiro == NULL){
          primeiro = NoNovo;
          } else{
           ultimo ->proximo = NoNovo;
          }
          ultimo = NoNovo;
           }
        }
  TipoItem filadinamica::remover() //pop retira o ultimo elemento da lista
    {
     if(estavazia()){
     cout << "A Fila esta vazia\n";
     cout << "Nao tem elemento para ser removido!\n";
     return 0;
   }
   else{
       No* NoTemp;
       NoTemp = primeiro;
       TipoItem item = primeiro ->valor;
       primeiro = primeiro ->proximo;
       if (primeiro == NULL){
       ultimo = NULL;
          } 
          delete NoTemp;
          return item;
        }
      }

 void filadinamica::imprimir() {
    No* temp = primeiro; // Inicialize temp com o primeiro elemento da fila
    cout << "Fila = [ ";
    while (temp != NULL) {
        cout << temp->valor << "  ";
        temp = temp->proximo;
    }
    cout << " ]\n";
}

  
