#include <iostream>

using namespace std;

int main()
{
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"|a)En una instuccion, asignar la suma del valor actual |";
    cout<<"\n|     de X y Y a Z, y postincrementar el valor de X    |"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    int x,y,z;

    cout<<"Ingrese X: ";
    cin>>x;
    cout<<"Ingrese Y: ";
    cin>>y;

    z=x++ +y;

    cout<<"Suma de X y Y a Z"<<endl;
    cout<<"Z = "<<z<<endl;
    cout<<"Postincrementar el valor de X"<<endl;
    cout<<"X = "<<x<<endl;

    cout<<"--------------------------------------------------------"<<endl;
    cout<<"|b)Determinar si el valor de la variable Cuenta es mayor|";
    cout<<"\n|   que 10. De ser asi, imprimir Cuenta es mayor que 10 |"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    int C;

    cout<<"Ingrese valor de Cuenta: ";
    cin>>C;

    if(C>10){
        cout<<"Cuenta es mayor que 10"<<endl;
    }

    cout<<"--------------------------------------------------------"<<endl;
    cout<<"|c)Predecrementar la variable x en 1, luego restarla a |";
    cout<<"\n|                la variable total                     |"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    int total,q;

    cout<<"Valor de X: "<<q<<endl;

    total -= --q;

    cout<<"Total: "<<total<<endl;

    cout<<"--------------------------------------------------------"<<endl;
    cout<<"|d)   Calcular el Residuo despues de dividir q entre    |";
    cout<<"\n|    divisor, y asignar el resultado a q. Escriba esta  |";
    cout<<"\n|           instruccion de dos maneras distintas        |"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    float N1,divisor;

    cout<<"Ingrese Valor: ";
    cin>>N1;
    cout<<"Ingrese Valor: ";
    cin>>divisor;

    N1 /= divisor;
    cout<<"Asignacion 1: "<<N1<<endl;
    N1 = N1/divisor;
    cout<<"Asignacion 2: "<<N1<<endl;
}
