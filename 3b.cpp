/*
 * Autores: 
 *  Andres felipe valencia
 *  Ricardo Valencia
 *  Jorge Reyes
 * Fecha de creacion: 5-04-2017
 */ 


#include <iostream>
using namespace std;

char funcion(int a, int b){
	if ((b>0)&&(a>0)){
		return 'c';
	}
	else{
		if(b<0){
			if ((a>5)or(b<-5)){
				return 'd';
			}
			if((a<=5)&&(b>5)){
				return 'f';
			}
			else{
				return 'k';
			}
		}
		if((b=0)&&(a>0)){
			return 'u';
		}
	}
	return 'v';
}
		

int main(){
	int num1,num2;
	
	funcion(num1,num2);
	
	}
