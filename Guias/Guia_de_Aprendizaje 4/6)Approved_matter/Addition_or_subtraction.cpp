#include <iostream>

using namespace std;
float code,note;
string name, matter;
main(){
	
//reqest data	
cout<<"ingrese codigo de estudiante ";
cin>>code;
cout<<"ingrese nombre de estudiante ";
cin>>name;
cout<<"ingrese la materia ";
cin>>matter;
cout<<"ingrese nota del estudiante ";
cin>>note;

//condition
if(note>=4.0){
cout<<"El estudiante codigo "<<code<<" de nombre "<<name<<" aprobo la materia, con un valor de "<<note;
}else{
cout<<"El estudiante codigo " <<code<<" de nombre "<<name<<" no aprobo la materia, ya que su nota fue "<<note;
}


return 0;	
}

