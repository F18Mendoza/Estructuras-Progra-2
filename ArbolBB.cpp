#include "ArbolBB.h"
#include <iostream>

using namespace std;

void ArbolBB::podar() {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolBB::podarRecursivo(NodoBB *r) {

    if (r != NULL) {

        podarRecursivo(r -> HIzq);
        podarRecursivo(r -> HDer);
        delete raiz;
    }
}

void ArbolBB::insertar(string pNombre, int pCodPasillo) {

    if (raiz == NULL)
        raiz = new NodoBB(pNombre, pCodPasillo);
    else {

        if (!existeCodigo(pCodPasillo)){

            if (pCodPasillo < raiz -> codPasillo)
                insertarRecursivoIzq(raiz -> HIzq, pNombre, pCodPasillo);
            else
                insertarRecursivoDer(raiz -> HDer, pNombre, pCodPasillo);
        }
    }
}


void ArbolBB::insertarRecursivoIzq(NodoBB *r, string pNombre, int pCodPasillo){

    if (r -> HIzq == NULL) {
    	r -> HIzq = new NodoBB(pNombre, pCodPasillo);
    } else {
        if (pCodPasillo < r -> codPasillo){
            insertarRecursivoIzq(r -> HIzq, pNombre, pCodPasillo);
        } else {
            insertarRecursivoDer(r -> HDer, pNombre, pCodPasillo);
        }
    }
}

void ArbolBB::insertarRecursivoDer(NodoBB *r, string pNombre, int pCodPasillo){

    if (r -> HDer == NULL) {
    	r -> HDer = new NodoBB(pNombre, pCodPasillo);
        
    } else {

        if (pCodPasillo < r -> codPasillo){
            insertarRecursivoIzq(r -> HIzq, pNombre, pCodPasillo);
        } else {
            insertarRecursivoDer(r -> HDer, pNombre, pCodPasillo);
        }
    }
}

bool ArbolBB::existeCodigo(int pCodPasillo) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codPasillo == pCodPasillo)
            return true;
        else {
            
            if (pCodPasillo < raiz -> codPasillo)
                existeCodigoRecursivo(pCodPasillo, raiz -> HIzq);
            else
                existeCodigoRecursivo(pCodPasillo, raiz -> HDer);
        }
    }
}

bool ArbolBB::existeCodigoRecursivo(int pCodPasillo, NodoBB *r) {

    if (r == NULL)
        return false;
    else {

        if (r -> codPasillo == pCodPasillo)
            return true;
        else {

            if (pCodPasillo < r -> codPasillo)
                existeCodigoRecursivo(pCodPasillo, r -> HIzq);
            else
                existeCodigoRecursivo(pCodPasillo, r -> HDer);
        }
    }
}

void ArbolBB::insertarProducto(string pNombre, int pCodPasillo, int pCodProducto) {

     if (raiz -> codPasillo == pCodPasillo) {
        raiz -> productos.insertar(pNombre, pCodProducto);
     } else {
        if (pCodPasillo < raiz -> codPasillo)
            insertarProductoRecursivo(raiz -> HIzq, pNombre, pCodPasillo, pCodProducto);
        else
            insertarProductoRecursivo(raiz -> HDer, pNombre, pCodPasillo, pCodProducto);
     }
}

void ArbolBB::insertarProductoRecursivo(NodoBB *r, string pNombre, int pCodPasillo, int pCodProducto) {

    if (r -> codPasillo == pCodPasillo) {
        r -> productos.insertar(pNombre, pCodProducto);
    } else {
        if (pCodPasillo < r -> codPasillo)
            insertarProductoRecursivo(r -> HIzq, pNombre, pCodPasillo, pCodProducto);
        else
            insertarProductoRecursivo(r -> HDer, pNombre, pCodPasillo, pCodProducto);
    }
}

void ArbolBB::insertarMarca(string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio) {
	
	if (raiz -> codPasillo == pCodPasillo) {
		raiz -> productos.insertarMarca(pNombre, pCodProducto, pCodMarca, pCantidad, pPrecio);
	} else {
		if (pCodPasillo < raiz -> codPasillo) {
			insertarMarcaRecursivo(raiz -> HIzq, pNombre, pCodPasillo, pCodProducto, pCodMarca, pCantidad, pPrecio);
		} else {
			insertarMarcaRecursivo(raiz -> HDer, pNombre, pCodPasillo, pCodProducto, pCodMarca, pCantidad, pPrecio);
		}
	}
}

void ArbolBB::insertarMarcaRecursivo(NodoBB *r, string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio) {
	
	if (r -> codPasillo == pCodPasillo) {
		r -> productos.insertarMarca(pNombre, pCodProducto, pCodMarca, pCantidad, pPrecio);
	} else {
		if (pCodPasillo < r -> codPasillo) {
			insertarMarcaRecursivo(r -> HIzq, pNombre, pCodPasillo, pCodProducto, pCodMarca, pCantidad, pPrecio);
		} else {
			insertarMarcaRecursivo(r -> HDer, pNombre, pCodPasillo, pCodProducto, pCodMarca, pCantidad, pPrecio);
		}
	}
}

void ArbolBB::mostrarPasillos() {
	
	if (raiz != NULL) {
		
		mostrarPasillosRecursivo(raiz -> HIzq);
		cout << raiz -> codPasillo << " " << raiz -> nombre << endl;
		mostrarPasillosRecursivo(raiz -> HDer);
	}
}

void ArbolBB::mostrarPasillosRecursivo(NodoBB *r) {
	
	if (r != NULL) {
		
		mostrarPasillosRecursivo(r -> HIzq);
		cout << r -> codPasillo << " " << r -> nombre << endl;
		mostrarPasillosRecursivo(r -> HDer);
	}
}

void ArbolBB::mostrarProductos(int pCodPasillo) {
	
	if (raiz -> codPasillo == pCodPasillo) {
		raiz -> productos.mostrarProductos();
	} else {
		if (pCodPasillo < raiz -> codPasillo) {
			mostrarProductosRecursivo(raiz -> HIzq, pCodPasillo);
		} else {
			mostrarProductosRecursivo(raiz -> HDer, pCodPasillo);
		}
	}
}

void ArbolBB::mostrarProductosRecursivo(NodoBB *r, int pCodPasillo) {
	
	if (r -> codPasillo == pCodPasillo) {
		r -> productos.mostrarProductos();
	} else {
		if (pCodPasillo < r -> codPasillo) {
			mostrarProductosRecursivo(r -> HIzq, pCodPasillo);
		} else {
			mostrarProductosRecursivo(r -> HDer, pCodPasillo);
		}
	}
}

void ArbolBB::mostrarMarcas(int pCodPasillo, int pCodProducto) {
	
	if (raiz -> codPasillo == pCodPasillo) {
		raiz -> productos.mostrarMarcas(pCodProducto);
	} else {
		if (pCodPasillo < raiz -> codPasillo) {
			mostrarMarcasRecursivo(raiz -> HIzq, pCodPasillo, pCodProducto);
		} else {
			mostrarMarcasRecursivo(raiz -> HDer, pCodPasillo, pCodProducto);
		}
	}
}

void ArbolBB::mostrarMarcasRecursivo(NodoBB *r, int pCodPasillo, int pCodProducto) {
	
	if (r -> codPasillo == pCodPasillo) {
		r -> productos.mostrarMarcas(pCodProducto);
	} else {
		if (pCodPasillo < r -> codPasillo) {
			mostrarMarcasRecursivo(r -> HIzq, pCodPasillo, pCodProducto);
		} else {
			mostrarMarcasRecursivo(r -> HDer, pCodPasillo, pCodProducto);
		}
	}
}
