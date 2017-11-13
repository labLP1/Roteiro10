#ifndef VALORABAIXOEXCEPETION_H
#define VALORABAIXOEXCEPETION_H

#include <string>
#include <exception>
using namespace std;

class ValorAbaixoExcepetion: public exception{
	
    public:
       virtual const string what() throw();
       ~ValorAbaixoExcepetion( string erro ); 
       ValorAbaixoExcepetion( string erro);
         
    private:
        string erro;
};

#endif
