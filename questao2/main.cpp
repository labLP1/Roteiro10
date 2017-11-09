#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    double saque, deposito;

    Conta *c1= new Conta("julio", 499.99, "432789", 2000.00  );
    Conta *c2= new ContaEspecial("Vanessa", 1000.00, "698526", 1000.00);
    Conta *c3= new ContaEspecial("Caio", 200, "543453", 10000);

    cout << "Class Conta" << endl;
    cout << "Nome: " << c1->getnomeCliente() << endl;
    cout << "Salario Mensal: " << c1->getsalarioMensal() << endl;
    cout << "Numero Conta: " << c1->getnumeroConta() << endl;
    cout << "Saldo: " << c1->getsaldo() << endl;
    cout << "Limite: " << c1->getlimite() << endl;


    cout << "Saque: " ;
    cin >> saque;
    c1->sacar(saque);
    cout << "Saldo Atual: " << c1->getsaldo() << endl;

    cout << "Deposito: " ;
    cin >> deposito;
    c1->depositar(deposito);
    cout << "Saldo Atual: " << c1->getsaldo() << endl << endl << endl;

    cout << "Class ContaESPECIAL" << endl;
    cout << "Nome: " << c2->getnomeCliente() << endl;
    cout << "Salario Mensal: " << c2->getsalarioMensal() << endl;
    cout << "Numero Conta: " << c2->getnumeroConta() << endl;
    cout << "Saldo: " << c2->getsaldo() << endl;
    cout << "Limite: " << c2->getlimite() << endl;


    cout << "Saque: " ;
    cin >> saque;
    c2->sacar(saque);
    cout << "Saldo Atual: " << c2->getsaldo() << endl;

    cout << "Deposito: " ;
    cin >> deposito;
    c2->depositar(deposito);
    cout << "Saldo Atual: " << c2->getsaldo() << endl<< endl;

    cout << "Class Conta" << endl;
    cout << "Nome: " << c3->getnomeCliente() << endl;
    cout << "Salario Mensal: " << c3->getsalarioMensal() << endl;
    cout << "Numero Conta: " << c3->getnumeroConta() << endl;
    cout << "Saldo: " << c3->getsaldo() << endl;
    cout << "Limite: " << c3->getlimite() << endl;


    cout << "Saque: " ;
    cin >> saque;
    c3->sacar(saque);
    cout << "Saldo Atual: " << c3->getsaldo() << endl;

    cout << "Deposito: " ;
    cin >> deposito;
    c3->depositar(deposito);
    cout << "Saldo Atual: " << c3->getsaldo() << endl;


return 0;
}
