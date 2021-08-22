#include "funcionario.h"

int funcionarioLastId = 1;
int incrementaId(){
  return funcionarioLastId++;
}

 Funcionario::Funcionario(string nome, string email, string senha){
   this -> nome = nome;
   this -> email = email;
   this -> senha = senha;

   this -> id = incrementaId();
}