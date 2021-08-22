#ifndef _PETSHOP_H_
#define _PETSHOP_H_
#include "funcionario.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class PetShop{
  public:
  string nome;
  vector<Funcionario> funcionarios;
  map<int, string> funcionariosLogados; //

  PetShop(string nome);

  string cadastrarFuncionario(string nome, string email, string senha);
  string listarFuncionarios();
  string logarFuncionario(string email, string senha, string caixa);
  string cadastrarProduto(int funcionarioId, string nomeProduto, float valor);
  string listarProdutos();

};


#endif