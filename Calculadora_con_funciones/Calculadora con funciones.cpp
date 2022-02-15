#include <iostream>
using namespace std;
double Suma(double x, double y){
return x+y;
}
double Resta(double x, double y){
return x-y;
}
double Multiplicacion(double x, double y){
return x*y;
}
double Division(double x, double y){
return x/y;
}

int main(){
int x, y;
cout<<"BIENVENIDO A LA CALCULADORA CON FUNCIONES"<<endl;
cout<<""<<endl;
cout<<"INGRESE EL PRIMER NUMERO"<<endl;
cin>>x;
cout<<"INGRESE EL SEGUNDO NUMERO NUMERO"<<endl;
cin>>y;
cout<<""<<endl;
cout<<"EL RESULTADO SE SU SUMA ES: "<<Suma(x,y)<<endl;
cout<<""<<endl;
cout<<"EL RESULTADO SE SU RESTA ES: "<<Resta(x,y)<<endl;
cout<<""<<endl;
cout<<"EL RESULTADO SE SU MULTIPLICACION ES: "<<Multiplicacion(x,y)<<endl;
cout<<""<<endl;
cout<<"EL RESULTADO SE SU DIVISION ES: "<<Division(x,y)<<endl;
cout<<""<<endl;
cout<<"NOMBRE: MARLON ESTUARDO HERNANDEZ GIRON   "; cout<<"CARNET:9491-21-7312"<<endl;
}
