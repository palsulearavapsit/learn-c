//type of operators
//Arithmatic
//Logical
//Bitwise
//Relational
//Assignment
//Misc

/*
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a = 6, b = 7;
    printf("The sum of a and b is %d\n", a + b);
    printf("The diff of a and b is %d\n", a - b);
    printf("The mul of a and b is %d\n", a * b);
    printf("The div of a and b is %f\n", (float)a / b);
    printf("The remainder of a and b is %d\n", a % b);
    return 0;
}
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,op;
    printf("enetr a: \n");
    scanf("%d" , &a);
    printf("enter b: \n");
    scanf("%d" , &b);
    printf("CHOOSE A NUMBER FROM THE LIST FOR A VALID OPERATION");
    printf("1.Addition");
    printf("2.Subtraction");
    printf("3.Multiplication");
    printf("4.Divison");
    printf("5.Modulo");
    printf("Choose a valid operation number  1 or 2 or 3 or 4 or 5 :   \n" );
    scanf("%d" , &op);
    if(op==1)
    {
        printf("sum is %d" , a+b);
    }
    else if(op==2)
    {
        printf("subtraction is %d" , a-b);
    }
    else if(op==4)
    {
        if(b==0)
        {
            printf("Cannot divide by 0");
        }
        else
        {
            printf("div is %f" , (float)a/b);
        }
        }
    else if(op == 3)
    {
        printf("mul is %d" , a*b);
    }
    else if(op == 5)
    {
        printf("modulo is %f" , fmod(a,b));
    }
    else
    {
        printf("choose a valid operation number ");
    };
    return 0;
}