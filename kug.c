#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum=0;

    //input array size
    printf("Enter the array size : ");
    scanf("%d", &n);

    //arrary 1 and input values into 1st array
    int array1[n], i;

    for (i=0; i<10; i++)
    {
        printf("Enter value for array 01 : ", i);
        scanf("%d", &array1[i]);
        sum=sum+array1[i];
    }

    //arrary 2 and input values into 2nd array
    int array2[n], j;

    for (j=0; j<10; j++)
    {
        printf("Enter value for array 02 : ", j);
        scanf("%d", &array1[j]);
        sum=sum+array2[j];
    }

    //arrary 3 and get vector sum
    int array3[n], k;

    for (k=0; k<10; k++)
    {
        array3[k]=array1[k]+array2[k];
    }

    //output
    int lanswer;

    for(lanswer=0; lanswer<10; lanswer++)
    {
        printf("\nVector Sum is %d\n", array3[k]);
    }
}
