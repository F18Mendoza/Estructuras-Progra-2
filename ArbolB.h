#ifndef ARBOLB_H
#define ARBOLB_H

#include <iostream>
#include "NodoB.h"

using namespace std;

class ArbolB {

    private:
        
    
    public:
    	NodoB *raiz;
        ArbolB() {raiz = NULL;}

        void insertar(int pCedula, string pNombre, int pTelefono, string pCorreo);
        void insertarBinario(NodoB *raiz, int pCedula, string pNombre, int pTelefono, string pCorreo);
        void podar();
        void podarRecursivo(NodoB *raiz);
        bool existeCedula(int pCedula);
        bool existeCedulaRecursivo(int pCedula, NodoB *raiz);
        void PreordenR(NodoB *R);
        void mostrar();
        void mostrarRecursivo(NodoB *raiz);

};

#endif
