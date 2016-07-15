#include<iostream>

using namespace std;

int main(){
	
	//int float double long bool
	
	int opcion;
	
	cout<<"Ingrese una opcion (letra): ";
	cin>>opcion;
	
	switch(opcion){
		
		case 1:
			cout<<"Usted ha ingresado 1"<<endl;
			break;
		case 2:
			cout<<"Usted ha ingresado 2"<<endl;
			break;
		case 3:
			cout<<"Usted ha ingresado 3"<<endl;
			break;
		case 4:
			cout<<"Usted ha ingresado 4"<<endl;
		default:
			cout<<"Usted ha ingresado una letra diferente de 1, 2, 3, 4"<<endl;
			break;
		
	}
	
	float opcion;
	
	cout<<"Ingrese una opcion (letra): ";
	cin>>opcion;
	
	switch(opcion){
		
		case 'a':
			cout<<"Usted ha ingresado 'a"<<endl;
			break;
		case 'b':
			cout<<"Usted ha ingresado 'b'"<<endl;
			break;
		case 'h':
			cout<<"Usted ha ingresado 'h'"<<endl;
			break;
		case 'i':
			cout<<"Usted ha ingresado 'i'"<<endl;
		default:
			cout<<"Usted ha ingresado una letra diferente de 'a', 'b', 'h', 'i'"<<endl;
			break;
		
	}
	

system("pause");
return 0;
}

