/* practica 1.1
nombre:Carrera Morales Edgar Roberto grupo:1AV6*/
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main(void){

printf("1.-suma \n");
printf("2.-resta \n");
printf ("3.-multiplicacion \n");
printf ("4.- division\n" );
printf("introduce 1 para la suma, 2 para resta, 3 para multiplicacion, 4 para division.");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("introduce la primer cantidad");
scanf("%d",&a);
printf("introduce la segunda cantidad");
scanf ("%d",&b);
int c;
if (opt==1){
    c=a+b;
}
else {
    if (opt==2)
    c=a-b;

else
    if (opt==3)
        c=a*b;

  if (b==0){
printf("error, ingresa un valor diferente de 0");
    scanf ("%d",&b);
}
    c=a/b;
}
printf("el resultado es %d", c);

}




