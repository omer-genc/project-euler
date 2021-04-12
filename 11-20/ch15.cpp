/*
    coder: omer-genc

*/

#include<iostream>
using namespace std;

int main()
{
    double table[21][21];
    int i = 1;
    while(i<21)
    {
        table[0][i] = 1;
        table[i][0] = 1;
        i++;
    }
    table[0][0]=0;

    for (int i = 1; i < 21; i++)
    {
        for (int j = 1; j < 21; j++)
        {
            table[i][j]= table[i-1][j] + table[i][j-1];
        }
        
    }


    cout<<endl<<endl<<endl<<table[20][20]<<endl;
    printf("%f",table[20][20]);

    
    


    return 0;
}