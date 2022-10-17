#ifndef ARBOLAA_H
#define ARBOLAA_H

#include <iostream>
#include "NodoAA.h"

using namespace std;

class ArbolAA {

    private:
    	
        NodoAA *raiz;
    
    public:
        ArbolAA() {raiz = NULL;}


        void podar();
        void podarRecursivo(NodoAA *raiz);

};

#endif
