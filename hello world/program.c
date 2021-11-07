#include <stdio.h>

int main()
{
    int A[8];
    int B[4];
    int C[4];
    int j = 0, k = 0;
    for (int i = 0; i <= 7; i++)
    {
        A[i] = i + 1; // input array 1 to 8
    }    
    for (int i = 0; i <= 7; i++)
    {        
        if (A[i]%2 == 0)
        {
            B[j] = A[i];
            j++;
        }
        else
        {
            C[k] = A[i];
            k++;
        }
    }
    printf ("\n Output array B :") ;
    for (int i=0; i<=3; i++) {
                printf (" %d", B[i]); // output array b
    }
    printf ("\n Output array C :") ;
    for (int i=0; i<=3; i++) {
        printf (" %d", C[i]); // output array c
    }

    return 0;
}