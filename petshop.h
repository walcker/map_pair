#ifndef _PETSHOP_H_
#define _PETSHOP_H_
#include "funcionario.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PetShop{
  public:
  string nome;
  vector<Funcionario> funcionarios;

  PetShop(string nome);

  string cadastrarFuncionario(string nome, string email, string senha);
  string logarFuncionario(string email, string senha);
  string cadastrarProduto(int funcionarioId, string nomeProduto, float valor);
  string listarProdutos();

};


#endif