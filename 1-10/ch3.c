/*
complated

Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	long sayi = 600851475143;
    
	
	
	
	for(int i=2;sayi!=1;i++){
		
		if(sayi%i==0){
			
			sayi/=i;
			printf("%d  ",i);
			i--;
		
		}
	}
    printf("\n");

	
	
	return 0;
}