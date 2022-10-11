#ifndef _NODOAVL_H
#define	_NODOAVL_H
#include <iostream>
#include <conio.h>


using namespace std;

class NodoAVL{
	
	int altura;
	int codProducto;
	string nombre;
	NodoAVL *der;
	NodoAVL *izq;
	//ArbolRN marcas;
	
	NodoAVL(int pCodProducto, string pNombre){
		
		altura = 1;
		codProducto = pCodProducto;
		nombre = pNombre;
		der = NULL;
		izq = NULL;
		
	}
	
	
	friend class ArbolAVL;
	
	
	
	
};

#endif
