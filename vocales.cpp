#include<iostream>

using namespace std;

int main(){
	
	/*
	7) Leer un número del 1 al 5 y decir la vocal que representa por ejemplo
		si ingresa 1 mostrar que representa la 'a', el 2 representa la 'b' y así sucesivamente
	*/
	
	int opcion;
	
	cout<<"Ingrese un numero del 1 al 5: "<<endl;
	
	cin>>opcion;
	
	switch(opcion){
		
		case 1:
			cout<<"a"<<endl;
			break;
		case 2:
			cout<<"e"<<endl;
			break;
		case 3:
			cout<<"i"<<endl;
			break;
		case 4:
			cout<<"o"<<endl;
			break;
		case 5:
			cout<<"u"<<endl;
			break;
		default:
			cout<<"El numero ingresado no tiene asignada una vocal"<<endl;
			break;
		
	}
	
	/*
	if(opcion == 1){
		cout<<"a"<<endl;
	}else if(opcion == 2){
		cout<<"e"<<endl;
	}else if(opcion == 3){
		cout<<"i"<<endl;
	}else if(opcion == 4){
		cout<<"o"<<endl;
	}else if(opcion == 5){
		cout<<"u"<<endl;
	}else {
		cout<<"El numero ingresado no tiene asignada una vocal"<<endl;
	}
	*/

	system("pause");
	return 0;
}

