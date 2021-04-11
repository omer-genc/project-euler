/*
Special Pythagorean triplet
  
Problem 9

A Pythagorean triplet is a set of three natural 
numbers, a < b < c, for which,
a2 + b2 = c2


There exists exactly one Pythagorean triplet 
for which a + b + c = 1000.
Find the product abc.

*/
/*
b - a < c < b + a
2b < a + b + c < 2b + 2a
2b < 1000 ==> b < 500
a + b + c < 2a + 2b
500 < a + b ==>  
*/
#include<stdio.h>

int main(void)
{
    int a,b,c;

    for (int i = 1; i < 333; i++)
    {
        for (int j = 1; j < 500; j++)
        {
            for (int k = 333; k < 500; k++)
            {
                if((k*k == i*i + j*j) && (i + j + k == 1000))
                {
                    printf("i %d\nj %d\nk %d\n",i,j,k);
                    i = 500;
                }
            }   
            
        }
        
    }
    
}