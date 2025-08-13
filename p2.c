//Write a C program to find the sum of elements in an array using a function.

#include<stdio.h>

int sumarray(int *ptr,int s)
{
    int *p=ptr;
    int d=0;

    for(int i=0;i<=s;i++)
    {
        d=d+*p;
        p++;
    }
    printf("Sum of your array is => %d",d);
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
Sum of your array is => 15

*/