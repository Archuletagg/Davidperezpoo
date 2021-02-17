#include "empleado.cpp"

#include <iostream>

using namespace std;

main(){

	string nit,nombres,apellidos,direccion,puesto;

	int telefono,codempleado,sueldo;

	
	cout<<"Ingrese Nombres: ";

	cin>>nombres;

	cout<<"Ingrese Apellidos: ";

	cin>>apellidos;

	cout<<"Ingrese Direccion: ";

	cin>>direccion;

	cout<<"Ingrese Telefono: ";

	cin>>telefono;
	
	cout<<"Ingrese Codempleado: ";

	cin>>codempleado;
	
	cout<<"Ingrese puesto: ";

	cin>>puesto;

	cout<<"Ingrese sueldo: ";

	cin>>sueldo;

	empleado obj = empleado(nombres,apellidos,direccion,telefono,codempleado,puesto,sueldo);

	obj.mostrar();

}
