#include "ListaDC.h"
#include <iostream>

using namespace std;


void ListaDC::InsertarInicio(int pcodPasillo, std::string pNombre, int visitadas) // funcion que inserta en la lista de pasillos
{
  
   if (ListaVacia())
   {
     primero = new NodoDC(pcodPasillo, pNombre, visitadas);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   {
     NodoDC *nuevo=new NodoDC (pcodPasillo, pNombre, visitadas);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
   }
}


int ListaDC::largoLista() // funcion que devuelve el largo de una lista 
{
    int cont=0;

    NodoDC *aux = primero->siguiente;
    if(ListaVacia())
    {
        return cont;
    }
    else
    {   cont=cont+1;
        while(aux!=primero)
        {
          aux=aux->siguiente;
          cont++;
        }
    
    return cont;
    }
    
}


void ListaDC::Mostrar() //  funcion que a lo largo de la progra ayudo a encontrar defectos en los metodos de insercion
{						// muestra lo que se le pida por medio de los aux->
   NodoDC *aux=primero;
   while(aux->siguiente!=primero)
     {
                                
      cout << aux->codPasillo << "- ";
      cout << aux -> nombre << "->";
      aux = aux->siguiente;
     }
     cout<<aux->codPasillo<<"-";
     cout << aux -> nombre << "->";
     cout<<endl;

} 
