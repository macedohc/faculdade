#include <iostream>
#include "pilha.h"

using namespace std;

  pilha::pilha() //construtora
  {
  tamanho = 0;
  estrutura = new TipoItem[max_itens];
  }
  pilha::~pilha()//destrutora
  {
  delete [] estrutura;
  }
  bool pilha::estacheia()// verifica se a pilha esta chei
    {
       return (tamanho == max_itens);
  }
  bool pilha::estavazia()// verifica se a pilha esta vazia
    {
      return (tamanho == 0);
  }
  void pilha::inserir(TipoItem item)//push inserir
    {
    if(estacheia()){
    cout << "A pilha esta cheia!\n";
    cout << " Nao foi possivel inserir o elemento!\n";
    } else { 
          estrutura[tamanho] = item;
          tamanho ++;
           }
        }
  TipoItem pilha::remover() //pop retira o ultimo elemento da lista
    {
     if(estavazia()){
     cout << "A pilha esta vazia\n";
     cout << "Nao tem elemento para ser removido!\n";
     return 0;
     }else{
      tamanho --;
     return estrutura[tamanho -1];
    
     }  
}
  void pilha::imprimir()//print
    {
    cout << "Pilha: [ \n";
    for(int i=0 ; i<tamanho ; i++){
    cout << estrutura [i] << " ";
    }
    cout << " ] \n";
  }
  int pilha::qualtamanho()//lenght
    {
   return tamanho;
  }