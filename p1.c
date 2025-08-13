// Implement a C program to simulate a simple calculator that performs addition, subtraction, multiplication, and division based on user input.
#include<stdio.h>

int main()
{
    int c,a,b;

    while(c!=0)
    {
        printf("Enter Your choice \n1 -> Addition\n2 -> Subtraction \n3 -> Multiplication \n4 -> Division\n0 -> Exit from code \n\nEnter your choice => ");
        scanf("%d",&c);

        j:
        if(c<=4 && c>0)
        {
            printf("Enter your First element => ");
            scanf("%d",&a);

            printf("Enter your Second element => ");
            scanf("%d",&b);
        }

        switch(c)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                printf("\nAddition of %d + %d = %d\n\n",a,b,a+b);
            }

            case 2:
            {
                printf("Subtraction of %d - %d = %d\n\n",a,b,a-b);
            }

            case 3:
            {
                printf("Multiplicatin of %d * %d = %d\n\n",a,b,a*b);
            }
            
            case 4:
            {
                if(a==0 || b==0)
                {
                    printf("0 is not valid for it please enter valed number...\n\n");
                    goto j;
                }
                else
                {
                    printf("Divison of %d / %d = %d\n\n",a,b,a/b);
                }
            }

        }
    }

}

/*
Output:-

Enter Your choice 
1 -> Addition
2 -> Subtraction 
3 -> Multiplication 
4 -> Division
0 -> Exit from code 

Enter your choice => 4
Enter your First element => 20
Enter your Second element => 4
Divison of 20 / 4 = 5

Enter Your choice
1 -> Addition
2 -> Subtraction
3 -> Multiplication
4 -> Division
0 -> Exit from code

Enter your choice => 0


*/

