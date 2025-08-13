//Write a C program that defines a function to print a reverse 1D array elements and print sum of all elements.

#include<stdio.h>

int revarray(int *ptr,int s)
{
    int *p=ptr;
    int t[s];
    
    for(int i=0;i<=s;i++)
    {
        t[i]=*p;
        p++;
    }

    printf("\nReverse of array is\n");
    for(int i=s;i>=0;i--)
    {
       printf("%d ",t[i]);
    }
}

int sumarray(int *ptr,int s)
{
    int *p=ptr;
    int d=0;

    for(int i=0;i<=s;i++)
    {
        d=d+*p;
        p++;
    }

    printf("\nSum of your array is => %d",d);
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
    
    revarray(&a[0],s);
    printf("\n");
    sumarray(&a[0],s);

}

/*
Output:-

Enter size of array => 5

Enter Your value 
Array[0] => 1
Array[1] => 2
Array[2] => 3
Array[3] => 4
Array[4] => 5

Reverse of array is
5 4 3 2 1

Sum of your array is => 15

*/