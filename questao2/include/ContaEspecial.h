#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <string>
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        void definirLimite();
        ContaEspecial(string nome, double salario, string numeroConta, double saldo);
};

#endif
