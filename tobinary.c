#include "main.h"
void _tobinary(int num)
{

        long binary[100];
        long i=0;
        long j=0;


        while(num != 0){
        binary[i]=num%2 ;
        i++ ;
        num/=2 ;
        }

        for(j=(i-1) ; j>=0 ; j--)
        {
        _printf("%d",binary[j]);
       }

}
