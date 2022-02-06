#include <iostream>
using namespace std;
int main ()
{
    int numero;
    //VARIABLES DE PROGRAMACION1 (CASE 1)
    int Pzona,Pparcial1,Pparcial2,Pfinal,Pnotafinal;
    //VARIABLES DE DERECHO INFORMATICO (CASE 2)
    int Dzona,Dparcial1,Dparcial2,Dfinal,Dnotafinal;
    //VARIABLES CALCULO 1 (CASE 3)
    int Czona,Cparcial1,Cparcial2,Cfinal,Cnotafinal;
    //VARIABLES PROCESO ADMINISTRATIVO (CASE 4)
    int Azona,Aparcial1,Aparcial2,Afinal,Anotafinal;
    //VARIABLES FISICA 1 (CASE 5)
    int Fzona,Fparcial1,Fparcial2,Ffinal,Fnotafinal;
    //INICIO Y DESPLAZAMIENTO DE LA OPCIONES DEL MENU (SWITCH)

    cout<<"TOME EN CUENTA LO SIGUIENTE"<<endl;
    cout<<"LA ZONA MAXIMA ES DE 20PTS"<<endl;
    cout<<"EL PRIMER PARCIAL VALE 20PTS"<<endl;
    cout<<"EL SEGUNDO PARCIAL VALE 25PTS"<<endl;
    cout<<"EL EXAMEN FINAL VALE 35PTS"<<endl;
    cout<<""<<endl;
    cout<<"BIENVENIDO A LA CALCULADORA DE NOTAS DE SUS CURSOS"<<endl;
    cout<<"ESTAS SON LAS OPCIONES:"<<endl;
    cout<<"1.PROGRAMACION 1"<<endl;
    cout<<"2.DERECHO INFORMATICO"<<endl;
    cout<<"3.CALCULO 1"<<endl;
    cout<<"4.PROCESO ADMINISTRATIVO"<<endl;
    cout<<"5.FISICA 1"<<endl;
    cin>>numero;
    cout<<""<<endl;
    cout<<""<<endl;
    switch(numero){
    case 1: cout<<"BIENVENIDOS A PROGRAMACION 1"<<endl;
            cout<<"INGRESE SU ZONA"<<endl;
            cin>>Pzona;
            cout<<"INGRESE LA NOTA DE SU PRIMER PARCIAL"<<endl;
            cin>>Pparcial1;
            cout<<"INGRESE LA NOTA DE SU SEGUNDO PARCIAL"<<endl;
            cin>>Pparcial2;
            cout<<"INGRESE LA NOTA DE SU EXAMEN FINAL"<<endl;
            cin>>Pfinal;
            Pnotafinal= Pzona+Pparcial1+Pparcial2+Pfinal;
            cout<<"SU NOTA FINAL DEL CURSO ES: "<<Pnotafinal<<endl;
            break;

            case 2: cout<<"BIENVENIDOS A DERECHO INFORMATICO"<<endl;
            cout<<"INGRESE SU ZONA"<<endl;
            cin>>Dzona;
            cout<<"INGRESE LA NOTA DE SU PRIMER PARCIAL"<<endl;
            cin>>Dparcial1;
            cout<<"INGRESE LA NOTA DE SU SEGUNDO PARCIAL"<<endl;
            cin>>Dparcial2;
            cout<<"INGRESE LA NOTA DE SU EXAMEN FINAL"<<endl;
            cin>>Dfinal;
            Dnotafinal= Dzona+Dparcial1+Dparcial2+Dfinal;
            cout<<"SU NOTA FINAL EN EL CURSO ES: "<<Dnotafinal<<endl;
            break;

            case 3: cout<<"BIENVENIDOS A CALCULO 1"<<endl;
            cout<<"INGRESE SU ZONA"<<endl;
            cin>>Czona;
            cout<<"INGRESE LA NOTA DE SU PRIMER PARCIAL"<<endl;
            cin>>Cparcial1;
            cout<<"INGRESE LA NOTA DE SU SEGUNDO PARCIAL"<<endl;
            cin>>Cparcial2;
            cout<<"INGRESE LA NOTA DE SU EXAMEN FINAL"<<endl;
            cin>>Cfinal;
            Cnotafinal= Czona+Cparcial1+Cparcial2+Cfinal;
            cout<<"SU NOTA FINAL DEL CURSO ES: "<<Cnotafinal<<endl;
            break;

            case 4: cout<<"BIENVENIDOS A PROCESO ADMINISTRATIVO"<<endl;
            cout<<"INGRESE SU ZONA"<<endl;
            cin>>Azona;
            cout<<"INGRESE LA NOTA DE SU PRIMER PARCIAL"<<endl;
            cin>>Aparcial1;
            cout<<"INGRESE LA NOTA DE SU SEGUNDO PARCIAL"<<endl;
            cin>>Aparcial2;
            cout<<"INGRESE LA NOTA DE SU EXAMEN FINAL"<<endl;
            cin>>Afinal;
            Anotafinal= Azona+Aparcial1+Aparcial2+Afinal;
            cout<<"SU NOTA FINAL DEL CURSO ES: "<<Anotafinal<<endl;
            break;

            case 5: cout<<"BIENVENIDOS A FISICA 1"<<endl;
            cout<<"INGRESE SU ZONA"<<endl;
            cin>>Fzona;
            cout<<"INGRESE LA NOTA DE SU PRIMER PARCIAL"<<endl;
            cin>>Fparcial1;
            cout<<"INGRESE LA NOTA DE SU SEGUNDO PARCIAL"<<endl;
            cin>>Fparcial2;
            cout<<"INGRESE LA NOTA DE SU EXAMEN FINAL"<<endl;
            cin>>Ffinal;
            Fnotafinal= Fzona+Fparcial1+Fparcial2+Ffinal;
            cout<<"SU NOTA FINAL DEL CURSO ES: "<<Fnotafinal<<endl;
            break;




    }
cout<<""<<endl;
cout<<"NOMBRE: MARLON ESTUARDO HERNANDEZ GIRON  CARNET:9491-21-7312"<<endl;





}
