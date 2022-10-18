#include <iostream>
#include "ArbolAVL.h"
#include "ArbolB.h"
#include <iostream>
#include <conio.h>

using namespace std;


void menuClientesRegistrado(){
	
	char clientes;
	
	cout << " _____________________________________________________________" << endl;
	cout << "|                   MENU CLIENTES REGISTRADOS                 |" << endl;
	cout << "|-------------------------------------------------------------|" << endl;
	cout << "| 1. Consultar Precio                                         |" << endl;
	cout << "| 2. Consultar Descuento                                      |" << endl;
	cout << "| 3. Consultar Productos                                      |" << endl;
	cout << "| 4. Comprar                                                  |" << endl;
	cout << "| 5. Salir                                                    |" << endl;                                                     
	cout << "|_____________________________________________________________|" << endl;
	
	cin >> clientes;
	
	switch (clientes){
		
		case '1':
			cout << "Se revisa el precio" << endl;
			break;
			
		case '2':
			cout << "Se revisa el descuento" << endl;
			break;
			
		case '3':
			cout << "Se revisa el producto" << endl;
			break;
			
		case '4':
			cout << "Se compra" << endl;
			break;
			
		case '5': 
			cout << "Adios. Vuelva pronto" << endl;
			break;
		default:
			cout << "Opcion invalida" << endl;
	}
	
	
}

void menuClientesNoRegistrado(){
	
	char clientes;
	
	cout << " _____________________________________________________________" << endl;
	cout << "|                MENU CLIENTES NO REGISTRADOS                 |" << endl;
	cout << "|-------------------------------------------------------------|" << endl;
	cout << "| 1. Consultar Precio                                         |" << endl;
	cout << "| 2. Consultar Descuento (Deshabilitado)                      |" << endl;
	cout << "| 3. Consultar Productos                                      |" << endl;
	cout << "| 4. Comprar (Deshabilitado)                                  |" << endl;
	cout << "| 5. Salir                                                    |" << endl;                                                     
	cout << "|_____________________________________________________________|" << endl;
	
	cin >> clientes;
	
	switch (clientes){
		
		case '1':
			cout << "Se revisa el precio" << endl;
			break;
			
		case '2':
			cout << "Usted debe registrarse para poder hacer uso de esta opcion" << endl;
			break;
			
		case '3':
			cout << "Se revisa el producto" << endl;
			break;
			
		case '4':
			cout << "Usted debe registrarse para poder hacer uso de esta opcion" << endl;
			break;
			
		case '5': 
			cout << "Adios. Vuelva pronto" << endl;
			break;
			
		default:
			cout << "Opcion invalida" << endl;
	}
	
	
}

void baseDeDatos(){
	
	char datos;
	
	cout << " _____________________________________________________________" << endl;
	cout << "|                   MENU BASE DE DATOS                        |" << endl;
	cout << "|-------------------------------------------------------------|" << endl;
	cout << "| 1. Insertar Producto nuevo                                  |" << endl;
	cout << "| 2. Modificar un producto de una marca, el precio o el nombre|" << endl;
	cout << "| 3. Consultar Precio                                         |" << endl;
	cout << "| 4. Consultar Descuento                                      |" << endl;
	cout << "| 5. Modificar el Descuento                                   |" << endl; 
	cout << "| 6. Registrar clientes                                       |" << endl;   
	cout << "| 7. Salir                                                    |" << endl;                    
	cout << "|_____________________________________________________________|" << endl;
	
	cin >> datos;
	
	switch (datos){
		
		case '1':
			cout << "Insetar el producto nuevo" << endl;
			break;
			
		case '2':
			cout << "Modificar cosas" << endl;
			break;
			
		case '3':
			cout << "Consultar el precio" << endl;
			
		case '4':
			cout << "Consultar el descuento" << endl;
			break;
			
		case '5':
			cout << "Modificar los descuentos" << endl;
			break;
		
		case '6':
			cout << "Registrar cliente" << endl;
			break;
		case '7':
			cout << "Adios. Vuelva pronto" << endl;
			break;
			
		default:
			cout << "Opcion invalida" << endl;
		
	}
		
}

void menuAdministrador(){
	
	char opcion;
	
	cout << " _____________________________________________________________" << endl;
	cout << "|                   MENU ADMINISTRADOR                        |" << endl;
	cout << "|-------------------------------------------------------------|" << endl;
	cout << "| 1. Mantenimiento de la Base de Datos                        |" << endl;
	cout << "| 2. Facturar                                                 |" << endl;
	cout << "| 3. Revisar gondolas                                         |" << endl;
	cout << "| 4. Verificar inventario                                     |" << endl;
	cout << "| 5. Reportes                                                 |" << endl; 
	cout << "| 6. Salir                                                    |" << endl;                     
	cout << "|_____________________________________________________________|" << endl;
	cin >> opcion;
	
	switch (opcion){
		
		case '1':
			cout << "Mantenimiento Bases"<< endl;
			baseDeDatos();
			break;
		case '2':
			cout << "Menu de Factura" << endl;
			break;
		case '3':
			cout << "Revisar Gondolas" << endl;	
			break;	
		case '4':
			cout << "Verificar Inventarios" << endl;
			break;
		case '5':
			cout << "Reportes" << endl;
			break;
		case '6':
			cout << "Adios. Vuelva pronto" << endl;	
			break;
		default:
			cout << "Opcion invalida" << endl;		
	}
	
	
}


int main() {
	
	
	ArbolB clientes;
	
	clientes.insertar(3001, "amanda", 1811, "fm@gmail.com");
	clientes.insertar(3002, "Elliot", 1311, "em@gmail.com");
	clientes.insertar(3005, "Repetido", 1415, "rep@gmail.com");
	clientes.insertar(3007, "Elli", 1311, "eli@gmail.com");
	//clientes.PreordenR(clientes.raiz);
	clientes.mostrar();
	/*char ingreso;
		
	while(ingreso != '3'){
		
		cout << " _________________________________" << endl;
		cout << "|           MENU INGRESO          |" << endl;
		cout << "|_________________________________|" << endl;
		cout << "| Desea ingresar como:            |" << endl;
		cout << "| 1. Cliente                      |" << endl;
		cout << "| 2. Administrador                |" <<endl;
		cout << "| 3. Salir                        |" << endl;
		cout << "|_________________________________|" << endl;
		
		cin >> ingreso;	
		
		switch (ingreso){
			
			case '1':
				cout << "-------MENU DE CLIENTE-----------\n" << endl;
				menuClientesNoRegistrado();
				break;
			case '2':
				cout << "-------MENU DE ADMINISTRADOR-------\n" << endl;	
				menuAdministrador();
				break;
			case '3':
				cout << "Adios. Vuelva pronto" << endl;
				break;			
			default:
				cout << "-------Opcion Invalida-----------\n" << endl;
		}	
	}*/
	
	cout << "Hola" <<endl;
	
	return 0;
}
