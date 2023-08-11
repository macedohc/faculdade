#include <iostream>

using namespace std;

int main(){
    /*
    ALOCAÇÃO DINÂMICA
    */
   int tamanho;
   cout << "Digite o tamanho do vetor : " << endl;
   cin >> tamanho;
   int* vetor = new int[tamanho];
   
   for(int i=1 ; i<tamanho ; i++){
    cout << "Digite o elemento " << i+i << "  do vetor: " << endl;
    cin >> vetor [i];
   }
   for(int i=0 ; i<tamanho ; i++){
    cout << vetor[i] << "  ";
   }
   cout << endl;

   delete [] vetor; //delete o vetor



    /*  ALOCAÇÃO ESTÁTICA 
    
      int vet [4];
      vet[0] = 5;
      vet[1] = 10;
      cout << vet[1] << endl;

      na posição 2 já tinha alguma coisa armazenada, porém não declarei
    
     
     int vet[4] = {5,10};
     
     for (int i=0 ; i<4 ; i++){
        cout << vet[i] << "  ";
     }
     
     cout << endl;


     int x = sizeof(vet)/sizeof(int);
     int y = sizeof(int);
     cout << "Tamanho de inteiro: " << y << endl;
     cout << "Quantidade de elementos do vetor: " <<  x << endl;
*/  
    return 0;
}