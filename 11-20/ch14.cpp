/*
    Coder: omer-genc

    Problem:
    The following iterative sequence is defined for the set of positive integers:
    n → n/2 (n is even)
    n → 3n + 1 (n is odd)
    Using the rule above and starting with 13, we generate the following sequence:
    13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
    It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
    Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
    Which starting number, under one million, produces the longest chain?
    NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include<iostream>
using namespace std;


int main()
{
   unsigned int liste[1000001];
   for (int i = 1; i < 1000001; i++)
   {
       liste[i]=0;
    }
   
   liste[1] = 1;
   liste[2] = 2;

   for (int i = 3; i < 1000001; i++)
   {
       unsigned int value = i;
       unsigned int chain = 0;
       while(value>1)
       {
           if (value<i)
           {
               liste[i] = liste[value] + chain;
               break;
           }
           if(value%2==0)
           {
               value = value/2;
               chain+=1;
           }
           else
           {
               value = 3*value+1;
               chain+=1;

           }
        }//end while
    }

   int iter = 0;
   int index;
   int maxchain = 0;

   while (iter<1000001)
   {
       if(liste[iter]>maxchain)
       {
           maxchain=liste[iter];
           index = iter;

        }
       iter++;
    }

    cout<<"Value: "<<index<<" Chain: "<<maxchain;
   
}