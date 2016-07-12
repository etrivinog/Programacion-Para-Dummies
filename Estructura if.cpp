#include<iostream>

using namespace std;

int main(){
	
	//OPERADORES DE COMPARACIÓN  >  <  >=  <=  ==  !=  QUE SE UTILIZAN CON LAS ESTRUCTURAS DE CONTROL
	
	int edad;
	
	cout<<"Ingrese la edad: ";
	cin>>edad;
	
	//Ejemplo con if...else
	
	if(edad >= 18){
		//Si se cumple la condicion se ejecuta este codigo
		cout<<"Es mayor de edad"<<endl;
		
	}else {
		//Código que se ejecuta si no se cumple la condición
		cout<<"Es menor de edad"<<endl;
	}
	
	//Utilizando solo if
	if(edad == 18){
		cout<<"Es estrictamente mayor de edad"<<endl;
	}
	if(edad > 18){
		cout<<"Tiene mas de un año siendo mayor de edad"<<endl;
	}
	if(edad < 18){
		cout<<"Es menor de edad"<<endl;
	}
	
	//Comparando con if... else if
	if(edad == 18){
		cout<<"Es estrictamente mayor de edad"<<endl;
	}
	else if(edad > 18){
		cout<<"Tiene mas de un año siendo mayor de edad"<<endl;
	}
	else if(edad < 18){
		cout<<"Es menor de edad"<<endl;
	}
	
	//Probando con solo if
	if(edad > 1){
		cout<<"Es mayor a 1"<<endl;
	}
	if(edad > 2){
		cout<<"Es mayor a 2"<<endl;
	}
	if(edad > 4){
		cout<<"Es mayor a 4"<<endl;
	}
	if(edad > 10){
		cout<<"Es mayor a 10"<<endl;
	}
	
	//Utilisando if... else if para ver la diferencia
	if(edad > 1){
		cout<<"Es mayor a 1"<<endl;
	}
	else if(edad > 2){
		cout<<"Es mayor a 2"<<endl;
	}
	else if(edad > 4){
		cout<<"Es mayor a 4"<<endl;
	}
	else if(edad > 10){
		cout<<"Es mayor a 10"<<endl;
	}else{
		cout<<"Es menor o igual a 1"<<endl;
	}
	

	system("pause");
	return 0;
}

