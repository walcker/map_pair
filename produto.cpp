#include "produto.h"
#include <iostream>
#include <string>

using namespace std;

Produto::Produto(string nome, float valor){
  this->nome = nome;
  this->valor = valor;
}