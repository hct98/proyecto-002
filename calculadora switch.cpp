#include<stdio.h>
#include<stdlib.h>
int main(){
float a,b,c;
int opt;

printf("1:suma\n2:resta\n3:mult\n4:div");
printf("\nseleccione una opcion:");
scanf("%d",&opt);
printf("introduce el primer operador:");
scanf("%f",&a);
printf("introduce el segundo valor:");
scanf("%f",&b);
switch(opt){
case 1:
    c=a+b;
    break;
case 2:
    c=a-b;
    break;
case 3:
    c=a*b;
    break;
case 4:
    while(b==0){

        printf("error,el segundo operador no puede ser 0.");
        printf("introduce el segundo valor:");
        scanf("%f",&b);
    }
c=a/b;
break;
default:;
}
printf("el resultado es:%.2f",c);




}
