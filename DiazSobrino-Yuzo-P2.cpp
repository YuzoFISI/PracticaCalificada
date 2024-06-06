#include <iostream>
using namespace std;

struct contr{
	string name[10000];
	char tipo='C';
	int sueldo[10000];
	float neto[10000];
};

struct nombr{
	string name[10000];
	char tipo='N';
	int sueldo[10000];
	float neto[10000];
};

int main(){
	int confir,k=1, p=1, i,numc=0,numn=0;
	string nombre;
	float totalc=0, totaln=0;
	char tip;
	contr c;
	nombr n;
	while(k==1){
		cout<<"Ingrese el nombre del trabajador "<<p<<endl;
		cin>>nombre;
		cout<<"Ingrese su tipo(C/N) "<<endl;
		cin>>tip;
		tip=toupper(tip);
		while(tip!='C'&& tip!='N'){
			cout<<"ERROR,Ingrese su tipo(C/N) "<<endl;
			cin>>tip;
			tip=toupper(tip);
		}
		switch(tip){
			case 'C':
				c.name[numc]=nombre;
				cout<<"Ingrese su sueldo: "<<endl;
				cin>>c.sueldo[numc];
				c.neto[numc]= c.sueldo[numc]-(c.sueldo[numc]*0.08)-(c.sueldo[numc]*0.05)+(c.sueldo[numc]*0.08);
				totalc=c.neto[numc]+totalc;
				numc=numc+1;
				break;
			case 'N':
				n.name[numn]=nombre;
				cout<<"Ingrese su sueldo: "<<endl;
				cin>>n.sueldo[numn];
				n.neto[numn]= n.sueldo[numn]-(n.sueldo[numn]*0.08)-(n.sueldo[numn]*0.05)+(n.sueldo[numn]*0.12);
				totaln=n.neto[numn]+totaln;
				numn=numn+1;
				break;	
		}
		cout<<"Desea agregar otro trabajador(Si:1  No:0)"<<endl;
		cin>>k;
		while(k<0||k>1){
			cout<<"ERROR, ingrese de nuevo(Si:1  No:0)"<<endl;
			cin>>k;
		}
		p=p+1;
	}
	cout<<"Empleados Contratados "<<endl;
	cout<<"Nro   Nombre   Sueldo Neto "<<endl;
	for(i=0;i<numc;i++){
		cout<<i+1<<"     "<<c.name[i]<<"    "<<c.neto[i]<<endl;
	}
	cout<<"\nEmpleados Contratados en total: "<<numc<<endl;
	cout<<"Sueldo Neto en total: "<<totalc<<endl;
	
	cout<<"\nEmpleados Nombrados "<<endl;
	cout<<"Nro   Nombre   Sueldo Neto "<<endl;
	for(i=0;i<numn;i++){
		cout<<i+1<<"     "<<n.name[i]<<"    "<<n.neto[i]<<endl;
	}
	cout<<"Empleados Nombrados en total: "<<numn<<endl;
	cout<<"Sueldo Neto en total: "<<totaln<<endl;
	return 0;
}

