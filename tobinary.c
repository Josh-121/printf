#include "main.h"
void _tobinary(int num)
{
        int len=0;
        int count=num;
        int *binary=NULL;
        int i=0;
        int j=0;

        while(count != 0){
        len++ ;
        count/=2 ;
        }
        binary = malloc(len*sizeof(int));

        if (binary == NULL)
                exit (1);

        while(num != 0){
        binary[i]=num%2 ;
        i++ ;
        num/=2 ;
        }

        for(j=(i-1) ; j>=0 ; j--)
        {
        _printf("%d",binary[j]);
        }
        free(binary);
}
