#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char** argv) 
{
	int max, *puntero;
	int arreglo[10];
	puntero=&arreglo[10];
	max=0;
	cout<<"Se imprime el valor mayor de 10 numeros, por medio de apuntadores"<<endl<<endl;
	for(int i=0; i<10; i++)
	{
	cout<<"Ingresa el valor "<<i+1<<": ";
	cin>>arreglo[i];
	}
	puntero++;
	for(int *puntero=&arreglo[0]; puntero<=&arreglo[9]; puntero++ ) 
	{
		if (*puntero>max)
		{
		max=*puntero;
		}
	
	}
	cout<<endl;
	cout<<"El valor mayor es: "<<max;
	

	getch();
	return 0;
}
