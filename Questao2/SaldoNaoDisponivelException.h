#include <exception>
#include <string>

using namespace std;

class SaldoNaoDisponivelException: public exception
{
private:
	string erro;

public:
	virtual const string what() throw();
	SaldoNaoDisponivelException(string erro);
	~SaldoNaoDisponivelException();
};

