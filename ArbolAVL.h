#ifndef _ARBOLAVL_H
#define	_ARBOLAVL_H

#include "NodoAVL.h"
#include <iostream>
#include <conio.h>

using namespace std;

class ArbolAVL{
	
	private:
	
		NodoAVL *raiz;
	
	public:
		
		ArbolAVL(){
			
			raiz = NULL;
			
		}
		
		void insertar(int pCodProducto, string pNombre);
		void insertarAVL(int pCodProducto, string pNombre,NodoAVL *raiz);
		void podar();
		void podarAVL(NodoAVL*raiz);
	
	
	
};

#endif
