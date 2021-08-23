#ifndef _PRODUTO_H_
#define _PRODUTO_H_
#include <iostream>
#include <string>

using namespace std;

class Produto{
  public:
  string nome;
  float valor;

  Produto(string nome, float valor);

};
#endif