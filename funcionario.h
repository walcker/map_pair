#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_
#include <iostream>
#include <string>

using namespace std;

class Funcionario{
  public:
  int id;
  string nome, email, senha;

  Funcionario(string nome, string email, string senha);
};

#endif
