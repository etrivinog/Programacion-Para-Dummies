#include<iostream>

using namespace std;

int main(){
	
	
	//Un programa en c++ que calculer el factorial de un numero que el usuario ingrese
	
	//Calcular el factorial de un numero
	
	//4! = 4*3*2*1
	
	int x;
	
	for(;;){
		
		cout<<"Ingrese un numero para calcular su factorial: ";
		cin>>x;
		
		
		double factorial = 1;
		//4! = 4*3*2*1 = 1*2*3*4
		for(int i=1; i<=x; i++){
			
			factorial = factorial * i;
			
		}
		
		cout<<factorial<<endl;
		//factorial-> 4; factorial = 4 * 3 = 12; factorial = 12 * 2 = 24; factorial = 24 * 1 = 24
		
		
	}
	

	system("pause");
	return 0;
}

