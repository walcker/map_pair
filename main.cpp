#include <iostream>
#include <map>
#include "petshop.h"

using namespace std;

int main(int argc, char *argv[]){

  PetShop loja("Loja de Animais");

  string resultado;
  resultado = loja.cadastrarFuncionario("João", "joao@joao.com", "joao1234");
  cout << resultado << endl;

  resultado = loja.cadastrarFuncionario("Maria", "maria@maria.com", "maria1234");
  cout << resultado << endl;

  resultado = loja.listarFuncionarios();
  cout << resultado << endl;

  resultado = loja.logarFuncionario("maria@maria.com", "maria1234", "Caixa01");
  cout << resultado << endl;

  resultado = loja.logarFuncionario("joao@joao.com", "joao1234", "Caixa02");
  cout << resultado << endl;

  int idDeMaria = loja.idDoEmail("maria@maria.com");
  int idDeJoao = loja.idDoEmail("joao@joao.com");

      //cadasstrar um produto como Maria
      resultado = loja.cadastrarProduto(idDeMaria, "Coleira", 10.0);
      cout << resultado << endl;

      resultado = loja.cadastrarProduto(idDeJoao, "Racao para Suricato", 435.99);
      cout << resultado << endl;

      resultado = loja.listarProdutos();
      cout << resultado << endl;

  return 0;
}