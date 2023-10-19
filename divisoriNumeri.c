#include <stdio.h>


void main()
{
int n1;


printf("Inserisci il numero \n");
scanf("%d", &n1);


int meta= n1/2;


for(int i=1;i<=meta;i++)
{
if(n1%i==0)
printf("Il numero inserito è divisibile per %d\n", i);
if(i==meta)
printf("Il numero è divisibile per %d\n", n1);
}
}
