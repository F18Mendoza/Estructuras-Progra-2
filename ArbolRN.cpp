#include "ArbolRN.h"
#include <iostream>

using namespace std;

void ArbolRN::podar() {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolRN::podarRecursivo(NodoRN *&r) {

    if (r != NULL) {

        podarRecursivo(r -> HIzq);
        podarRecursivo(r -> HDer);
        delete r;
    }
}

void ArbolRN::insertar(string pNombre, int pCodMarca, int pCantidad, float pPrecio) {

    if (raiz == NULL)
        raiz = new NodoRN(pNombre, pCodMarca, pCantidad, pPrecio);
    else {

        if (!existeCodigo(pCodMarca)){

            if (pCodMarca < raiz -> codMarca)
                insertarRecursivo(raiz -> HIzq, pNombre, pCodMarca, pCantidad, pPrecio);
            else
                insertarRecursivo(raiz -> HDer, pNombre, pCodMarca, pCantidad, pPrecio);
        }
    }
}

void ArbolRN::insertarRecursivo(NodoRN *&r, string pNombre, int pCodMarca, int pCantidad, float pPrecio){

    if (r == NULL) {
    	r = new NodoRN(pNombre, pCodMarca, pCantidad, pPrecio);
    } else {
        if (pCodMarca < r -> codMarca){
            insertarRecursivo(r -> HIzq, pNombre, pCodMarca, pCantidad, pPrecio);
        } else {
            insertarRecursivo(r -> HDer, pNombre, pCodMarca, pCantidad, pPrecio);
        }
    }
}

bool ArbolRN::existeCodigo(int pCodMarca) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codMarca == pCodMarca)
            return true;
        else {
            
            if (pCodMarca < raiz -> codMarca)
                return existeCodigoRecursivo(pCodMarca, raiz -> HIzq);
            else
                return existeCodigoRecursivo(pCodMarca, raiz -> HDer);
        }
    }
}

bool ArbolRN::existeCodigoRecursivo(int pCodMarca, NodoRN *&r) {

    if (r == NULL)
        return false;
    else {

        if (r -> codMarca == pCodMarca)
            return true;
        else {

            if (pCodMarca < r -> codMarca)
                return existeCodigoRecursivo(pCodMarca, r -> HIzq);
            else
                return existeCodigoRecursivo(pCodMarca, r -> HDer);
        }
    }
}

void ArbolRN::mostrarMarcas() {
	
	if (raiz != NULL) {
		cout << raiz -> codMarca << " " << raiz -> nombre << " " << raiz -> cantidad << " " << raiz -> precio << endl;
		mostrarRecursivo(raiz -> HIzq);
		mostrarRecursivo(raiz -> HDer);
	}
}

void ArbolRN::mostrarMarcasRecursivo(NodoRN *&r) {
	
	if (r != NULL) {
		cout << r -> codMarca << " " << r -> nombre << " " << r -> cantidad << " " << r -> precio << endl;
		mostrarRecursivo(r -> HIzq);
		mostrarRecursivo(r -> HDer);
	}
}

void ArbolRN::mostrar() {
	
	if (raiz != NULL) {
		cout << raiz -> codMarca << " " << raiz -> nombre << " " << raiz -> cantidad << " " << raiz -> precio << endl;
		mostrarRecursivo(raiz -> HIzq);
		mostrarRecursivo(raiz -> HDer);
	}
}

void ArbolRN::mostrarRecursivo(NodoRN *&r) {
	
	if (r != NULL) {
		cout << r -> codMarca << " " << r -> nombre << " " << r -> cantidad << " " << r -> precio << endl;
		mostrarRecursivo(r -> HIzq);
		mostrarRecursivo(r -> HDer);
	}
}

void ArbolRN::mostrarPrecio(int pCodMarca) {
	
	if (raiz -> codMarca == pCodMarca) {
		cout << "Nombre: " << raiz -> nombre << " Precio: " << raiz -> precio << endl;
	} else {
		if (pCodMarca < raiz -> codMarca) {
			mostrarPrecioRecursivo(pCodMarca, raiz -> HIzq);
		} else {
			mostrarPrecioRecursivo(pCodMarca, raiz -> HDer);
		}
	}
}

void ArbolRN::mostrarPrecioRecursivo(int pCodMarca, NodoRN *&r) {
	
	if (r -> codMarca == pCodMarca) {
		cout << "Nombre: " << raiz -> nombre << " Precio: " << raiz -> precio << endl;
	} else {
		if (pCodMarca < r -> codMarca) {
			mostrarPrecioRecursivo(pCodMarca, r -> HIzq);
		} else {
			mostrarPrecioRecursivo(pCodMarca, r -> HDer);
		}
	}
}



void ArbolRN::modificarMarcaNombre (string pNombre, int pCodMarca){
	
	if (raiz -> codMarca == pCodMarca) {
		raiz -> nombre = pNombre;
	} else {
		if (pCodMarca < raiz -> codMarca) {
			modificarMarcaNombreRecursivo(raiz -> HIzq, pNombre, pCodMarca);
		} else {
			modificarMarcaNombreRecursivo(raiz -> HDer, pNombre, pCodMarca);
		}
	}
}


void ArbolRN::modificarMarcaNombreRecursivo(NodoRN *&r, string pNombre, int pCodMarca){
	
	if (r -> codMarca == pCodMarca) {
		r-> nombre = pNombre;
	} else {
		if (pCodMarca < r -> codMarca) {
			modificarMarcaNombreRecursivo(r -> HIzq, pNombre, pCodMarca);
		} else {
			modificarMarcaNombreRecursivo(r -> HDer, pNombre, pCodMarca);
		}
	}
}
