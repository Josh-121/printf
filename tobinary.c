#include <stdlib.h>
int _tobinary(int num)
{
	int len=0;
	int count=num;
	int *binary=NULL;
	
	while(count != 0){
        len++ ;
        count/=2 ;
        }
	binary = malloc(sizeof(int)*len);

	if (binary == NULL)
		exit (1);

	int i = 0 ;
	while(num != 0){
	binary[i]=num%2 ;
	i++ ;
	num/=2 ;
	}
	
	int result = 0;
	int j;
	for(j=(i-1) ; j>=0 ; j--)
	{
	if(binary[j] == 0)
		result *= 10 ;
	else{
		result*=10 ;
		result+=1 ;
	}
	}
	free(binary);
	return result ;
}
