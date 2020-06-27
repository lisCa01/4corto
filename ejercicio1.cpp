#include <iostream>
#include <stdio.h>
int main()
{
char cadena[30];
char *murcielago="murcielago";

char *code="0123456789";

int x=0,j;

printf("ingresa una palabra\n");

gets(cadena);

while(cadena[x]!='\x0')
{
for(j=0;j<10;j++)

   if(cadena[x] == murcielago[j])

      cadena[x]=code[j];
x++;
}

 printf ("%s\n",cadena);

return 0;
}
