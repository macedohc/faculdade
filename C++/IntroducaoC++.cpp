#include <iostream> 

// podemos tirar o std do main e trocar por using namespace std;

int main(){

   std::cout << "Hello World! \n Oi mundo!";

   system("pause"); 

    return 0; }
   

/* COMENTÁRIO

   #include <iostream>: Essa linha inclui a biblioteca iostream,
    que fornece funcionalidades para operações de entrada e saída em C++.

int main() { ... }: Esta é a função principal do programa, 
é onde a execução do programa começa.

std::cout << "Hello World! \n Oi mundo!";: Esta linha usa std::cout
 para exibir a mensagem "Hello World! \n Oi mundo!" no console. std::cout 
 é usado para operações de saída.

system("pause");: Esta linha utiliza a função system para pausar o programa e
 aguardar o usuário pressionar qualquer tecla antes de continuar.
 Vale ressaltar que o uso de system("pause") não é recomendado devido a
  questões de portabilidade, mas funciona em sistemas Windows.

return 0;: Esta linha indica que a função main deve retornar 0,
 o que é uma convenção para indicar uma execução bem-sucedida do programa. 
 Se o programa encontrar um erro, ele pode retornar um valor diferente de zero.
   */

