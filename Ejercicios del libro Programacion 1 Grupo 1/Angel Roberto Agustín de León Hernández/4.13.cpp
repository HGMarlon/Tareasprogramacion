#include <iostream>

using namespace std;

int main()
{
    float K,L;
    float Kilometros=0,Litros=0,Total;
    while(K>=0){
        cout<<"Escriba los Kilometros Usados (-1 para salir): ";
        cin>>K;
        if(K<0){
                return 0;
        }
        else{
            cout<<"Escriba los Litros: ";
            cin>>L;
            cout<<"KPL en este rebastimiento: "<<K/L<<endl;
        }
        Kilometros+=K;
        Litros+=L;
        Total=Kilometros/Litros;
        cout<<"Total KPL: "<<Total<<endl;
        cout<<endl;
    }
}
