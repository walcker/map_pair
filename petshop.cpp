#include "petshop.h"
#include "funcionario.h"
#include <iostream>
#include <utility>

using namespace std;

PetShop::PetShop(string nome){
  this -> nome = nome;
}

string PetShop::cadastrarFuncionario(string nome, string email, string senha){
  Funcionario novoFuncionario(nome, email, senha);
  this -> funcionarios.push_back(novoFuncionario);

  return nome + " cadastrado com sucesso.";
}

string PetShop::listarFuncionarios(){
  vector<Funcionario>:: iterator funcionarioAtual;
  string retorno = "";
  funcionarioAtual = this -> funcionarios.begin();

  while (funcionarioAtual != this -> funcionarios.end()){
    retorno = retorno + funcionarioAtual -> nome + "\n";

    funcionarioAtual++;
  }
return retorno;
}

string PetShop::logarFuncionario(string email, string senha, string caixa){
  //map<int, string> funcionariosLogados;
  //preciso adicionar em funcionariosLogados o par <idFuncionario, nomeDoCaixa>
  // passo 1 - qual o id dp funcionario com esse email/senha
  vector<Funcionario>::iterator funcionarioAtual;
  funcionarioAtual = this -> funcionarios.begin();
  while (funcionarioAtual != this -> funcionarios.end()){
    //bateu email/senha
    if (funcionarioAtual->email == email && funcionarioAtual->senha == senha){
      //sim, logar
      pair<int, string> usuarioIdCaixa;
      usuarioIdCaixa.first = funcionarioAtual -> id;
      usuarioIdCaixa.second = caixa;
      this -> funcionariosLogados.insert(usuarioIdCaixa);
      return "Login com sucesso para " + funcionarioAtual->nome; 
    }
    funcionarioAtual++;
  }

  
  return "Nao Implementado";
}

string PetShop::cadastrarProduto(int funcionarioId, string nomeProduto, float valor){
  return "Nao Implementado";
}

string PetShop::listarProdutos(){
  return "Nao Implementado";
}

