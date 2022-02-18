#include <iostream>

using namespace std;

int main()
{
    int A,suma=0,con=0;
    while(con<3){
        cout<<"Angulo: ";
        cin>>A;
        suma+=A;

        con++;
    }
    if(suma==180){
        cout<<"La suma de sus Angulos es: "<<suma<<", es un Triangulo Recto :D"<<endl;
    }
    else{
        cout<<"La suma de sus Angulos es: "<<suma<<", no es un Triangulo Recto :C"<<endl;
    }
}
