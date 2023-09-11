#include <iostream>
#include "pilhadinamica.h"
#include <cstddef> //null


using namespace std;

  pilhadinamica::pilhadinamica() //construtora
  {
  Notopo = NULL;
  }
  pilhadinamica::~pilhadinamica()//destrutora
  {
     No* NoTemp;
     while ( Notopo != NULL)
     {
      NoTemp = Notopo;
      Notopo = Notopo ->proximo;
      delete(NoTemp);
     }
     
  }
  bool pilhadinamica::estacheia()// verifica se a pilha esta chei
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
  bool pilhadinamica::estavazia()// verifica se a pilha esta vazia
    {
      return (Notopo == NULL);
  }
  void pilhadinamica::inserir(TipoItem item)//push inserir
    {
    if(estacheia()){
    cout << "A pilha esta cheia!\n";
    cout << " Nao foi possivel inserir o elemento!\n";
    } else { 
          No* NoNovo = new No;
          NoNovo ->valor =item;
          NoNovo ->proximo = Notopo;
          Notopo = NoNovo;
           }
        }
  TipoItem pilhadinamica::remover() //pop retira o ultimo elemento da lista
    {
     if(estavazia()){
     cout << "A pilha esta vazia\n";
     cout << "Nao tem elemento para ser removido!\n";
     return 0;
   }
   else{
   No* NoTemp;
   NoTemp = Notopo;
   TipoItem item = Notopo ->valor;
   Notopo = Notopo ->proximo;
   delete NoTemp;
   return item;
       }
     }  
  void pilhadinamica::imprimir()//print
    {
    No* NoTemp = Notopo;
    while((NoTemp !=NULL)){
      cout << NoTemp ->valor << "  ";
      NoTemp = NoTemp ->proximo;
    }
    cout << endl;
  }
