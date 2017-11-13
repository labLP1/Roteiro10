#include "Conta.h"
class ContaEspecial :	public Conta
{
public:
	ContaEspecial(string nome, double salario, string numero, double saldo);
	void definirLimite();
	~ContaEspecial();
};

