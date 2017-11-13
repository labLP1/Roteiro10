#include <exception>
#include <string>

using namespace std;

class OrcamentoExtouradoException: public exception
{
private:
	string erro;

public:
	virtual const string what() throw();
	OrcamentoExtouradoException(string erro);
	~OrcamentoExtouradoException();
};

