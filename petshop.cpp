#include "petshop.h"
#include "funcionario.h"
#include <iostream>

using namespace std;

PetShop::PetShop(string nome){
  this -> nome = nome;
}

string PetShop::cadastrarFuncionario(string nome, string email, string senha){
  Funcionario novoFuncionario(nome, email, senha);
  this -> funcionarios.push_back(novoFuncionario);
  return nome + " cadastrado com sucesso.";
}
string PetShop::logarFuncionario(string email, string senha){
  return "Nao Implementado";
}
string PetShop::cadastrarProduto(int funcionarioId, string nomeProduto, float valor){
  return "Nao Implementado";
}
string PetShop::listarProdutos(){
  return "Nao Implementado";
}

