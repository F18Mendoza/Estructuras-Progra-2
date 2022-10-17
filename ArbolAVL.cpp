#include "ArbolAVL.h"
#include <iostream>

using namespace std;

void ArbolAVL::podar() {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolAVL::podarRecursivo(NodoAVL *raiz) {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolAVL::insertar(string pNombre, int pCodProducto) {

    if (raiz == NULL)
        raiz = new NodoAVL(pNombre, pCodProducto);
    else {

        if (!existeCodigo(pCodProducto)){

            if (pCodProducto < raiz -> codProducto)
                insertarBinario(raiz -> HIzq, pNombre, pCodProducto);
            else
                insertarBinario(raiz -> HDer, pNombre, pCodProducto);
        }
    }
}

void ArbolAVL::insertarBinario(NodoAVL *raiz, string pNombre, int pCodProducto){

    if (raiz == NULL)
        raiz = new NodoAVL(pNombre, pCodProducto);
    else {

        if (pCodProducto < raiz -> codProducto)
            insertarBinario(raiz -> HIzq, pNombre, pCodProducto);
        else
            insertarBinario(raiz -> HDer, pNombre, pCodProducto);
    }
}

bool ArbolAVL::existeCodigo(int pCodProducto) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codProducto == pCodProducto)
            return true;
        else {
            
            if (pCodProducto < raiz -> codProducto)
                existeCodigoRecursivo(pCodProducto, raiz -> HIzq);
            else
                existeCodigoRecursivo(pCodProducto, raiz -> HDer);
        }
    }
}

bool ArbolAVL::existeCodigoRecursivo(int pCodProducto, NodoAVL *raiz) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codProducto == pCodProducto)
            return true;
        else {

            if (pCodProducto < raiz -> codProducto)
                existeCodigoRecursivo(pCodProducto, raiz -> HIzq);
            else
                existeCodigoRecursivo(pCodProducto, raiz -> HDer);
        }
    }
}
