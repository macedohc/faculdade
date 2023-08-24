#include <iostream>

using namespace std;

class propaganda {
 
 private:

 public:

 void inscrever(){
   
   cout << "Inscricao efetuada com sucesso" << endl;
 
 }
  void curta(){
  
  cout << "Curta esse video!!" << endl;
  }

};

int main (){

propaganda canal;
canal.inscrever();
canal.curta();
    return 0; 
}