#ifndef ARBOLB_H
#define ARBOLB_H

#include <iostream>
#include "NodoB.h"

using namespace std;

class ArbolB {

    private:
        NodoB *raiz;
    
    public:
        ArbolB() {raiz = NULL;}

        void insertar(int pCedula, string pNombre, int pTelefono, string pCorreo);
        void insertarRecursivoIzq(NodoB *r, int pCedula, string pNombre, int pTelefono, string pCorreo);
        void insertarRecursivoDer(NodoB *r, int pCedula, string pNombre, int pTelefono, string pCorreo);
        void insertar(int pAdmin, string pNombre);
        void insertarRecursivoIzq(NodoB *r, int pAdmin, string pNombre);
        void insertarRecursivoDer(NodoB *r, int pAdmin, string pNombre);
        void podar();
        void podarRecursivo(NodoB *raiz);
        bool existeCedula(int pCedula);
        bool existeCedulaRecursivo(int pCedula, NodoB *raiz);
        bool existeAdmin(int pAdmin);
        bool existeAdminRecursivo(int pAdmin, NodoB *raiz);
        void mostrar();
        void mostrarRecursivo(NodoB *raiz);
        void mostrarAdmin();
        void mostrarAdminRecursivo(NodoB *raiz);

};

#endif
