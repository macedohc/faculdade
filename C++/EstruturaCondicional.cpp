//Aprendendo estrutura Condicional com C++

#include <iostream>

using namespace std;

int main(){
      
      float nota1, nota2;

      cout << "Digite a Nota1: \n";
      cin >> nota1;

      cout << "Digite a Nota2: \n";
      cin >> nota2;
      float media =(nota1+nota2)/2;

       if ( media < 2.5){
          cout << "sua nota foi D\n"  << endl;
          }
          else if ( media < 5){
          cout << "sua nota foi C\n"  << endl;
          }
          else if ( media < 7.5){
          cout << "sua nota foi B\n"  << endl;
          }
       else {
        cout << "sua nota foi A\n" << endl;
       }

   return 0;

}
