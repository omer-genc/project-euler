// complated
/*
Even Fibonacci numbers
Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be: 
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.

*/

#include <stdio.h>

int fibonacci(int);

int main(void)
{
    /*
    int *a = 0;
    int b = 0;


    do
    {
        b++;
        a = &b;
    } while (fibonacci(&a) > 4000000);

    printf("%d",b);
    */

    int *a = 0;

    for (int i = 1; fibonacci(i) <= 4000000; i++)
    {
        
        printf("iterasyon %d fib %d \n",i,fibonacci(i));
        a = &i;
    }
    
    printf("\n%d\n",*a);
    int b = *a;
    printf("%d\n",b);

    int sum = 0;

    for (int i = 1; i < b; i++)
    {
        if(fibonacci(i) % 2 == 0)
        {
            sum = sum + fibonacci(i);
        }
        
    }

    printf("cift sayilar toplami: %d\n",sum);


    
    return 0;

}

int fibonacci(int a)
{
    if(a < 2)
        return 1;
    else
        return (fibonacci(a-1) + fibonacci(a-2));
    
}