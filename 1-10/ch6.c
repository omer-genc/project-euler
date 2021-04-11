/*
Sum square difference

Find the difference between the sum of the squares of the 
first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <math.h>

int sumSq(int a);
int sqSum(int a);
int kare(int a);

int main(void)
{

    int a = sqSum(100) - sumSq(100);
    printf("%d\n",a);


}

int kare(int a)
{
    return a * a; 
}

int sumSq(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum = sum + kare(i);
    }

    return sum;
    
}

int sqSum(int a)
{
    int sum = 0;
    for (int i = 0; i <= a; i++)
    {
        sum = sum + i;
    }
    
    return kare(sum);


}

