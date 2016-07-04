#include<iostream>

using namespace std;

int main(){
	
	
	float variable1;
	float variable2;
	
	cout<<"Ingrese el valor de la variable1: "; //Mostrar un mensaje
	cin>>variable1; //Leer el valor de la variable1
	
	cout<<"Ingrese el valor de la variable 2: "; //Mostrar un mensaje
	cin>>variable2; //Leer el valor de la variable2
	
	float suma;
	float multiplicacion;
	float resta;
	float division;
	
	suma = variable1 + variable2;
	multiplicacion = variable1 * variable2;
	resta = variable1 - variable2;
	division = variable1/variable2;
	
	cout<<suma<<endl;
	cout<<multiplicacion<<endl;
	cout<<resta<<endl;
	cout<<division<<endl;
	
	
	string variableChar;
	
	cout<<"Ingrese una letra: ";
	cin>>variableChar;
	
	cout<<"El valor de la variable variableChar es: "<<variableChar<<endl;
	
	
	string palabra;
	
	cout<<"Ingrese una palabra: ";
	cin>>palabra;
	
	cout<<"El valor de la variable palabra es: "<<palabra<<endl;

	system("pause");
	return 0;
}

