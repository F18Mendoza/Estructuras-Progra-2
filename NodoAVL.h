#ifndef NODOAVL_H
#define NODOAVL_H

#include <iostream>
#include "ArbolRN.h"

class NodoAVL {

    private:
        std::string nombre;
        int codProducto;
        NodoAVL *HIzq;
        NodoAVL *HDer;
        ArbolRN marcas;

    public:
        NodoAVL(std::string pNombre, int pCodProducto) {

            nombre = pNombre;
            codProducto = pCodProducto;
            HIzq = NULL;
            HDer = NULL;
        }

    friend class ArbolAVL;
};

#endif