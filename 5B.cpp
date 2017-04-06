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
	return (a/8);
}

int funtion2 (int a)
{
	return (a%8);
}

int main()
{
	int x;
	vector <int> octal;

	cout << "Ingrese el numero escrito en base 10" << endl;
	cin >> x;

	while(x>0)
	{
		octal.push_back(funtion2(x));
		x = funtion(x);	
	}

	cout << "Tu numero escrito en base octal es: " << endl;

	for (int i=(octal.size()-1); i>-1; i--)
	{
		cout << octal[i] << " ";
	}
	cout << endl;
}
