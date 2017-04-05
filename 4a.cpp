#include <iostream>
#include <map>
using namespace std;

bool validador=0;

void agregarProducto(string codt, int cant, map<string,double>&inventariot){
	
	for (map<string,double>::iterator iti=inventariot.begin(); iti!=inventariot.end(); iti++){ 
		if (codt==(iti->first)) {
			inventariot[iti->first]=(iti->second + cant); 
			validador=1;						
			} 
		
		if (validador==0){
			inventariot[codt]=cant;
			}
	}
}

int main () {
	
	string codigox;
	int cantidadx;
	
	map<string,double>producto;
	map<string,double>venta;
	
	producto["tom"]=5;
	producto["arr"]=2;
	
	cout << "Ingrese el codigo del producto: "; cin >> codigox;
	cout << "Ingrese la cantidad del producto: "; cin >> cantidadx;
	
	agregarProducto(codigox, cantidadx, producto);
	
	
	
	
	
	}
