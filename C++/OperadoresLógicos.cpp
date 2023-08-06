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
          cout << "Nota D\n"  << "Media Final: \n" << media <<endl;
          }
          else if ( media < 5){
          cout << "Nota C\n"  << "Media Final: \n" << media <<endl;
          }
          else if ( media < 7.5){
          cout << "Nota B\n"  << "Media Final: \n" << media <<endl;
          }
       else {
        cout << "Nota A\n" << "Media Final: \n" << media <<endl;
       }

       float freq;
       cout<< "Qual e a frequencia do aluno?\n";
       cin >> freq;
       // Exemplo de AND (E)
       
       if ( media > 5 && freq >= 75){
          cout << "Aluno Aprovado\n"  << endl;
          }
          else {
       cout << "Aluno Reprovado\n" << endl;
       }
      
   return 0;

}

 /* Exemplo de OR (OU)
    if ( media < 5 || freq < 75){
          
          cout << "Aluno Reprovado\n" << endl;
          }
          else {
          cout << "Aluno Aprovado\n"  << endl;
       }
       */ 
     /*operador ternário
     
     (media >= 5) ? cout << "Aprovado" : cout << "Reprovado"; */ 