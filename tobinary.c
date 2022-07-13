#include <stdio.h>
int _tobinary(int num)
{

        int result=0;
	int binary=0;
	int len=0;

	while(num != 0){
	if((num%2) == 0)
                result *= 10 ;
        else{
                result*=10 ;
                result+=1 ;
        }
	len++ ;
	num/=2 ;
	}


        while(len != 0){
        if((result%10) == 0)
                binary *= 10 ;
        else{
                binary*=10 ;
                binary+=1 ;
        }
        len-- ;
	result/=10 ;
        }

	
	return binary;
}
