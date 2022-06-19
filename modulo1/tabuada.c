#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i, j;

   j=1;
   while(j<=10){
/*
        i=1;
        while(i <= 9){
        printf("%d * %d = %d\n", j,i,j*i);
        i++;

    }*/
    int a=0;
    while(a <=10){
        printf("%d * %d = %d\n", j,a, j*a);
        a++;
    }
    j++;
    puts(" ");
   }


}