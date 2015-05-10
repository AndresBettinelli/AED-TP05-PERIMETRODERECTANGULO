/*Tp#5 Perimetro de Rectangulo
Andres Bettinelli - K1091
Ultima modificacion 09/05/2015*/

#include <iostream>
using namespace std;

double GetNumeroPositivo(), GetPerimetro(double, double), lado;

double GetNumeroPositivo (){
	do{	cin>>lado;
		if(lado > 0) return lado;
		else cout<<"\tIngrese un numero mayor a 0\n";} while (lado <= 0);}

double GetPerimetro(double a, double b) {return 2*((a) + (b));}

int main (){
	double h, b;
	cout<<"Ingrese la altura y luego la base:"<<endl;
	h = GetNumeroPositivo();
	b = GetNumeroPositivo();
	cout<<"El perimetro es "<< GetPerimetro(h,b)<<"."<<endl;}
