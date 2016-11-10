#include<iostream>

using namespace std;

int main(){
	
	system("color F0");
	
	int TAM = 10;
	int vector[TAM] = {8,7,3,1,5,10,6,39,5,2};
	
	cout<<endl;
	for(int i=0; i<TAM; i++){
		cout<<vector[i]<<" ";
	}
	cout<<endl;
	
	//ordenar vector
	int aux;
	for (int i=1; i<TAM; i++){
        for (int j=0 ; j<TAM - 1; j++){
            if (vector[j] > vector[j+1]){
                    aux = vector[j];
                    vector[j] = vector[j+1];
                    vector[j+1] = aux;
			}
			
		}
	}
	 
	//Mostrar vector
	
	cout<<"\nvector ordenado:"<<endl;
	
	for(int i=0; i<TAM; i++){
		cout<<vector[i]<<" ";
	}
	
	cout<<endl;
	system("pause");
	return 0;
}

