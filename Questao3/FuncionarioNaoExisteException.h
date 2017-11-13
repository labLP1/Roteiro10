#include <exception>
#include <string>

using namespace std;

class FuncionarioNaoExisteException: public exception
{
private:
	string erro;

public:
	virtual const string what() throw();
	FuncionarioNaoExisteException(string erro);
	~FuncionarioNaoExisteException();
};

