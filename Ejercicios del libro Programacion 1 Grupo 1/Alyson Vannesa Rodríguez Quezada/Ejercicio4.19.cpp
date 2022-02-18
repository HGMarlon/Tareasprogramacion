# include <iostream>

using namespace std;

int main()
{
    int num, mayor, mayor2;
    int contador=1;

    while(contador<=10){
        cout<<"Introduce un numero:"<<endl;
        cin>> num;
        contador +=1;

        if(num>mayor){
            mayor2=mayor;
            mayor=num;
        }
        else{
            if(num>mayor2){
                mayor2=num;
            }
        }
        }
        printf("El numero mayor es %d y el segundo mayor %d\n", mayor, mayor2);
	return 0;
    }

