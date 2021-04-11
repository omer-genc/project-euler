/*
Summation of primes

 
Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/

#include <stdio.h>

int main()
{
    int number = 2000000,i,j;
    

    int primes[number+1];

    //populating array with naturals numbers
    for(i = 2; i<=number; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= number)
    {
        if (primes[i] != 0)
        {
            for(j=2; j<number; j++)
            {
                if (primes[i]*j > number)
                    break;
                else
                    // Instead of deleteing , making elemnets 0
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }

    long sum = 0;
    for(i = 2; i<=number; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0)
            sum = primes[i] + sum;
            
    }
    printf("%ld\n",sum);

    return 0;
}