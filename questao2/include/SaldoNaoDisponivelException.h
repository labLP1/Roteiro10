#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H


// using standard exceptions
#include <iostream>
#include <exception.h>

using namespace std;

class SaldoNaoDisponivelException: public exception
{
  virtual const char* what() const throw()
  {
    return "Saldo indisponivel para saque...";
  }
} myex;

int main () {
  try
  {
    throw myex;
  }
  catch (exception& e)
  {
    cout << e.what() << '\n';
  }
  return 0;
}
#endif // SALDONAODISPONIVELEXCEPTION_H
