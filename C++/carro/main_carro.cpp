#include <iostream>
#include "carro.h"

using namespace std;

int main(){
    // Criação de um objeto "celta" da classe carro, passando os valores para o construtor
    carro celta(2016, 15000, 100);
    
    // Impressão das informações do objeto "celta"
    cout << "Carro Celta" << endl;
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getvalor() << endl;
    cout << "KM: " << celta.getkm() << endl;
    
    system("pause");
    return 0;
}