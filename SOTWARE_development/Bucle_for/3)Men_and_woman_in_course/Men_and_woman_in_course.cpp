//Aprendiz: Javier Reyes Neira
#include <iostream>
using namespace std;
int a,n,y;
bool x;
main(){
	for(a=1;a<25;a++){
	
			
		cout<<"si usted es hombre digite 0 si es mujer digite 1  "<<endl;
		cin>>x;
		
		
		if(x==0){
			
			n++;
			cout<<"usted es hombre  "<<"van "<<n<<endl;
			
		
		}else if(x==1){
		
		    y++;	
			cout<<"usted es mujer "<<"van "<<y<<endl;
		}
		}
	cout<<"  "<<endl<<endl;
	cout<<"La cantida de mujeres es "<<y<<endl;
	cout<<"La cantidad de hombres es "<<n<<endl<<endl;
	
	return 0;
}
