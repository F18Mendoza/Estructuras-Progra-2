#ifndef NODOAA_H
#define NODOAA_H

#include <iostream>

class NodoAA {

    private:
        std::string nombre;
        int codMarca;
        int cantidadStock;
        int canasta;
        NodoAA *HIzq;
        NodoAA *HDer;

    public:
        NodoAA(std::string pNombre, int pCodMarca, int pCantidad, int pCanasta) {

            nombre = pNombre;
            codMarca = pCodMarca;
            cantidadStock = pCantidad;
            canasta = pCanasta;
            HIzq = NULL;
            HDer = NULL;
        }

    friend class ArbolAA;
};

#endif
