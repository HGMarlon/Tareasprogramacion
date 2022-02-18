# include <iostream>

using namespace std;

int main()
{
    int num, mayor;
    for(int i=0; i<10; i++){
        printf("Igresa los 10 numeros:");
        scanf("%d", &num);
        if(i==0){
            mayor=num;
        }
        else{
            if (num>mayor)mayor=num;
        }
    }
    printf("EL NUMERO MAYOR ES %d",mayor);
	return 0;
}
