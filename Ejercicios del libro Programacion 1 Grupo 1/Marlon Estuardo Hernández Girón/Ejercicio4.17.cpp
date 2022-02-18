#include<iostream>
using namespace std;
int main()
 {
 int numero,contador = 1, mayor=0;
 while (contador <=10)
 {
 cout<<"INTRUDUZCA EL NUMERO DE VENTAS DEL VENDEDOR "<<contador++<<": "<<endl;
 cin>>numero;
 if ( numero > mayor)
 mayor = numero;
 }
 cout<<"EL GANADOR DEL CONCURSO VENDIO : "<<mayor<<" unidades"<<endl<<endl;
 return 0;
 }
