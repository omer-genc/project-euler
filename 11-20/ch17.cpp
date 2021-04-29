/*
    coder: omer-genc

*/

#include<iostream>
using namespace std;

int main()
{
    unsigned int th1[] = {0,3,3,5,4,4,3,5,5,4};
    unsigned int th10[] = {0,3,6,6,5,5,5,7,6,6};
    unsigned int th100[] = {0,10,10,12,11,11,10,12,12,11};
    //char *th1[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    //char *th10[9] = {"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety "};

    unsigned int number = 0;
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 9; j >= 0; j--)
        {
            for (int k = 9; k >=0; k--)
            {
                number = number + th1[k] +th10[j] + th100[i];
            }
        }
        
    }

    cout<<number;
    
}