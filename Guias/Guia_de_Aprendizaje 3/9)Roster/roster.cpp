#include <iostream>
using namespace std;

//declarate of variables
float SalarioT,SueldoD,DayT,Sueldo,SalarioNeto,Percent;
main(){

//Reqest data
cout<<"Ingrese el sueldo  ";
cin>>Sueldo;
cout<<"ingrese dias trabajados  ";
cin>>DayT;

//operation
SalarioT=((Sueldo/30)*DayT);
//descuento salud pencion

SalarioNeto = -((SalarioT*0.25)-SalarioT);

//Percent = (SalarioT*0.25);
//SalarioNeto = SalarioT-Percent;

//Prin on screen
cout<<"Su sueldo total es  $" <<SalarioT;
cout<<", su neto a pagar es  $" <<SalarioNeto;

	return 0;
}

