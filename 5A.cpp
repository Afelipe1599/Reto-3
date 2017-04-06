/*
 * Autores: 
 *  Andres felipe valencia
 *  Ricardo Valencia
 *  Jorge Reyes
 * Fecha de creacion: 5-04-2017
 */ 

#include <iostream>
#include <vector>

using namespace std;

int funtion (int a)
{
	return (a/2);
}

int funtion2 (int a)
{
	return (a%2);
}

int main()
{
	int x;
	vector <int> binario;

	cout << "Ingrese el numero escrito en base 10" << endl;
	cin >> x;

	while(x>0)
	{
		binario.push_back(funtion2(x));
		x = funtion(x);	
	}

	cout << "Tu numero escrito en base 2 es: " << endl;

	for (int i=(binario.size()-1); i>-1; i--)
	{
		cout << binario[i] << " ";
	}
	cout << endl;
}

