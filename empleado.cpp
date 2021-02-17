#include "Persona.cpp"
#include <iostream>

using namespace std;

class	 empleado : Persona{
// atributo
private : int codempleado,sueldo;
	string puesto;
// Constructor
public :
	
empleado(){


}

empleado(string nom,string ape,string dir,int tel,int cod,string pst,int sld) : Persona(nom,ape,dir,tel){

codempleado = cod;
puesto = pst;
sueldo = sld;
}
//metodos
//set (modificacion)

 void setNombres(string nom){nombres = nom;}

 void setApellidos(string ape){apellidos = ape;}

 void setDireccion(string dir){direccion = dir;}

 void setTelefono(int tel){telefono = tel;}
 
 void setcodempleado(int cod){codempleado = cod;}
 
 void setpuesto(string pst){puesto = pst;}
 
 void setsueldo(int sld){sueldo =sld;}	



  //get (mostrar)

 string getNombres(){	return nombres;}

 string getApellidos(){	return apellidos;}

 string getDireccion(){	return direccion;}

 int getTelefono(){	return telefono;}
 
 int getcodempleado(){return codempleado;}
 
 int getsueldo(){return sueldo;}
 
 string getpuesto(){return puesto;}

 
 
 // metodo

void mostrar(){

	cout<<"______________________"<<endl;

	cout<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codempleado<<","<<sueldo<<","<<puesto<<endl;

}

};

