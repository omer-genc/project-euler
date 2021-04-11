/*

complated

Largest palindrome product

A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/
#include <stdio.h>

int main(void)
{
    int sonuc = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            
            if( i * j <= 99999)
            {
                int y = i * j;
                int a5 = y / 10000;
                y = y % 10000;
                int a4 = y / 1000;
                y = y % 1000;
                int a3 = y / 100;
                y = y % 100;
                int a2 = y / 10;
                y = y % 10;
                int a1 = y;

                
                
            }
            else
            {
                
                int y = i * j;
                int a6 = y / 100000;
                y = y % 100000;
                int a5 = y / 10000;
                y = y % 10000;
                int a4 = y / 1000;
                y = y % 1000;
                int a3 = y / 100;
                y = y % 100;
                int a2 = y / 10;
                y = y % 10;
                int a1 = y;

                if((a1 == a6) && (a2 == a5) && (a3 == a4))
                {
                    
                    
                    if(sonuc < (i*j))
                    {
                        
                        sonuc = i*j;
                    }
                    else
                    {
                        
                    }
                    
                }
                else
                {
                    
                }
            }
            
            
        }

       
        
    }
    printf("sonuc: %d\n",sonuc);
}