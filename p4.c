//Write a C program to find cube of each elements of an 1D array using Pointer.

#include<stdio.h>

int sumarray(int *ptr,int s)
{
    int *p=ptr;
    int t[s],cu[s];
    
    for(int i=0;i<=s;i++)
    {
        t[i]=*p;
        p++;
    }
    
    for(int i=0;i<=s;i++)
    {
        cu[i]=t[i]*(t[i]*t[i]);
    }
    
    for(int i=0;i<=s;i++)
    {
        printf("Cube of array[%d] => %d\n",i,cu[i]);
    }


}

int main()
{
    int s;

    printf("Enter size of array => ");
    scanf("%d",&s);

    s--;
    int a[s];

    printf("\nEnter Your value \n");
    for(int i=0;i<=s;i++)
    {
        printf("Array[%d] => ",i);
        scanf("%d",&a[i]);
    }
    
    printf("\n");
    sumarray(&a[0],s);

}

/*
Output:-

Enter size of array => 3

Enter Your value 
Array[0] => 1
Array[1] => 2
Array[2] => 3

Cube of array[0] => 1
Cube of array[1] => 8
Cube of array[2] => 27
*/