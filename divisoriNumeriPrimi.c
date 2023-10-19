#include <stdio.h>

int ControlloPrimi(int a)
{
int meta=a/2;
int cnt=0;
for(int i=1;i<=meta;i++)
{
if(a%i==0)
cnt++;
}
}


void main()
{
int n1;


printf("Inserisci il numero \n");
scanf("%d", &n1);


int meta= n1/2;


for(int i=1;i<=meta;i++)
{
if(n1%i==0)
{
if(ControlloPrimi(i)==1)
printf("Il numero inserito è divisibile per %d\n", i);
}
if(i==meta)
printf("Il numero è divisibile per %d\n", n1);
}
}

