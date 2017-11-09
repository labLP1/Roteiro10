#include "ContaEspecial.h"



void ContaEspecial::definirLimite(){
     this->setlimite(3*this->getsalarioMensal());
}

ContaEspecial::ContaEspecial(string nome, double salario, string numeroConta, double saldo):Conta( nome,  salario,  numeroConta,  saldo){

}
