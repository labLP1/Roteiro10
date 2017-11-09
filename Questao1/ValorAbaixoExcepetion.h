#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <string>
#include <exception>
using namespace std;

class ValorAbaixoException: public exception{
    public:
       virtual const string what() throw();
       virtual ~ValorAbaixoException( string erro ); 
       ValorAbaixoException( string erro);
         
    private:
        string erro;
};

#endif
