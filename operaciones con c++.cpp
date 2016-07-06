#include<iostream>

using namespace std;

int main(){
	
	//Longitud de una circunferencia 2*pi*radio
	//Calcular el perimetro de un cuadrilatero l1+l2+l3+l4
	//Convertir de metros a centimetros
	//Calcular el área de un triángulo base*altura/2
	
	float radio;//Es la variable que el usuario ingresa
	float pi = 3.1416; //Una constante matematica
	float longitud; //Lo que vamos a calcular
	
	cout<<"Ingrese el radio del circulo (cms): ";
	cin>>radio;
	
	longitud = 2*pi*radio;
	
	cout<<"La longitud de la circunferencia es: "<<longitud<<endl;
	
	float lado1, lado2, lado3, lado4;
	float perimetro;
	
	cout<<"Ingrese el valor del primer lado del cuadrilatero: ";
	cin>>lado1;
	
	cout<<"Ingrese el valor del segundo lado del cuadrilatero: ";
	cin>>lado2;
	
	cout<<"Ingrese el valor del tercer lado del cuadrilatero: ";
	cin>>lado3;
	
	cout<<"Ingrese el valor del cuarto lado del cuadrilatero: ";
	cin>>lado4;
	
	perimetro = lado1+lado2+lado3+lado4;
	
	cout<<"El perimetro del cuadrilatero es: "<<perimetro<<endl;
	
	float valorEnMetros; //Variable que vamos a leer
	float valorEnCentimetros; //Variable a la que le vamos a dar el valor
	
	
	/*
	
	1m --> 100 cms
	
	1m *100 = 100 cms
	10 * 100 = 1000 cms
	
	41m * 100 = 4100 cms
	
	valorEnMetros * 100
	
	*/
	
	cout<<"Ingrese el valor en metros: ";
	cin>>valorEnMetros;
	
	valorEnCentimetros = valorEnMetros*100;
	
	cout<<"El equivalente en centimetros de "<<valorEnMetros<<" m"<<" es: "<<valorEnCentimetros<<" cms"<<endl;
	
	float base, altura; //Variables a leer
	
	float area;
	
	cout<<"Ingrese la base del triangulo: ";
	cin>>base;
	
	cout<<"Ingrese la altura del triangulo: ";
	cin>>altura;
	
	area = base*altura/2;
	
	cout<<"El area el triangulo es : "<<area<<endl;
	
	system("pause");
	return 0;
}

