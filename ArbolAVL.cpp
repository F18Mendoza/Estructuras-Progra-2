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

void ArbolAVL::podarRecursivo(NodoAVL *r) {

    if (r != NULL) {

        podarRecursivo(r -> HIzq);
        podarRecursivo(r -> HDer);
        delete raiz;
    }
}

void ArbolAVL::insertar(string pNombre, int pCodProducto) {

    if (raiz == NULL)
        raiz = new NodoAVL(pNombre, pCodProducto);
    else {

        if (!existeCodigo(pCodProducto)){

            if (pCodProducto < raiz -> codProducto)
                insertarRecursivoIzq(raiz -> HIzq, pNombre, pCodProducto);
            else
                insertarRecursivoDer(raiz -> HDer, pNombre, pCodProducto);
        }
    }
}

void ArbolAVL::insertarRecursivoIzq(NodoAVL *r, string pNombre, int pCodProducto){

    if (r -> HIzq == NULL) {
    	r -> HIzq = new NodoAVL(pNombre, pCodProducto);
    } else {
        if (pCodProducto < r -> codProducto){
            insertarRecursivoIzq(r -> HIzq, pNombre, pCodProducto);
        } else {
            insertarRecursivoDer(r -> HDer, pNombre, pCodProducto);
        }
    }
}

void ArbolAVL::insertarRecursivoDer(NodoAVL *r, string pNombre, int pCodProducto){

    if (r -> HDer == NULL) {
    	r -> HDer = new NodoAVL(pNombre, pCodProducto);
        
    } else {

        if (pCodProducto < r -> codProducto){
            insertarRecursivoIzq(r -> HIzq, pNombre, pCodProducto);
        } else {
            insertarRecursivoDer(r -> HDer, pNombre, pCodProducto);
        }
    }
}

void ArbolAVL::insertarMarca(string pNombre, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio) {
	
	if (raiz -> codProducto == pCodProducto) {
		raiz -> marcas.insertar(pNombre, pCodMarca, pCantidad, pPrecio);
	} else {
		
		if (pCodProducto < raiz -> codProducto) {
			insertarMarcaRecursivo(raiz -> HIzq, pNombre, pCodProducto, pCodMarca, pCantidad, pPrecio);
		} else {
			insertarMarcaRecursivo(raiz -> HDer, pNombre, pCodProducto, pCodMarca, pCantidad, pPrecio);
		}
	}
}

void ArbolAVL::insertarMarcaRecursivo(NodoAVL *r, string pNombre, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio) {
	
	if (r -> codProducto == pCodProducto) {
		r -> marcas.insertar(pNombre, pCodMarca, pCantidad, pPrecio);
	} else {
		
		if (pCodProducto < r -> codProducto) {
			insertarMarcaRecursivo(r -> HIzq, pNombre, pCodProducto, pCodMarca, pCantidad, pPrecio);
		} else {
			insertarMarcaRecursivo(r -> HDer, pNombre, pCodProducto, pCodMarca, pCantidad, pPrecio);
		}
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

bool ArbolAVL::existeCodigoRecursivo(int pCodProducto, NodoAVL *r) {

    if (r == NULL)
        return false;
    else {

        if (r -> codProducto == pCodProducto)
            return true;
        else {

            if (pCodProducto < r -> codProducto)
                existeCodigoRecursivo(pCodProducto, r -> HIzq);
            else
                existeCodigoRecursivo(pCodProducto, r -> HDer);
        }
    }
}

void ArbolAVL::mostrarProductos() {
	
	if (raiz != NULL) {
		mostrarProductosRecursivo(raiz -> HIzq);
		cout << raiz -> codProducto << " " << raiz -> nombre << endl;
		mostrarProductosRecursivo(raiz -> HDer);
	}
}

void ArbolAVL::mostrarProductosRecursivo(NodoAVL *r) {
	
	if (r != NULL) {
		mostrarProductosRecursivo(r -> HIzq);
		cout << r -> codProducto << " " << r -> nombre << endl;
		mostrarProductosRecursivo(r -> HDer);
	}
}

void ArbolAVL::mostrarMarcas(int pCodProducto) {
	
	if (raiz -> codProducto == pCodProducto) {
		raiz -> marcas.mostrar();
	} else {
		if (pCodProducto < raiz -> codProducto) {
			mostrarMarcasRecursivo(raiz -> HIzq, pCodProducto);
		} else {
			mostrarMarcasRecursivo(raiz -> HDer, pCodProducto);
		}
	}
}

void ArbolAVL::mostrarMarcasRecursivo(NodoAVL *r, int pCodProducto) {
	
	if (r -> codProducto == pCodProducto) {
		r -> marcas.mostrar();
	} else {
		if (pCodProducto < r -> codProducto) {
			mostrarMarcasRecursivo(r -> HIzq, pCodProducto);
		} else {
			mostrarMarcasRecursivo(r -> HDer, pCodProducto);
		}
	}
}
