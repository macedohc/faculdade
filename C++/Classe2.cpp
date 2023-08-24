#include <iostream>

using namespace std;

class carro {
private:
    int ano;
    float valor, km;

public:
    carro(int a, float v, float k) {
        ano = a;
        valor = v;
        km = k;
    }

    int getano() {
        return ano;
    }

    float getvalor() {
        return valor;
    }

    float getkm() {
        return km;
    }
};

int main() {
    carro celta(2016, 15000, 100);
    cout << "Carro Celta" << endl;
    cout << "Ano:" << celta.getano() << endl;
    cout << "Valor:" << celta.getvalor() << endl;
    cout << "KM:" << celta.getkm() << endl;

    return 0;
}



/*#include <iostream>

using namespace std;


class carro{

private:
int ano;
float valor, km;

public:

void setano(int a){
     ano = a;
    //this->ano = ano;
    }
   int  getano(){
   return ano;
   
   }
   void setvalor(float v){
     valor = v;
    }

   float  getvalor(){
   return valor;
   
   }
   void setkm(float k){
     km = k;
    }
   float  getkm(){
   return km;
   
   }
};

int main(){
    
    carro celta;
    celta.setano(2016);
    celta.setvalor(15000);
    celta.setkm(100);
    cout << "Carro Celta"<< endl;
    cout << "Ano:"<< celta.getano() <<endl;
    cout << "Valor:"<< celta.getvalor() <<endl;
    cout << "KM:"<< celta.getkm() <<endl;

   return 0;
} */