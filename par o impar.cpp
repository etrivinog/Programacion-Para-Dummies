#include<iostream>

using namespace std;

int main(){
	
	/*
	1) Leer un número y decir si es par o impar
	*/
	
	int num;
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	switch(num%2){
		
		case 0:
			cout<<"Es un numero par"<<endl;
			break;
			
		default:
			cout<<"Es un munero impar"<<endl;
			break;		
	}
	
	/*
	if(num%2 == 0){
		cout<<"El numero es un numero par"<<endl;
	}
	else if(num%2 != 0){
		cout<<"El numero es impar"<<endl;
	}
	*/
	
	
	system("pause");
	return 0;
}

