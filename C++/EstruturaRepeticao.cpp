#include <iostream>

using namespace std;

int main (){
    
      int n;
      cout << "Diga um numero inteiro nao negativo : \n";
      cin >> n ;
       
       int soma = 0;
       int cont = 1;
       
       while (cont <= n){
           soma+=cont;
           cont++;
       }

       //break: quebrar uma estrutura de repetição
         cout <<" A soma dos numeros de 0 ate: " << n << " = " << soma << endl;

    return 0;
}

      /*do{
            soma+=cont;
            cont++;
        } while(cont <= n);

        No caso do Do While ele executa direto trazendo o resultado 1,
        sem o usuario digitar algum numero #Cuidado com isso */

      /*for(int j=1 ; j<=n ; j+=1){
            soma +=j;

            Não precisa declarar lá em cima a variavel "cont" no for ja tem,
             porem pode declarar se quiser! E quando não tiver chaves, só vai vale a proxima linha
        }*/  