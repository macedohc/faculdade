
typedef int TipoItem;
const int max_itens = 100;


class pilha{
 
 private:
 
 int tamanho;
 TipoItem* estrutura;


 public:
  
  pilha(); //construtora
  ~pilha();//destrutora
  bool estacheia();// verifica se a pilha esta chei
  bool estavazia();// verifica se a pilha esta vazia
  void inserir(TipoItem item); //push inserir
  TipoItem remover(); //pop retira o ultimo elemento da lista
  void imprimir(); //print
  int qualtamanho(); //lenght
};