#include <iostream>
#include "fila.h"

using namespace std;


        fila::fila(){ //construtora
        primeiro = 0;
        ultimo = 0;
        estrutura = new TipoItem[max_itens];
        
        }
        
         fila::~fila(){ //destrutora

         delete [] estrutura;
         }
         bool fila::estacheia(){ // verifica se a fila esta chei
        
        return (ultimo-primeiro == max_itens);
        
        }
         bool fila::estavazia(){// verifica se a fila esta vazia
         
         return (primeiro == ultimo);
         }
         void fila::inserir(TipoItem item){ //push inserir
         if(estacheia()){
         cout << "A fila esta cheia!\n";
         cout << " Nao foi possivel inserir o elemento!\n";
         } else { 
          estrutura[ultimo % max_itens] = item;
          ultimo++;
           }
        }
         TipoItem fila::remover(){ //pop retira o primeiro  elemento da lista
         if(estavazia()){
         cout << "A fila esta vazia\n";
         cout << "Nao tem elemento para ser removido!\n";
         return 0;

         } else{

         primeiro ++;
         return estrutura[(primeiro -1) % max_itens-1];
         } 
       }
         void fila::imprimir(){ //print
           cout << "Fila: [ \n";
           for(int i= primeiro ; i<ultimo ; i++){
           cout << estrutura [i % max_itens] << " ";
           }
           cout << " ] \n";      
    }
