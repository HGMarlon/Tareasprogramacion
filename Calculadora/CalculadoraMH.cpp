#include <iostream>
using namespace std;
int main()
{
    int numero,d1,d2,suma,resta,multiplicacion,division;
    cout<<"Bienvenido a la calculadora"<<endl;
    cout<<"Ingrese su primer numero"<<endl;
    cin>>d1;
    cout<<"Ingrese su segundo numero"<<endl;
    cin>>d2;
    cout<<""<<endl;
    cout<<"Estas son las opciones:"<<endl;
    cout<<"1.Suma"<<endl;
    cout<<"2.Resta"<<endl;
    cout<<"3.Multiplicacion"<<endl;
    cout<<"4.Division"<<endl;
    cin>>numero;
    cout<<""<<endl;
    switch(numero){
        case 1: cout<<"Bienvenido a la suma"<<endl;
        suma=d1+d2;
        cout<<"El resultado es: "<<suma<<endl;
        break;

        case 2: cout<<"Bienvenido a la resta"<<endl;
        resta=d1-d2;
        cout<<"El resultado es: "<<resta<<endl;
        break;

        case 3: cout<<"Bienvenido a la multiplicacion"<<endl;
        multiplicacion=d1*d2;
        cout<<"El resultado es: "<<multiplicacion<<endl;
        break;

        case 4: cout<<"Bienvenido a la division"<<endl;
        division=d1/d2;
        cout<<"El resultado es: "<<division<<endl;
        break;



    }

}
