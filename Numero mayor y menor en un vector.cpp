#include<iostream>

using namespace std;

int main(){
	
	int vector[7] = {84,2,57,9,3,32,7};
	
	int mayor = -9999999;
	int menor = 9999999;
	
	for(int i=0; i<7; i++){
		
		if(vector[i] > mayor){
			mayor = vector[i];
		}
		if(vector[i] < menor){
			menor = vector[i];
		}
		
	}
	
	cout<<"A: "<< mayor <<endl;
	cout<<"B: "<< menor <<endl;
	
	system("pause");
	return 0;
}

