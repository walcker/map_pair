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
  cout << resultado;


  return 0;
}