/*
    coder: omer-genc

*/

#include<iostream>
#include<math.h>
#define number 1000
using namespace std;

int main()
{
    
    
    int liste[number];
    for (int i = 0; i < number; i++)
    {
        liste[i] = 0;
    }
    
    liste[number-1]=1;

    for (int i = 0; i < 1000; i++)
    {
        int j = number-1;
        while (j>0)
        {
            liste[j]=liste[j]*2;
            j--;
        }
        j=number-1;
        while (j>0)
        {
            if (liste[j]>=10)
            {
                liste[j]=liste[j]-10;
                liste[j-1]=liste[j-1] +1;
            }
            j--;
        }
    }

    for (int i = 0; i < number; i++)
    {
        cout<<liste[i];
    }

    int sum_digit=0;
    for (int i = 0; i < number; i++)
    {
        sum_digit=sum_digit+liste[i];
    }

    cout<<"\n\n\n"<<sum_digit;
    
}