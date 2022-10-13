#include "ArbolAVL.h"

void ArbolAVL::podar(){ // destructores
	
	if(raiz != NULL){
		podarAVL(raiz->der);
		podarAVL(raiz->izq);
		delete raiz;
	}	
}

void ArbolAVL::podarAVL(NodoAVL *raiz){ // destructores
	
	if (raiz != NULL){
		podarAVL(raiz->der);
		podarAVL(raiz->izq);
		delete raiz;
	}
}

void ArbolAVL::insertar(int pCodProducto, string pNombre){
	
	if (raiz == NULL){
		
		raiz = new NodoAVL(pCodProducto, pNombre);
	}
	else{
	
		if (raiz->codProducto > pCodProducto){
			
			insertarAVL (pCodProducto, pNombre, raiz->izq);
		}
		else{
			insertarAVL (pCodProducto, pNombre, raiz->der);
		}
	}
	
	
}

void ArbolAVL::insertarAVL(int pCodProducto, string pNombre, NodoAVL *raiz){
	
	if (raiz == NULL){
		
		raiz = new NodoAVL(pCodProducto, pNombre);
	}
	else{
	
		if (raiz->codProducto > pCodProducto){
			
			insertarAVL (pCodProducto, pNombre, raiz->izq);
		}
		else{
			insertarAVL (pCodProducto, pNombre, raiz->der);
		}
	}
}
