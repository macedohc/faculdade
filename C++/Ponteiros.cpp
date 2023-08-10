#include <iostream>
#include <cstddef>

using namespace std;

int main(){
     int var1;
     int* pont1;
     var1 = 5;
     pont1 = &var1;
     cout << "Valor da variavel do seu nome: " << var1 << endl;
     cout <<"Endereco de memoria da variavel: "<< pont1 << endl; //Mostra o endereço que a variavel esta na memoria
     cout <<"Valor da variavel, atraves do ponteiro: "<< *pont1 << endl; // " * " Mostra o valor que esta dentro da variavel
     

     int var2;
     var2 = 50;
     pont1 = &var2;
     cout << *pont1 << endl;
     cout << var1 << endl;

     /*int* pont2;
     pont2 = NULL;
     cout << *pont2;
     Quando criamos um ponteiro sem atribui valor no endereço
     dele já vai ter um valor desconhecido lá por isso anulamos */
     

     /*var2 = var1; é a mesma coisa que  var2 = *pont1;
     var2 = *pont1;
     cout << var2; */

     /* var1 - 30;
      *pont1 = 30; é a mesma coisa que var1 - 30;
    */ 

   int* pont3 = new int; //criei um ponteiro onde ele vai pegar um espaço da memoria para apontar
   // mas só posso acessar ela pelo pont3 pois ela não vai ter um nome
   *pont3 = 35;
   cout << pont3;
   cout << *pont3;

    delete pont3; // deve ser feito antes de atribui o pont1, para evitar vazamento de memoria
     // pont3 = pont1; Recebe o endereço do pont1
    // *pont3 = *pont1; Recebe o valor do pont1
   
   
   
   return 0;
}