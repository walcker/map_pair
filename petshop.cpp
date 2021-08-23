#include "petshop.h"
#include "funcionario.h"
#include <iostream>
#include <utility>

using namespace std;

PetShop::PetShop(string nome){
  this -> nome = nome;
}
int PetShop::idDoEmail(string email){
  auto funcionarioAtual = this->funcionarios.begin();
  while(funcionarioAtual != this->funcionarios.end()){
    if(funcionarioAtual->email == email){
      return funcionarioAtual->id;
    }
    funcionarioAtual++;
  }
  return -1;
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

  
  return "Email/senha Invalidos";
}

string PetShop::cadastrarProduto(int funcionarioId, string nomeProduto, float valor){
  if(this->funcionariosLogados.count(funcionarioId) > 0){
    Produto novoProduto(nomeProduto, valor);
    this->produtos.push_back(novoProduto);
    return "Produto inserido com sucesso";
  }else{
    return "Funcionario nao esta logado.";
  }  
}

string PetShop::listarProdutos(){
  string retorno = "";
  auto produtoAtual = this->produtos.begin();
  while(produtoAtual != this->produtos.end()){
    retorno += produtoAtual->nome +"/n";
    produtoAtual++;
  }
  return retorno;
}

