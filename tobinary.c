#include "main.h"
void _tobinary(int num)
{

        int binary[64];
	int result[64];
        int i=0;
        int j;
        int k=0;
	for(j=0; j<64 ; j++)
        {
         result[j]=0;
        }

        while(num != 0)
	{
        binary[i]=num%2 ;
        i++ ;
        num/=2 ;
        }

        for(j=(i-1) ; j>=0 ; j--)
        {
        result[k]=binary[j];
	k++;
        }
	for(j=0; j<64 ; j++)
        {
        _printf("%d",result[j]);
        }
}
