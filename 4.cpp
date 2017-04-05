/*
 * Autores: 
 *  Andres felipe valencia
 *  Ricardo Valencia
 *  Jorge Reyes
 * Fecha de creacion: 5-04-2017
 */ 


#include <iostream>
#include <map>
using namespace std;

void agregarEmpleado(int Entero, map<int,double>&Empleados){
		for(map<int,double>::iterator iti = Empleados.begin(); iti!=Empleados.end(); iti++){
			if(Entero==(iti->first)){
				cout<<"Ya existe el empleado"<<endl;
			}
		}
		Empleados[Entero]=0;
			
}

void vender(string codigo,int cedula, int totalventa,map<string,double>&venta,map<int,double>&Empleados){
	for(map<int,double>::iterator i = Empleados.begin(); i!=Empleados.end(); i++){
		if(cedula==(i->first)){
			for(map<string,double>::iterator i = venta.begin(); i!=venta.end(); i++){
				if(codigo==(i->first)){
					venta[i->first]=(i->second + totalventa);
				}
				else{
					venta[codigo]=totalventa;
				}
			}
		}
	}
}

int main(){
	int cedula,totalvent;
	string cod;
	
	
	map<int,double> empleado;
	map<string,double> venta;
	
	empleado[65897189] = 20000;
	empleado[65865465] = 35000;
	empleado[64684622] = 100000;
	cout<<"Ingrese la cedula del empleado"<<endl;
	cin>>cedula;
	agregarEmpleado(cedula,empleado);
	cout<<"Ingrese el codigo del producto"<<endl;
	cin>>cod;
	cout<<"Ingrese el total de la venta"<<endl;
	cin>>totalvent;
	vender(cod,cedula,totalvent,venta,empleado); 
}
	


