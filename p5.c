/*
Print a below pattern using nested for loop in C language:
11

12 13

14 15 16

17 18 19 20

21 22 23 24 25
*/

#include<stdio.h>

int main()
{
    int p,s;

    printf("Enter rows=> ");
    scanf("%d",&s);
    printf("Enter starting number=> ");
    scanf("%d",&p);
    
    for(int r=0;r<=s;r++)
    {
        for(int c=0;c<r;c++)
        {
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
}

/*
Output:-

Enter rows=> 5
Enter starting number=> 11

11 
12 13 
14 15 16 
17 18 19 20 
21 22 23 24 25 
*/