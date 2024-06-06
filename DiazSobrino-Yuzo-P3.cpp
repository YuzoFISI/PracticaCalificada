#include <iostream>
using namespace std;

struct alumno{
	int codigo;
	string nombre;
	int nota1;
	int nota2;
	int nota3;
	float prom;
	string concl;
};

int main(){
	int cant,i,j,d=0;
	cout<<"Ingrese la cantidad de estudiantes: "<<endl;
	cin>>cant;
	while(cant<1){
		cout<<"Ingrese una cantidad entera positiva: "<<endl;
		cin>>cant;
	}
	alumno a[cant];
	for(i=0;i<cant;i++){
		cout<<"\nIngrese el codigo del alumno "<<i+1<<" :"<<endl;
		cin>>a[i].codigo;
		cout<<"Ingrese el nombre del alumno "<<i+1<<" :"<<endl;
		cin>>a[i].nombre;
		cout<<"Ingrese la primera nota del alumno "<<i+1<<" :"<<endl;
		cin>>a[i].nota1;
		cout<<"Ingrese la segunda nota del alumno "<<i+1<<" :"<<endl;
		cin>>a[i].nota2;
		cout<<"Ingrese la tercera nota del alumno "<<i+1<<" :"<<endl;
		cin>>a[i].nota3;
		a[i].prom= (a[i].nota1+a[i].nota2+a[i].nota3)/3;
		if(a[i].prom<10.5){
			a[i].concl="Desaprobado";
			d=d+1;
		}
		else{
			a[i].concl="Aprobado";
		}
	}
	for(i=0;i<cant;++i){
        for(j=0;j<cant-i;++j){
            if (a[j].prom<a[j+1].prom){
                alumno temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Lista de alumnos  "<<endl;
	cout<<"Nro  Codigo    Nombre   Promedio   Estatus "<<endl;
	for(i=0;i<cant;i++){
		cout<<i+1<<"    "<<a[i].codigo<<"     "<<a[i].nombre<<"       "<<a[i].prom<<"     "<<a[i].concl<<endl;
	}
	cout<<"Cantidad de desaprobados: "<<d;
	return 0;
}

