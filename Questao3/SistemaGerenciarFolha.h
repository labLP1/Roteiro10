#ifndef SISTEMAGERENCIARFOLHA_H
#define SISTEMAGERENCIARFOLHA_H

#include <string>
#include <iostream>
#include "OrcamentoExtouradoException.h"
#include "FuncionarioNaoExisteException.h"
#include "Funcionario.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"

#define MAXFUNCIONARIOS 10 // número máximo de funcionarios
//#define limpaTela() system("cls") // Windows


using namespace std;

class SistemaGerenciarFolha
{
    public:
        SistemaGerenciarFolha();
        void setFuncionarios( int opcao);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario( int opcao);

    protected:

    private:
        int contador = 0;
        Funcionario *funcionarios[MAXFUNCIONARIOS];
        int menu();
        int menuCadastro();
        int menuPesquisa();
        void pesquisa( int opcao );
};

#endif // SISTEMAGERENCIARFOLHA_H
