#include <iostream>
using namespace std;

int main(){
	int matriz1[2][3];
	int matriz2[3][2];
	int i, j;
	cout<<"Datos de la Matriz 1 "<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cout<<"Ingrese el dato "<<j+1<<" en la fila "<<i+1<<endl;
			cin>>matriz1[i][j];
			while(matriz1[i][j]<=0||matriz1[i][j]>=11){
				cout<<"ERROR, el dato debe ser entre 1 a 10 "<<endl;
				cin>>matriz1[i][j];
			}
		}
	}
	cout<<"La matriz 1 es "<<endl;
	for(i=0;i<2;i++){
		j=0;
		cout<<matriz1[i][j]<<" "<<matriz1[i][j+1]<<" "<<matriz1[i][j+2]<<endl;
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(matriz1[i][j]>5){
				matriz1[i][j]=1;
			}
		}
	}
	cout<<"La matriz 1 convertida es "<<endl;
	for(i=0;i<2;i++){
		j=0;
		cout<<matriz1[i][j]<<" "<<matriz1[i][j+1]<<" "<<matriz1[i][j+2]<<endl;
	}
	
	cout<<"Datos de la Matriz 2 "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			cout<<"Ingrese el dato "<<j+1<<" en la fila "<<i+1<<endl;
			cin>>matriz2[i][j];
			while(matriz2[i][j]<=0||matriz2[i][j]>=11){
				cout<<"ERROR, el dato debe ser entre 1 a 10 "<<endl;
				cin>>matriz2[i][j];
			}
		}
	}
	cout<<"La matriz 2 es "<<endl;
	for(i=0;i<3;i++){
		j=0;
		cout<<matriz2[i][j]<<" "<<matriz2[i][j+1]<<endl;
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			if(matriz2[i][j]<6){
				matriz2[i][j]=0;
			}
		}
	}
	cout<<"La matriz 2 convertida es "<<endl;
	for(i=0;i<3;i++){
		j=0;
		cout<<matriz2[i][j]<<" "<<matriz2[i][j+1]<<endl;
	}
	return 0;
}
