/*
 * Autores: 
 *  Andres felipe valencia
 *  Ricardo Valencia
 *  Jorge Reyes
 * Fecha de creacion: 5-04-2017
 */ 


#include <iostream>
using namespace std;

int funcion (int a, int b, int c)
{	
	if((a>0)&&(b>0))
	{
		return 2*c;
	}
	else
	{
		if(a<0)
		{
			if((b>5)or(b<-5))
			{
				return 3*c;
			}
			if((a<=5)&&(b>5))
			{
				return 5*c;
			}
			else
			{
				return 4*c;
			}
		}
		if((b=0)&&(a>0))
		{
			return 5*c;
		}
		else
		{
			c;
		}
	}
}

int main()
{
	
	int x, y, z;

	cout<<"Ingrese el numero a"<<endl;
	cin>>x;
	cout<<"Ingrese el numero b"<<endl;
	cin>>y;
	cout<<"Ingrese el numero c"<<endl;
	cin>>z;
	
	funcion (x,y,z);
}
			
	
