#include <stdio.h>

void main ()
{
int ipotenusa=0;


printf("Inserisci l'ipotenusa: ");
scanf("%d", &ipotenusa);


printf("Il numero inserito è: %d\n", ipotenusa);


for(int i=0; i<ipotenusa;i++)
for(int j=1; j<i;j++)
for(int k=1; k<=j;k++)
if((k*k)+(j*j)==(i*i))
printf("La terna pitagorica è: %d %d %d \n", k ,j, i );


}
